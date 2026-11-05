def f(x):
    return (x + 3)**2

def derivative(x):
    return 2 * (x + 3)


# User inputs
x = 2
lr = float(input("Enter learning rate: "))
epsilon = float(input("Enter tolerance: "))
max_iter = int(input("Enter maximum iterations: "))

# Gradient Descent
for i in range(max_iter):

    grad = derivative(x)
    new_x = x - lr * grad

    # Check convergence
    if abs(new_x - x) < epsilon:
        x = new_x
        print("Converged after", i + 1, "iterations")
        break

    x = new_x

else:
    print("Maximum iterations reached")

print("Minimum x:", x)
print("Minimum y:", f(x))