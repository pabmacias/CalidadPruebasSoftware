#include "gtest/gtest.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Scanner.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;
using ::testing::TestInfo;
using ::testing::TestCase;
using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using namespace std;


class EventListener: public EmptyTestEventListener
{
public:
  ofstream outputFile;

  virtual void OnTestProgramStart(const UnitTest& ut)
  {
    printf("Bienvenido a la ejecucion de las pruebas \n");
    outputFile.open("log.txt");
    outputFile << "Iniciando Test" << endl;
    outputFile << "<------------------------------>" << endl;
  }

  virtual void OnTestProgramEnd(const UnitTest& ut)
  {
    outputFile << "Tests Correctos: " << ut.successful_test_count() << endl;
    outputFile << "Tests Fallidos: " << ut.failed_test_count() << endl;
    outputFile << "Tiempo de ejecucion: " << ut.elapsed_time() << " ms" << endl;
    outputFile.close();
  }

  virtual void OnTestPartResult(const TestPartResult& tpr)
  {
    if (tpr.failed())
    {
      outputFile << "Fallo por: " << tpr.summary() << endl;
      outputFile << "Linea de error: " << tpr.line_number() << endl;
    }
  }

  virtual void OnTestCaseStart(const testing::TestCase& tc)
  {
    outputFile << "Test Case: " << tc.name() << endl;
  }

  virtual void OnTestStart(const testing::TestInfo& ti)
  {
    outputFile << "Test Name: " << ti.name() << endl;
  }

  virtual void OnTestCaseEnd(const testing::TestCase& tc)
  {
    outputFile << "Elapsed Time Case: " << tc.elapsed_time() << " ms" << endl;
  }
};

class Fixture : public ::testing::TestWithParam<int>
{
public:
  Scanner * s;

  void SetUp()
  {
    s = new Scanner;
    s->createVectorPort();
  }

  void TearDown()
  {
    delete s;
  }
};

TEST_P(Fixture, t1)
{
  EXPECT_TRUE(s->checkPort(GetParam()));
}

INSTANTIATE_TEST_CASE_P(enteros, Fixture, Values(22,81,443,631,3306,68));

int a[] = {22,80,442,631,3306,68};
INSTANTIATE_TEST_CASE_P(enteros2, Fixture, ValuesIn(a));

int main(int argc, char**argv)
{
    InitGoogleTest(&argc,argv);
    TestEventListeners& listeners =UnitTest::GetInstance()->listeners();
    delete listeners.Release(listeners.default_result_printer());
    listeners.Append(new EventListener);
    return RUN_ALL_TESTS();
}
