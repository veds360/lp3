# Email Spam Classification Using KNN and SVM

## Practical Viva Questions and Answers

### 1. Basic Concepts

**1. What is the aim of this practical?**\
To classify emails as spam or not spam using K-Nearest Neighbors (KNN)
and Support Vector Machine (SVM), and compare their performance.

**2. What is spam email?**\
An unwanted or unsolicited email, often containing advertisements,
scams, or malicious links.

**3. What is email classification?**\
It is the process of assigning an email to a category, such as spam or
not spam.

**4. Is this a classification or regression problem?**\
It is a binary classification problem because there are two possible
classes.

**5. What do the labels 0 and 1 represent?**\
In this dataset, 0 represents not spam and 1 represents spam.

**6. What is supervised learning?**\
A machine learning approach in which a model learns from labelled
training data.

**7. What are features and labels?**\
Features are the input variables used for prediction. The label is the
output class we want to predict.

### 2. Dataset and Preprocessing

**8. Which dataset is used?**\
The Email Spam Classification dataset from Kaggle.

Dataset link:
https://www.kaggle.com/datasets/balaka18/email-spam-classification-dataset-csv

**9. What is the shape of the dataset?**\
The dataset initially contains 5,172 rows and 3,002 columns.

**10. What does each row represent?**\
Each row represents one email.

**11. What are the columns in this dataset?**\
There is an `Email No.` identifier column, 3,000 word-frequency feature
columns, and a `Prediction` target column.

**12. Why do we remove `Email No.`?**\
It is only an identifier. It does not provide useful information for
deciding whether an email is spam.

**13. What does the `Prediction` column represent?**\
It is the target variable: 0 means not spam and 1 means spam.

**14. What is preprocessing?**\
Preprocessing means cleaning and preparing raw data before giving it to
a machine learning model.

**15. Why do we handle missing values?**\
Many machine learning algorithms cannot directly handle missing values,
so we remove or otherwise handle them.

**16. Why remove duplicate rows?**\
Duplicates can give repeated records extra influence and may affect
model evaluation.

**17. What is a word-frequency feature?**\
It records how many times a particular word occurs in an email.

**18. Do we need to convert text into numerical form for this
dataset?**\
No. The dataset already contains numerical word-frequency features.

**19. Why do we split the dataset into training and testing sets?**\
The training set is used to train the model, while the testing set
evaluates how well it performs on unseen data.

**20. What does `test_size=0.2` mean?**\
It assigns 20% of the data to testing and 80% to training.

**21. Why use `random_state=42`?**\
It makes the train-test split reproducible.

**22. What is stratified splitting?**\
It preserves approximately the same proportion of each class in both
training and testing sets.

### 3. Feature Scaling

**23. What is feature scaling?**\
It brings numerical features to a comparable scale.

**24. Why is scaling important for KNN?**\
KNN uses distances to find neighboring samples. Features with larger
numerical ranges can otherwise dominate the distance calculation.

**25. Why is scaling important for SVM?**\
SVM is sensitive to feature magnitudes, so scaling can help it find a
suitable decision boundary.

**26. What is MinMaxScaler?**\
It scales each feature to a specified range, usually 0 to 1.

**27. What is the difference between `fit_transform()` and
`transform()`?**\
`fit_transform()` learns scaling parameters from the training data and
applies the scaling. `transform()` applies those same learned parameters
to test data.

**28. Why should we fit the scaler only on training data?**\
To avoid data leakage from the test set into the training process.

### 4. K-Nearest Neighbors (KNN)

**29. What is KNN?**\
K-Nearest Neighbors is a supervised learning algorithm that classifies a
sample based on the majority class among its nearest training samples.

**30. How does KNN work?**\
It calculates distances between the new sample and training samples,
selects the K closest samples, and assigns the majority class.

**31. What does K represent?**\
K is the number of nearest neighbors considered for classification.

**32. What happens if K is too small?**\
The model may be sensitive to noise and overfit.

**33. What happens if K is too large?**\
The model may become too generalized and underfit.

**34. What is the purpose of `n_neighbors=5`?**\
It tells KNN to consider the five nearest training samples.

**35. What distance measure is commonly used by KNN?**\
Euclidean distance is commonly used by default for numeric data.

**36. Is KNN a lazy learning algorithm?**\
Yes. It stores the training data and performs most of its computation
when a prediction is requested.

**37. What is one disadvantage of KNN?**\
Prediction can be slow on large datasets because distances to many
training samples must be calculated.

### 5. Support Vector Machine (SVM)

