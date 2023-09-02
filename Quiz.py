print("How about we play a quiz!")

play=input("Are you ready? ")

if play.lower() != "yes":
    quit()

print("Fine then, Let's Begin ;)")

marks =0

answer = input("What is the full form of FOMO? ")
if answer.lower() == "fear of missing out":
    print("You're precisely right!")
    marks+=1
else:
    print("Nope")

if marks==1:
    print("You got " + str(marks) + " question correct!")
else:
    print("You got " + str(marks) + " questions correct!")