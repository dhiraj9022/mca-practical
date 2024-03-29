import numpy as np

class LinearRegression:
    def __init__(self):
        self.b0 = 0
        self.b1 = 1

    def fit(self, X, Y):
        X_mean = np.mean(X)
        Y_mean = np.mean(Y)
        numerator, denominator = 0, 0
        for _ in range(len(X)):
            numerator += (X[_] - X_mean) * (Y[_] - Y_mean)
            denominator += (X[_] - X_mean) ** 2
        self.b1 = numerator / denominator
        self.b0 = Y_mean - (X_mean * self.b1)
        return self.b0, self.b1

    def predict(self, X):
        y_hat = self.b0 + (self.b1 * X)
        return y_hat

if __name__ == '__main__':
    X = np.array([173, 160, 154, 188, 168], ndmin=2)
    X = X.reshape(5, 1)
    y = np.array([73, 65, 54, 80, 70])
    
    model = LinearRegression()
    b0, b1 = model.fit(X, y)
    print(b0, b1)
    
    y_pred = model.predict([165])
    print(y_pred)
