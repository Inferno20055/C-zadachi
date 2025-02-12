# # инкапсуляция и абстракция
# class Colour:
#     def __init__(self, saturation, brightness):
#         self.__saturation = saturation
#         self.__brightness = brightness
#
#     def display_info(self):
#         print(f"saturation: {self.__saturation}, brightness: {self.__brightness}")
#
#     def set_saturation(self, saturation):
#         self.__saturation = saturation
#
#     def get_saturation(self):
#         return self.__saturation
# colour1 = Colour("насыщенный", "Желтый")
# colour1.display_info()
#
# # Наследование
# class EColour(Colour):
#     def __init__(self, saturation, brightness, color_code):
#         super().__init__(saturation, brightness)
#         self.__color_code = color_code
#
#     def display_info(self):
#         super().display_info()
#         print(f"color_code: {self.__color_code}")
#
#
# eColour1 = EColour("насыщенный", "Желтый", "#ffff00")
# eColour1.display_info()
# #полиморфизм
# def display_colour_info(Colour):
#     Colour.display_info()
# Colour2=Colour("Чёрный","#0000")
# Colour2.display_info()
# инкапсуляция и абстракция
class Clock:
    def __init__(self, hours, minutes):
        self.__hours = hours
        self.__minutes = minutes

    def display_time(self):
        print(f"{self.__hours:02}:{self.__minutes:02}")

    def set_time(self, hours, minutes):
        self.__hours = hours
        self.__minutes = minutes

    def get_hours(self):
        return self.__hours

    def get_minutes(self):
        return self.__minutes


clock1 = Clock(10, 30)
clock1.display_time()

# Наследование
class DigitalClock(Clock):
    def __init__(self, hours, minutes, display_format):
        super().__init__(hours, minutes)
        self.__display_format = display_format

    def display_time(self):
        if self.__display_format == '12-hour':
            hours = self.get_hours() % 12
            period = 'AM' if self.get_hours() < 12 else 'PM'
            print(f"{hours:02}:{self.get_minutes():02} {period}")
        else:
            super().display_time()


digital_clock1 = DigitalClock(14, 45, '12-hour')
digital_clock1.display_time()

digital_clock2 = DigitalClock(14, 45, '24-hour')
digital_clock2.display_time()

# Полиморфизм
def display_clock_info(clock):
    clock.display_time()

clock2 = Clock(23, 59)
display_clock_info(clock2)

display_clock_info(digital_clock1)
