import numpy as np 
import pandas as pd

dict={
    "name":['harry','rohan','skillf','shubh'],
    "marks":[92,34,24,17],
    "city":['rampur','kolkata','barielly','antartica']
}

df=pd.DataFrame(dict)
df.to_csv('friends.csv')
df.tail(2)
df.describe()
ser=pd.Series(np.random.rand(12))
ser
newdf=pd.DataFrame(np.random.rand(334,5),index=np.arange(334))
newdf
type(newdf)
newdf.describe()
newdf
newdf.head()
newdf[0][0]="harry"  
newdf.describe()
newdf.columns
newdf.head()
newdf.T
newdf.columns
newdf.head()
newdf.sort_index(axis=0,ascending=False)
newdf.head()
type(newdf[0])
newdf2=newdf
newdf2.head()
newdf3=newdf.copy()
newdf.columns=list("ABCDE")
newdf.loc[0,0]=654
newdf.drop(0,axis=1)
newdf.loc[[1,2],['C','D']]

# newdf.loc[(newdf['A']<0.3) & (newdf['C']>0.1)]
newdf.iloc[[0,5],[1,2]]
newdf.drop(['A','D'],axis=1,inplace=True)
