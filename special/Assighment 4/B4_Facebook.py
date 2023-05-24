import pandas as pd
import numpy as np

df=pd.read_csv('/home/dell/Desktop/DATASETS/dataset_Facebook.csv', sep=';')
print(df)
print(df.head())
print(df.info())
print(df.isnull())

df.dropna(how='any' , axis=0)
print(df)

#1)Creating Data Subsets
df1=df[['Category','Type','Lifetime Post Total Reach','Total Interactions']].loc[1:245]
df2=df[['Post Month','Post Weekday','Post Hour','Lifetime Post Consumers']].loc[245:500]
print(df1)
print(df2)


#2)merging dataset
df_merge=pd.concat([df1,df2])
print(df_merge)


#3)Transposing Data
print(df.transpose())
print(df1.transpose())
print(df2.transpose())


#4)Sorting Data
df.sort_values(by='Category')
print(df.sort_index())

#5)shape and Reshape of data
print(df.shape)
pivot_table=pd.pivot_table(df,index=['Type', 'Category'], values='comment')
print(pivot_table)
