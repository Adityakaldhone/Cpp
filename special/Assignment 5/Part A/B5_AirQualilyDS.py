import pandas as pd
import numpy as np
import sklearn
df=pd.read_csv('AirQuality.csv',encoding='cp1252')

df.head()

df.shape

df.info()

df.isnull().sum()

df.count()   #It results in a number of non null values in each column.

df.describe()

df=df.drop(['stn_code', 'agency','sampling_date','location_monitoring_station'], axis = 1)  #dropping columns that aren't required

df=df.dropna(subset=['date']) # dropping rows where no date is available

df.columns


df["type"].unique()

types = {
    "Residential": "R",
    "Residential and others": "RO",
    "Residential, Rural and other Areas": "RRO",
    "Industrial Area": "I",
    "Industrial Areas": "I",
    "Industrial": "I",
    "Sensitive Area": "S",
    "Sensitive Areas": "S",
    "Sensitive": "S",
    "NaN": "RRO"
}
df.type = df.type.replace(types)

df.head(5)



df['date'] = pd.to_datetime(df['date'], errors='coerce')
df.head(5)

df['year'] = df.date.dt.year
df.head(5)



# defining columns of importance, which shall be used reguarly
COLS = ['so2', 'no2', 'rspm', 'spm', 'pm2_5']


from sklearn.impute import SimpleImputer
imputer = impute.SimpleImputer(missing_values=np.nan, strategy='mean')
df[COLS] = imputer.fit_transform(df[COLS])

df.head(5)

df.info()

df.head(5)

df['type'].value_counts()

df['type'].replace({"RRO":1, "I":2, "RO":3,"S":4,"RIRUO":5,"R":6}, inplace= True)

df['type']


df['state'].value_counts()

from sklearn.preprocessing import LabelEncoder
labelencoder=LabelEncoder()
df["state"]=labelencoder.fit_transform(df["state"])
df.head(5)



dfAndhra=df[(df['state']==0)]

dfAndhra

dfAndhra['location'].value_counts()

from sklearn.preprocessing import OneHotEncoder
onehotencoder=OneHotEncoder(sparse=False,handle_unknown='error',drop='first')

pd.DataFrame(onehotencoder.fit_transform(dfAndhra[["location"]]))







