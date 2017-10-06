#!/usr/bin/python

from selenium import webdriver
from selenium.webdriver.common.by import By
from random import randint

driver = webdriver.Firefox()
driver.get("http://micampus.csf.itesm.mx/index.php/division-de-diseno-ingenieria-y-arquitectura/directorio")

mailString = []

mails = driver.find_elements(By.CSS_SELECTOR, "td a:link")
for mail in mails:
    temp = mail.text
    mailString.append(temp)

i=4
names = []

alls = driver.find_elements(By.CSS_SELECTOR, "tr td")
for all1 in alls:
    if i == 4:
        temp = all1.text.split('\n')
        names.append(temp[0])
        i=0
    i+=1

driver.get("http://blazedemo.com")

n=28
i=0

for name in names:
    links = driver.find_elements(By.TAG_NAME, "a")
    for link in links:
        if link.get_attribute("text") == "home":
            link.click()
            break

    links = driver.find_elements(By.TAG_NAME, "a")
    for link in links:
        if link.get_attribute("text") == "Register":
            link.click()
            break

    driver.find_element(By.CSS_SELECTOR, "input#name").send_keys(name)
    driver.find_element(By.CSS_SELECTOR, "input#company").send_keys("ITESM")
    driver.find_element(By.CSS_SELECTOR, "input#email").send_keys("testing" + str(n) + "_" + mailString[i])
    driver.find_element(By.CSS_SELECTOR, "input#password").send_keys("123456")
    driver.find_element(By.CSS_SELECTOR, "input#password-confirm").send_keys("123456")

    links = driver.find_elements(By.TAG_NAME, "button")
    for link in links:
        if link.get_attribute("type") == "submit":
            link.click()
            break

    #driver.find_element(By.CSS_SELECTOR, "input#email").send_keys("testing1_" + mailString[0])
    #driver.find_element(By.CSS_SELECTOR, "input#password").send_keys("123456")

    links = driver.find_elements(By.TAG_NAME, "button")
    for link in links:
        if link.get_attribute("type") == "submit":
            link.click()
            break

    #driver.find_element(By.CSS_SELECTOR, "div.navbar-header a.navbar-brand").click()

    driver.find_element(By.CSS_SELECTOR, "a.dropdown-toggle").click()

    links = driver.find_elements(By.CSS_SELECTOR, "ul.dropdown-menu a")
    for link in links:
        link.click()

    i+=1

i=0

for name in names:
    links = driver.find_elements(By.TAG_NAME, "a")
    for link in links:
        if link.get_attribute("text") == "Travel The World":
            link.click()
            break

    options = driver.find_elements(By.CSS_SELECTOR, "select[name='fromPort'] option")
    options[randint(0, len(options)-1)].click()

    options = driver.find_elements(By.CSS_SELECTOR, "select[name='toPort'] option")
    options[randint(0, len(options)-1)].click()

    input = driver.find_element(By.TAG_NAME, "input")
    input.click()

    inputs = driver.find_elements(By.CSS_SELECTOR, "td input")
    inputs[randint(0, len(inputs)-1)].click()

    txt = driver.find_element(By.ID, "inputName")
    txt.send_keys(name)

    txt = driver.find_element(By.ID, "address")
    txt.send_keys("testing" + str(n) + "_" + mailString[i])

    txt = driver.find_element(By.ID, "city")
    txt.send_keys("Alvaro Obregon")

    txt = driver.find_element(By.ID, "zipCode")
    txt.send_keys("12345")

    options = driver.find_elements(By.CSS_SELECTOR, "select#cardType option")
    options[randint(0, len(options)-1)].click()

    txt = driver.find_element(By.ID, "nameOnCard")
    txt.send_keys(name)

    inputs = driver.find_elements(By.CSS_SELECTOR, "div.controls input")
    for input in inputs:
        input.click()