**38. What is SVM?**\
Support Vector Machine is a supervised learning algorithm that finds a
decision boundary, called a hyperplane, to separate classes.

**39. What is a hyperplane?**\
A decision boundary that separates classes in the feature space.

**40. What are support vectors?**\
The training samples closest to the decision boundary. They help
determine the position of the hyperplane.

**41. What is the margin in SVM?**\
The distance between the decision boundary and the nearest samples from
each class.

**42. What is the objective of SVM?**\
To find a decision boundary that separates classes while maximizing the
margin, subject to the model's constraints.

**43. What is a kernel in SVM?**\
A kernel helps SVM model decision boundaries, including nonlinear ones,
by representing relationships between samples.

**44. Which kernel is used in this practical?**\
The linear kernel, specified using `kernel='linear'`.

**45. What is the advantage of a linear kernel here?**\
It provides a relatively simple decision boundary and is a reasonable
choice for high-dimensional word-frequency features.

**46. What is the difference between KNN and SVM?**\
KNN classifies using nearby training samples, whereas SVM learns a
decision boundary from the training data.

### 6. Performance Evaluation

**47. What is accuracy?**\
The proportion of all predictions that are correct.

**48. What is precision?**\
Out of all emails predicted as spam, precision measures how many are
actually spam.

**49. What is recall?**\
Out of all actual spam emails, recall measures how many the model
correctly identifies.

**50. What is the F1-score?**\
The harmonic mean of precision and recall.

**51. Why is accuracy alone not always sufficient?**\
If one class is much more common than the other, a model may achieve
high accuracy while performing poorly on the less common class.

**52. What is a confusion matrix?**\
A table comparing actual classes with predicted classes.

**53. What are true positives (TP)?**\
Spam emails correctly classified as spam.

**54. What are true negatives (TN)?**\
Non-spam emails correctly classified as non-spam.

**55. What are false positives (FP)?**\
Non-spam emails incorrectly classified as spam.

**56. What are false negatives (FN)?**\
Spam emails incorrectly classified as non-spam.

**57. Which error can be especially harmful in spam detection?**\
A false positive can cause a genuine email to be incorrectly marked as
spam. A false negative allows spam into the inbox. Both matter, and the
preferred trade-off depends on the application.

**58. How do we compare KNN and SVM?**\
We compare their accuracy, precision, recall, F1-score, and confusion
matrices on the same test set.

**59. Which model is better?**\
The model with stronger evaluation results is preferable, but the choice
should consider both false positives and false negatives, not accuracy
alone.

### 7. Python and Code Questions

**60. What is the purpose of pandas?**\
Pandas is used to load, clean, manipulate, and analyze tabular data.

**61. What is NumPy used for?**\
NumPy provides numerical arrays and mathematical operations.

**62. What is scikit-learn?**\
A Python machine learning library that provides algorithms,
preprocessing tools, and evaluation metrics.

**63. What does `train_test_split()` do?**\
It divides data into training and testing subsets.

**64. What does `fit()` do?**\
It trains a model using the supplied training data.

**65. What does `predict()` do?**\
It predicts class labels for new input samples.

**66. What does `KNeighborsClassifier()` create?**\
A KNN classification model.

**67. What does `SVC()` create?**\
A Support Vector Classification model.

**68. What does `confusion_matrix()` return?**\
A matrix showing counts of correct and incorrect predictions for each
class.

**69. Why do we use `stratify=y`?**\
To preserve the class distribution when splitting the dataset.

**70. Why do we use the same test set for both models?**\
It makes the performance comparison fair because both models are
evaluated on the same unseen samples.

### 8. Quick Practical Revision

-   **Problem type:** Binary classification.
-   **Dataset:** Email Spam Classification.
-   **Rows:** 5,172 initially.
-   **Columns:** 3,002 initially.
-   **Identifier removed:** `Email No.`
-   **Features:** 3,000 word-frequency columns.
-   **Target:** `Prediction` (0 = not spam, 1 = spam).
-   **Train-test split:** 80:20.
-   **Scaling:** MinMaxScaler.
-   **Models:** K-Nearest Neighbors and Support Vector Machine.
-   **KNN parameter:** `n_neighbors=5`.
-   **SVM kernel:** Linear.
-   **Evaluation:** Accuracy, Precision, Recall, F1-score, Confusion
    Matrix.

### Conclusion

The email spam classification task is performed using K-Nearest
Neighbors and Support Vector Machine. The dataset is preprocessed,
divided into training and testing sets, and scaled. Both models are
trained and evaluated using classification metrics and confusion
matrices. Their results are compared to determine which model performs
better on the given dataset.