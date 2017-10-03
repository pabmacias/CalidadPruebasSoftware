from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()
driver.get("http://nitrowriters.com/form/form.html")

txt = driver.find_element_by_id("my_text_field")
txt.send_keys("Sobre escribe esto")

txt = driver.find_element(By.ID, "my_text_field")
txt.send_keys("Este es un primer ejemplo")

descriptions = driver.find_elements(By.CLASS_NAME, "description")
for desc in descriptions:
    print(desc.text)

txt_area = driver.find_element(By.TAG_NAME, "textarea")
txt_area.send_keys("Este es el texto del text area")

link = driver.find_element(By.LINK_TEXT, "Go to SitePoint")
print(link.text)
#link.click()

inputs = driver.find_elements(By.TAG_NAME, "input")
for input in inputs:
    if input.get_attribute("type") == "text":
        input.send_keys("el mismo texto en todos lados")

print("\nUniversal Selector:")
options = driver.find_elements(By.CSS_SELECTOR, "* option")
for option in options:
    print(option.text)

print("\nGrouping Type Selector:")
hs = driver.find_elements(By.CSS_SELECTOR, "h2")
for h in hs:
    print(h.text)

print("\nDescendant Selector:")
lis = driver.find_elements(By.CSS_SELECTOR, "ul li")
for li in lis:
    print(li.text)

print("\nChild Selector:")
lis2 = driver.find_elements(By.CSS_SELECTOR, "ul > li")
for li2 in lis2:
    print(li2.text)

print("\nAdjacent Sibling:")
ps = driver.find_elements(By.CSS_SELECTOR, "h2 + p")
for p in ps:
    print(p.text)

print("\nGeneral Sibling:")
ps = driver.find_elements(By.CSS_SELECTOR, "h2 ~ p")
for p in ps:
    print(p.text)

print("\nClass Selector:")
divs = driver.find_elements(By.CSS_SELECTOR, "DIV.form_description")
for div in divs:
    print(div.text)

print("\nID Selector:")
lis3 = driver.find_elements(By.CSS_SELECTOR, "li#li_2")
for li3 in lis3:
    print(li3.text)

print("\nPseudo Element:")
links2 = driver.find_elements(By.CSS_SELECTOR, "a:link")
for link2 in links2:
    print(link2.text)
