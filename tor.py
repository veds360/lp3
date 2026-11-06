
# IMPORT LIBRARIES
import pandas as pd
import numpy as np
import torch
import torch.nn as nn
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import accuracy_score, confusion_matrix, classification_report

# LOAD DATASET
df = pd.read_csv('/home/ved/Downloads/Churn_Modelling.xls',encoding='latin')

# PREPROCESSING
X = df.drop(['RowNumber', 'CustomerId', 'Surname', 'Exited'], axis=1)
y = df['Exited']

X = pd.get_dummies(X, drop_first=True)

# SPLIT DATA
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# NORMALIZATION
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)

# CONVERT TO TENSORS
X_train = torch.tensor(X_train, dtype=torch.float32)
X_test = torch.tensor(X_test, dtype=torch.float32)

y_train = torch.tensor(y_train.values, dtype=torch.float32).reshape(-1, 1)
y_test = torch.tensor(y_test.values, dtype=torch.float32).reshape(-1, 1)

# BUILD ANN
model = nn.Sequential(
    nn.Linear(X_train.shape[1], 16),
    nn.ReLU(),
    nn.Linear(16, 8),
    nn.ReLU(),
    nn.Linear(8, 1)
)

# LOSS AND OPTIMIZER
criterion = nn.BCEWithLogitsLoss()
optimizer = torch.optim.Adam(model.parameters(), lr=0.001)

# TRAINING
for epoch in range(20):

    outputs = model(X_train)
    loss = criterion(outputs, y_train)

    optimizer.zero_grad()
    loss.backward()
    optimizer.step()

    print(f"Epoch {epoch+1}, Loss: {loss.item():.4f}")

# PREDICTION
with torch.no_grad():
    outputs = model(X_test)
    predictions = (torch.sigmoid(outputs) >= 0.5).int()

y_pred = predictions.numpy().ravel()

# EVALUATION
print("Accuracy:", accuracy_score(y_test.numpy(), y_pred) * 100)

print(classification_report(y_test.numpy(), y_pred))

# CONFUSION MATRIX
sns.heatmap(confusion_matrix(y_test.numpy(), y_pred),
            annot=True, fmt='d', cmap='Blues')
plt.xlabel("Predicted")
plt.ylabel("Actual")
plt.show()






X_train=torch.tensor(X_train,dtype=torch.float32)

model=nn.Sequential(
    nn.Linear(X_train.shape[1],16),
    nn.ReLU(),
    nn.Linear(16,8),
    nn.ReLU(),
    nn.Linear(8,1),
)

criterion=nn.BCEWithLogitsLoss()
optimizer=torch.optim.Adam(model.parameters(),lr=0.01)

for epoch in range(20):
    op=model(X_train)
    loss=criterion(op,y_train)
    optimizer.zero_grad()
    loss.backward()
    optimizer.step()

with torch.no_grad():
    outputs = model(X_test)
    predictions = (torch.sigmoid(outputs) >= 0.5).int()

y_pred = predictions.numpy().ravel()