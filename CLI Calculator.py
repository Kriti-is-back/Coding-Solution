"""
  CLI Calculator in Python
"""
def printMenu():
  print("Menu")
  print("1. Add")
  print("2. Subtract")
  print("3. Multiply")
  print("4. Divide")
  print("5. Mod")
  print("6. Square")

  while True:
    option = int(input("Enter option: "))
    if option in range(1, 7):
      return option
    else:
      print("Not valid option.")
      continue

if __name__== "__main__":
  while True:
    option = printMenu()
    operators = ['0','+','-','*','/','%','**']

    try:
      in1 = int(input("Enter number 1: "))
      in2 = int(input("Enter number 2: "))

      if option == 1:
        answer = in1 + in2
      elif option == 2:
        answer = in1 - in2
      elif option == 3:
        answer = in1 * in2
      elif option == 4:
        answer = in1 / in2
      elif option == 5:
        answer = in1 % in2
      elif option == 6:
        answer = in1 ** in2
    
      print("{} {} {} = {}".format(in1,operators[option],in2, answer))
    
    except NameError:
      print("NameError: Please Use Numbers Only")
    except SyntaxError:
      print("SyntaxError: Please Use Numbers Only")
    except TypeError:
      print("TypeError: Please Use Numbers Only")
    except AttributeError:
      print("AttributeError: Please Use Numbers Only")

    print("Do you want to continue (Y/N)?")
    response = input()
    if response in "Yy":
      continue
    else:
      break
