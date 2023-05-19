import pandas as pd
import numpy as np
import matplotlib.pyplot as plt   #Data visualisation libraries 
import seaborn as sns
import sklearn

from IPython import get_ipython
get_ipython().run_line_magic('matplotlib', 'inline')


voice = pd.read_csv('voice.csv')
voice.keys()
voice.head()
voice.info()
voice.describe()
voice.columns
#sns.pairplot(voice)
#sns.distplot(voice['mode'])
X = voice[['meanfreq', 'sd', 'median','Q25','Q75','IQR','skew','kurt',
           'sp.ent','sfm','mode','centroid','meanfun','minfun','maxfun',
           'meandom','mindom','maxdom','dfrange','modindx']]
Y=voice[['label']]
from sklearn.linear_model import LinearRegression
X=voice.drop('label',axis=1)
lm=LinearRegression()
lm.fit(X, voice.label)
print ('Es co: ', lm.intercept_)
print
lm.predict(X)[0:5]
plt.scatter(voice.label,lm.predict(X))
plt.xlabel("Label: $L_i$")
plt.ylabel("Predicted label: $L_i$")
plt.title("Comparison")