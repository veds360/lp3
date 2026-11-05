

def func(x):
    return (x+3)**2

def gradient(x):
    return 2*(x+3)


start=int(input("Enter starting point "))
lr=float(input("Enter learning rate "))
max_iter=int(input("Enter maximum iterations "))
epsilon=float(input("Enter epsilon value "))
x=start
for i in range(max_iter):
    grad=gradient(x)
    x_new=x-lr*grad
    if(abs(x-x_new)<epsilon):
        print(f"Stopped after {i+1} iterations")
        x=x_new
        break
    x=x_new

print("X is ",x)
print("Y is ",func(x))