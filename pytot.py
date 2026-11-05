# # ##class and opject in oop

# # class Human:
# #     def __init__(self,name,age,address):
# #         self.name=name
# #         self.age=age
# #         self.address=address
 
# #     def walk(self):
# #         print(f"{self.name} is walking.")
# #     def details(self):
# #         print(f"Name: {self.name}, Age: {self.age}, Address: {self.address}")
# # p=Human("preetham",19,"bangalore")
# # a=Human("praveen",20,"bangalore")
# # b=Human("praveen",20,"bangalore")
# # p.walk()
# # p.details()
# # a.walk()        
# # a.details()
# # b.walk()
# # b.details()

# ## constructor in oop

# class human:
#     def __init__(self,name):
#         print("constructor is called",name)
#         self.name=name
#     def details(self):
#         print(f"Name: {self.name}")
# p=human("preetham")
# p.details()


# ##optional parameter in constructor

# class human:
#     def __init__(self,name="unknown",age=0):
#         self.name=name
#         self.age=age
#     def details(self):
#         print(f"Name: {self.name}, Age: {self.age}")

# p=human()
# p.details()



# class Car:
#     def start_engine(self,value):
        
#         print("Engine started",value)

#     def accelerate(self):
#         print("Car accelerating")

#     def brake(self):
#         print("Car stopping")

# a = Car()
# a.start_engine(100)  # Abstracts complex internal workings
# a.accelerate()
# a.brake()

# class number:
#     def __init__(self,a=0,b=0):
#         self.a=a
#         self.b=b
#     def add(self):
#         print(f"addition of {self.a} and {self.b} is {self.a+self.b}")
#     def sub(self):
#         print(f"subtraction of {self.a} and {self.b} is {self.a-self.b}")
#     def mul(self):
#         print(f"multiplication of {self.a} and {self.b} is {self.a*self.b}")
#     def div(self):
#         if self.b != 0:
#             print(f"division of {self.a} and {self.b} is {self.a/self.b}")
#         else:
#             print("Division by zero is not allowed")
# x=int(input("enter the first number: "))
# y=int(input("enter the second number: "))
# n=number(x,y)
# n.add()
# n.sub()
# n.mul()
# n.div()

# # with open("file.html","w") as f:
# #     f.write("<html><body><h1>hello world</h1></body></html>")

# from abc import ABC, abstractmethod

# # The "Blueprint" (Abstract Class)
# class Animal(ABC):
#     @abstractmethod
#     def make_sound(self):
#         pass  # No implementation here

# # Child class MUST implement make_sound
# class Dog(Animal):
#     def make_sound(self):
#        print("Bark!")

# class Cat(Animal):
#     def make_sound(self):
#         print("Meow!")

# # animal = Animal()  <-- This would throw an error!
# my_dog = Dog()
# my_dog.make_sound() # Output: Bark!



## encaplution 

# class BankAccount:
#     def __init__(self,username,password):
#         self.username=username
#         self.__password=password
#     def get_username(self):
#         print(self.username)
#     def get_password(self):
#         print(self.__password)
# a=BankAccount("ram","1212")
# a.get_username()
# a.get_password()
# print(a.__password) # this will give an error because password is private and cannot be accessed directly


## inheritance

class user:
    def __init__(self,username,password):
        self.username=username
        self.password=password
    def login(self):
        print(F"{self.username} LOGIN SUCCESSFUL  ")
class admin(user):
    def adminLevel(self):
        print(f"{self.username} is an admin")

a=admin("preetham","1212")
a.adminLevel() 
a.login()