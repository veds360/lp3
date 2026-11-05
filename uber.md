# Uber Fare Prediction – Practical Viva Questions and Answers

## 1. Basic Understanding

**Q1. What is the aim of this practical?**

To predict Uber ride fares using machine learning regression algorithms, namely Linear Regression and Random Forest Regression.

**Q2. What type of machine learning problem is this?**

It is a supervised learning problem, specifically a regression problem.

**Q3. Why is it a regression problem?**

Because the output, fare amount, is a continuous numerical value.

**Q4. What is supervised learning?**

A machine learning approach in which a model learns from labelled training data containing input features and their corresponding outputs.

**Q5. What is the target variable in this dataset?**

`fare_amount`.

**Q6. What are independent variables (features)?**

Features used to predict the target variable, such as:
- Pickup latitude and longitude
- Drop-off latitude and longitude
- Passenger count
- Pickup hour, day, month and year

**Q7. What is the Uber Fares dataset?**

It is a dataset containing historical Uber ride information, including pickup location, drop-off location, passenger count, pickup time and fare amount.

---

## 2. Data Preprocessing

**Q8. What is data preprocessing?**

It is the process of cleaning and transforming raw data into a suitable format for machine learning.

**Q9. Why is preprocessing necessary?**

To improve data quality, remove inconsistencies and prepare features for model training.

**Q10. What is Pandas?**

Pandas is a Python library used for data manipulation and analysis.

**Q11. What is a DataFrame?**

A two-dimensional tabular data structure containing rows and columns.

**Q12. Why do we use `head()`?**

To display the first five rows of a DataFrame by default.

**Q13. What does `shape` return?**

The number of rows and columns in the dataset.

**Q14. What does `info()` do?**

It displays column names, data types, non-null counts and memory usage.

**Q15. How do we check missing values?**

Using:

```python
df.isnull().sum()
```

**Q16. How do we remove missing values?**

Using:

```python
df.dropna(inplace=True)
```

**Q17. What are duplicate records?**

Records that appear more than once in a dataset.

**Q18. How do we remove duplicates?**

Using:

```python
df.drop_duplicates(inplace=True)
```

**Q19. Why do we remove the `key` column?**

It is an identifier for a ride and generally does not provide useful predictive information.

**Q20. Why do we convert `pickup_datetime` into datetime format?**

To extract meaningful time-based features such as hour, day, month and year.

**Q21. Why do we extract hour, day, month and year?**

Because ride fares may vary depending on the time and date of the ride.

**Q22. What is feature engineering?**

The process of creating or transforming features to improve the predictive ability of a machine learning model.

---

## 3. Outlier Detection

**Q23. What is an outlier?**

An observation that differs significantly from the majority of the data.

**Q24. Why do we identify outliers?**

Outliers can distort statistical calculations and negatively affect model performance.

**Q25. What is IQR?**

IQR stands for Interquartile Range. It is the difference between the third quartile and first quartile.

\[
IQR = Q3-Q1
\]

**Q26. What are Q1 and Q3?**

- Q1: First quartile (25th percentile).
- Q3: Third quartile (75th percentile).

**Q27. What is the IQR method for detecting outliers?**

Values outside the following limits are considered potential outliers:

\[
Lower = Q1-1.5(IQR)
\]

\[
Upper = Q3+1.5(IQR)
\]

**Q28. Which visualization is used to identify outliers?**

A boxplot.

**Q29. What is a boxplot?**

A graphical representation showing the median, quartiles, spread and potential outliers of numerical data.

**Q30. Are all outliers necessarily incorrect?**

No. Some outliers may represent genuine observations. They should be investigated before removal.

---

## 4. Correlation

**Q31. What is correlation?**

Correlation measures the strength and direction of the relationship between two variables.

**Q32. What is the range of the correlation coefficient?**

It ranges from -1 to +1.

**Q33. What does positive correlation mean?**

When one variable increases, the other variable tends to increase.

**Q34. What does negative correlation mean?**

When one variable increases, the other variable tends to decrease.

**Q35. What does zero correlation mean?**

It indicates no linear relationship between the variables.

**Q36. What is a correlation matrix?**

A table showing correlation coefficients between pairs of numerical variables.

**Q37. What is a heatmap?**

A graphical representation of numerical values using different colours.

**Q38. Which library is used to generate the correlation heatmap?**

Seaborn.

**Q39. Does correlation imply causation?**

No. Correlation does not necessarily mean that one variable causes changes in another.

---

## 5. Normalization and Feature Scaling

**Q40. What is normalization?**

Normalization is the process of scaling numerical features to a common range, usually between 0 and 1.

