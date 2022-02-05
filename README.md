# Flower_shop
Project explanation

SERBIAN
-
Cvet - ima naziv, celobrojnu nabavnu i celobrojnu prodajnu cenu, koji se zadaju pri
stvaranju i mogu da se dohvate. Moguće je izračunati zaradu od prodaje cveta. Moguće je
uporediti dva cveta na jednakost (cvet1==cvet2). Cvetovi su jednaki ukoliko su im
jednaki nazivi. Moguće je ispisati cvet u izlazni tok (it<<cvet) tako što se ispisuje
njegov naziv.
-
Buket - sadrži proizvoljan broj cvetova. Stvara se prazan, nakon čega je cvetove moguće
dodavati pojedinačno. Moguće je izračunati nabavnu i prodajnu cenu buketa. Moguće je
izračunati zaradu od prodaje buketa. Moguće je uporediti dva buketa (buket1>buket2)
tako što se upoređuju njihove prodajne cene. Moguće je ispisati buket u izlazni tok
(it<<buket) tako što se ispisuju svi različiti cvetovi u buketu odvojeni zarezima i
prodajna cena buketa u obliku "(cvetovi)prodajna_cenaRSD".
-
Cvećara - sadrži proizvoljan broj buketa uređenih rastuće po prodajnoj ceni i celobrojnu
zaradu koja je pri stvaranju 1000. Stvara se prazna, nakon čega je bukete moguće dodati
pojedinačno. Dodavanje buketa se ignoriše ukoliko je procenat (u odnosu na nabavnu cenu)
od prodaje buketa manji od 20%. Pri dodavanju buketa u cvećaru, zarada cvećare se umanjuje
za nabavnu cenu buketa. Moguće je prodati buket sa zadate pozicije. Prodati buket se
uklanja iz cvećare, a potom se uvećava zarada cvećare za prodajnu cenu buketa. Moguće je
ispisati cvećaru u izlazni tok (it<<buket), tako što se u prvom redu ispisuje zarada u
obliku "zarada=zaradaRSD" , a potom se buketi ispisuju u pojedinačnim redovima.
-

ENGLISH
-
Flower - has a name, an integer purchase price and an integer sale price, which are set when
creation and can be reached. It is possible to calculate the profit from the sale of flowers. 
It is possible to compare two flowers on equality (flower1 == flower2). The flowers are the same 
if they have equal names. It is possible to print a flower in the output stream (it << flower) by 
printing it his name.
-
Bouquet - contains any number of flowers. It is created empty, after which flowers are possible to
add individually. It is possible to calculate the purchase and sale price of the bouquet. It is possible to
calculate the profit from the sale of the bouquet. It is possible to compare two bouquets (bouquet1> bouquet2)
by comparing their sales prices. It is possible to print a bouquet in the output stream
(it << bouquet) by writing all the different flowers in the bouquet separated by commas and
selling price of the bouquet in the form of "(flower1,flower2,..)sale_PriceRSD ".
-
Flower_Shop - contains an arbitrary number of bouquets arranged in ascending order at the selling price and an integer
earnings that are when creating 1000. It is created empty, after which bouquets can be added
individually. Adding a bouquet is ignored if the percentage (in relation to the purchase price)
from the sale of bouquets less than 20%. When you add a bouquet to a flower shop, the flower shop's earnings are reduced
for the purchase price of the bouquet. It is possible to sell a bouquet from a given position. A sold bouquet is
removed from the flower shop, and then the flower shop's earnings are increased by the selling price of the bouquet. It is possible to
print the flower shop in the output stream (it << flower_shop), so that in the first row the earnings are printed in
in the form "salary = salaryRSD", and then the bouquets are printed in individual lines.
-
