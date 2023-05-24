import bs4
import requests

page=requests.get('https://www.flipkart.com/poco-c31-royal-blue-64-gb/p/itm19effae969b86?pid=MOBG73E7GKQK4KZP&lid=LSTMOBG73E7GKQK4KZPS14LVR&marketplace=FLIPKART&q=poco+c31&store=tyy%2F4io&srno=s_1_4&otracker=AS_QueryStore_OrganicAutoSuggest_1_8_na_na_na&otracker1=AS_QueryStore_OrganicAutoSuggest_1_8_na_na_na&fm=organic&iid=59504375-3aa7-49db-bbeb-a05cacd9db69.MOBG73E7GKQK4KZP.SEARCH&ppt=hp&ppn=homepage&ssid=qtdwh19euo0000001684414429836&qH=8a1462a8a580f1cb')
page

page.content

soup=bs4.BeautifulSoup(page.text)

"""Fetching Review/Comments"""

reviews=soup.find_all('div',{'class': 't-ZTKy'});
for review in reviews:
  print(review.get_text() + "\n\n")

"""Fetching Ratings"""

ratings=soup.find('div' , {'class' : '_3LWZlK'}).get_text();
print(ratings)

"""Fetching Individual Ratings"""

indivi_ratings=soup.findAll('div', {'class':'_3LWZlK _1BLPMq'});
for indi_rating in indivi_ratings:
  print(indi_rating.get_text() + "\n")

"""Fetching Tags"""

tags=soup.find('span',{'class':'yhB1nd GXgmTe'}).get_text();
print(tags)

"""Fetching customer name"""

cust_name=soup.findAll('p',{'class':'_2sc7ZR _2V5EHH'});
for cust in cust_name:
  print(cust.get_text() + "\n")

"""Fetch Publish Date"""

publish_date=soup.find_all('p',{'class':'_2sc7ZR'});
for date in publish_date:
  print(date.get_text() + "\n")