**Q41. Which normalization technique is used in this practical?**

Min-Max Normalization.

**Q42. What is the Min-Max normalization formula?**

\[
X'=\frac{X-X_{min}}{X_{max}-X_{min}}
\]

**Q43. Which Python class is used for normalization?**

`MinMaxScaler` from `sklearn.preprocessing`.

**Q44. Why is normalization required?**

Features may have different numerical ranges. Scaling helps algorithms that are sensitive to feature magnitude.

**Q45. Is normalization necessary for Random Forest?**

No. Random Forest is generally insensitive to feature scaling because it uses decision-tree splits.

**Q46. What is the difference between normalization and standardization?**

- Normalization generally scales values to a fixed range, such as 0 to 1.
- Standardization transforms values to have mean 0 and standard deviation 1.

**Q47. Why do we use `fit_transform()` on training data?**

It calculates the scaling parameters from training data and applies the transformation.

**Q48. Why do we use only `transform()` on testing data?**

To apply the same scaling parameters learned from training data without learning from the test set.

**Q49. What is data leakage?**

Data leakage occurs when information from the test dataset or future information improperly influences model training.

---

## 6. Linear Regression

**Q50. What is Linear Regression?**

Linear Regression is a supervised learning algorithm that models the relationship between independent variables and a continuous dependent variable.

**Q51. What is the equation of simple Linear Regression?**

\[
Y=b_0+b_1X
\]

Where:
- Y is the predicted output.
- X is the input.
- b0 is the intercept.
- b1 is the coefficient or slope.

**Q52. What is Multiple Linear Regression?**

A regression technique that uses multiple independent variables to predict one dependent variable.

\[
Y=b_0+b_1X_1+b_2X_2+\cdots+b_nX_n
\]

**Q53. How does Linear Regression work?**

It finds coefficients that minimize the sum of squared differences between actual and predicted values.

**Q54. What is the purpose of `fit()`?**

It trains the model using the training dataset.

**Q55. What is the purpose of `predict()`?**

It generates predictions using the trained model.

**Q56. What is the main limitation of Linear Regression?**

It assumes a linear relationship between the input features and the target, so it may not capture complex nonlinear patterns.

---

## 7. Random Forest Regression

**Q57. What is Random Forest?**

Random Forest is an ensemble learning algorithm that combines multiple decision trees to make predictions.

**Q58. What is Random Forest Regression?**

It is the regression version of Random Forest, used to predict continuous numerical values.

**Q59. How does Random Forest Regression work?**

1. Creates multiple decision trees using randomly selected training samples and features.
2. Each tree makes a prediction.
3. The predictions are averaged to produce the final result.

**Q60. What is a decision tree?**

A tree-based model that makes predictions by repeatedly splitting data based on feature conditions.

**Q61. What is ensemble learning?**

A technique that combines multiple models to obtain a more reliable prediction.

**Q62. What is bagging?**

Bagging stands for Bootstrap Aggregating. It trains multiple models on different bootstrap samples and combines their predictions.

**Q63. What is `n_estimators`?**

It specifies the number of decision trees in the Random Forest.

**Q64. What is `max_depth`?**

It specifies the maximum depth allowed for each decision tree.

**Q65. What is `random_state`?**

It controls random number generation to make results reproducible.

**Q66. What is `n_jobs=-1`?**

It allows scikit-learn to use all available CPU cores for parallel processing.

**Q67. Why might Random Forest perform better than Linear Regression?**

It can capture nonlinear relationships and interactions between features.

**Q68. What is overfitting?**

When a model learns the training data too closely, including noise, and performs poorly on unseen data.

**Q69. How can we reduce overfitting in Random Forest?**

By limiting tree depth, increasing minimum samples per leaf and tuning the number of trees.

---

## 8. Model Training and Testing

**Q70. What is training data?**

The portion of the dataset used to train the machine learning model.

**Q71. What is testing data?**

The portion of the dataset used to evaluate the trained model on unseen observations.

**Q72. What is train-test split?**

The process of dividing a dataset into training and testing subsets.

**Q73. What is the purpose of `train_test_split()`?**

It splits the dataset into training and testing sets.

**Q74. What does `test_size=0.2` mean?**

It allocates 20% of the data for testing and 80% for training.

**Q75. What does `random_state=42` do?**

It ensures that the random split is reproducible.

**Q76. What is the difference between X and y?**

- X contains independent input features.
- y contains the target variable to be predicted.

---

## 9. Evaluation Metrics

**Q77. What is R² score?**

R² measures how much of the variation in the target variable is explained by the regression model.

