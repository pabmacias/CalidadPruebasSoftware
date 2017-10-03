require 'watir'
browser = Watir::Browser.new :firefox

browser.goto 'http://blazedemo.com'

opciones = browser.select_list(:name => "fromPort").options
cont = 0
opciones.each do |op|
    if (cont == 5)
        op.select
    end
    cont += 1
end

opciones = browser.select_list(:name => "toPort").options
cont = 0
opciones.each do |op|
    if (cont == 2)
        op.select
    end
    cont += 1
end

browser.button(:class => "btn btn-primary").click

puts browser.table(:id => "table")[3].browser.button(:class => "btn btn-small").click

browser.text_field(:id => "inputName").set("Macias Pablo")

browser.text_field(:id => "address").set("Av Por Ahi #1234")

browser.text_field(:id => "city").set("Alvaro Obregon")

browser.text_field(:id => "state").set("Mexico City")

browser.text_field(:id => "zipCode").set("67890")

opciones = browser.select_list(:id => "cardType").options
cont = 0
opciones.each do |op|
    if (cont == 1)
        op.select
    end
    cont += 1
end

browser.text_field(:id => "creditCardNumber").set("1234567891011")

browser.text_field(:id => "creditCardMonth").set("08")

browser.text_field(:id => "creditCardYear").set("21")

browser.text_field(:id => "nameOnCard").set("Pablo Macias")

browser.checkbox(:id => "rememberMe").set

browser.button(:class => "btn btn-primary").click
