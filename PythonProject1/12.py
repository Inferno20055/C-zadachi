

#zadanie 1
class Car:
    def __init__(self,stamp,model,colour,year,engine_capacity,tank):
        self.stamp=stamp
        self.model=model
        self.colour=colour
        self.year=year
        self.engine_capacity=engine_capacity
        self.tank=tank


    def di(self):
        self.year +=1
    def tankfll(self):
        self.tank -=30


Lada=Car("lADA","Vesta","Белый",2015,120,400)
print(Lada.stamp," , ",Lada.model," , ",Lada.colour," , ",Lada.year," , " ,Lada.engine_capacity)
print(Lada.year)
Lada.di()
print(Lada.year)
print(Lada.tank)
Lada.tankfll()
print(Lada.tank)
#zadanie 2
class Students:
    def __init__(self,number,surname,name,group,year_of_issue):
        self.number=number
        self.surname=surname
        self.name=name
        self.group=group
        self.year_of_issue=year_of_issue

    def New_Year_isue(self):
        self.year_of_issue = 2021
    def New_group(self):
        self.group="RPO/2"


Ivan=Students(1901,"Ivanov","Ivan","RPO/1",2015)
print("Первоначальная группа: ",Ivan.group)
Ivan.New_group()
print("Ваша нынешняя группа: ",Ivan.group)
print("Год выдачи документа: ",Ivan.year_of_issue)
Ivan.New_Year_isue()
print("Год перевыдачи документов: ",Ivan.year_of_issue)
#zadanie 3
class Energetic:
    def __init__(self,firm,taste,volume,taurine,caffeine):
        self.firm=firm
        self.taste=taste
        self.volume=volume
        self.taurine=taurine
        self.caffeine=caffeine
    def Drink(self):
        self.volume=350-(350*0.1)
    def taste_change(self):
        self.taste = "Дыня"

IMBA=Energetic("Imba","Киви",350,120,26)
print("Объем до: ",IMBA.volume)
IMBA.Drink()
print("после:",IMBA.volume)
print("Вкус до: ",IMBA.taste)
IMBA.taste_change()
print("После: ",IMBA.taste)