\[
R^2=1-\frac{SS_{res}}{SS_{tot}}
\]

**Q78. What is a good R² score?**

A value closer to 1 generally indicates a better fit. A negative value means the model performs worse than predicting the test-set mean.

**Q79. What is RMSE?**

Root Mean Squared Error measures the square root of the average squared prediction errors.

\[
RMSE=\sqrt{\frac{1}{n}\sum_{i=1}^{n}(y_i-\hat y_i)^2}
\]

**Q80. What is MAE?**

Mean Absolute Error measures the average absolute difference between actual and predicted values.

\[
MAE=\frac{1}{n}\sum_{i=1}^{n}|y_i-\hat y_i|
\]

**Q81. Which is better: a higher or lower RMSE?**

A lower RMSE is better.

**Q82. Which is better: a higher or lower MAE?**

A lower MAE is better.

**Q83. What is the difference between MAE and RMSE?**

RMSE penalizes larger errors more heavily because it squares the errors. MAE treats absolute errors linearly.

**Q84. Why do we use multiple evaluation metrics?**

Different metrics measure different aspects of prediction performance, providing a more complete evaluation.

**Q85. Which model is better?**

The model with a higher R² and lower RMSE and MAE generally performs better on the test dataset.

---

## 10. Python Libraries

| Library | Purpose |
|---|---|
| Pandas | Data manipulation |
| NumPy | Numerical operations |
| Matplotlib | Data visualization |
| Seaborn | Statistical visualization |
| Scikit-learn | Machine learning algorithms and evaluation |

**Q86. What is Scikit-learn?**

An open-source Python library providing tools for machine learning, preprocessing, model selection and evaluation.

**Q87. What is `numpy` used for?**

Numerical computations, arrays and mathematical operations.

**Q88. What is `matplotlib` used for?**

Creating plots and graphs.

**Q89. What is `seaborn` used for?**

Creating statistical visualizations such as heatmaps and boxplots.

---

## 11. Important Practical Code Questions

**Q90. How do you load a CSV file?**

```python
df = pd.read_csv("uber.csv")
```

**Q91. How do you separate features and target?**

```python
X = df.drop('fare_amount', axis=1)
y = df['fare_amount']
```

**Q92. How do you create a Linear Regression model?**

```python
model = LinearRegression()
model.fit(X_train, y_train)
```

**Q93. How do you create a Random Forest model?**

```python
model = RandomForestRegressor(n_estimators=50, random_state=42)
model.fit(X_train, y_train)
```

**Q94. How do you calculate R²?**

```python
r2_score(y_test, y_pred)
```

**Q95. How do you calculate RMSE?**

```python
np.sqrt(mean_squared_error(y_test, y_pred))
```

**Q96. How do you calculate MAE?**

```python
mean_absolute_error(y_test, y_pred)
```

**Q97. How do you visualize outliers?**

```python
sns.boxplot(x=df['fare_amount'])
plt.show()
```

**Q98. How do you plot a correlation heatmap?**

```python
sns.heatmap(df.corr(numeric_only=True), annot=True, cmap='coolwarm')
plt.show()
```

---

## 12. Final Practical Summary

**Q99. What steps were performed in this practical?**

1. Loaded the Uber Fares dataset.
2. Inspected the dataset.
3. Removed missing values and duplicates.
4. Extracted date and time features.
5. Identified and removed fare outliers using IQR.
6. Checked correlations using a heatmap.
7. Split data into training and testing sets.
8. Normalized the numerical features using MinMaxScaler.
9. Implemented Linear Regression.
10. Implemented Random Forest Regression.
11. Compared models using R², RMSE and MAE.

**Q100. What is the conclusion of this practical?**

Uber fare prediction was performed using Linear Regression and Random Forest Regression. The models were evaluated using R², RMSE and MAE, and their performance was compared to determine which model predicts fares more accurately.

---

## Quick Revision – Most Important Viva Questions

If time is limited, prioritize these:

1. What is regression?
2. Why is Uber fare prediction a regression problem?
3. What is preprocessing?
4. What are outliers?
5. What is the IQR method?
6. What is correlation?
7. What is normalization?
8. What is Min-Max scaling?
9. Why do we split data into training and testing sets?
10. Explain Linear Regression.
11. Explain Random Forest Regression.
12. What is `n_estimators`?
13. What is overfitting?
14. What is R²?
15. What are RMSE and MAE?
16. Why might Random Forest perform better than Linear Regression?
17. Why should the scaler be fitted only on training data?

**Remember:** R² should generally be higher, while RMSE and MAE should be lower for a better-performing model.