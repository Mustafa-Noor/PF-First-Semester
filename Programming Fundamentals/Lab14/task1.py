def area_of_country(country,area):
    result=(area/148940000)*100
    return result

country = input("Enter country: ")
area =int(input("Enter area: "))

print(area_of_country(country,area))


