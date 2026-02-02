UART : communication du Tx vers le Rx. Ligne de 0 et de 1 avec des bits de start, stop. Il faut une masse commune aussi.


I2C : une ligne SDA et SCL pour tous les esclaves. Avec une resistance qui relie les lignes à la masse, dont la valeur est variable selon les cas.

100kHz (standard) : 4.7kohm, 10kohm

400kHz (fast) : 2.2kohm, 4.7kohm

etc


SPI : SCLK, MOSI, MISO, CS (1 par esclave) [CS, CS2, CS3,...]. Plus rapide que l'I2C mais ça nécessite plus de connexion.


USB : pour remplacer l'UART, uniformiser, mais l'UART existe encore parce qu'il est plus facile à mettre en place.

Mettre des résistances de 5k1ohm entre CC1 et la masse et CC2 et la masse.

On met un composant qui a 5 diodes (pour enlever des pics de tension qui surviendrait, s'assurer que la tension soit comprise entre 0 et 5V) : à mettre au plus proche du port usb.

Rajoute du fil sur les pistes les plus courtes pour qu'elles soient de même longueur que les autres pistes.


Mettre une résistance en série (1kohm) puis un condensateur en parallèle vers la masse (0.01microF) et une résistance en parallèle vers du 5V (100k) pour un switch pour éviter les rebonds.


Diode TVS, pour enlever tout ce qui est au dessus d'un certain seuil pour ne pas griller le pcb. A installer au plus proche du connecteur.



Vdd : transistor haut
Vss : transistor bas



Lorsqu'on crée une empreinte :

alim en haut

masse en bas

Dans le symbol editor 

Symbol Editor > New librairy 

Project > OK, save

SMD ou Through hole (THT) (traversant)


PowerFlag pour corriger, signaler qu'on sait qu'il faut une alim par exemple


Input : Reçoit un signal provenant d’une autre source


Output : Génère un signal destiné à être utilisé par un autre composant. 2 output ne peuvent pas être câblés ensemble


Bidirectionnel : Peut fonctionner à la fois en entrée et en sortie (ex : SDA en I2C)


Power Input : Pin recevant une alimentation (ex : VCC, GND)


Power Output : Pin délivrant une alimentation (ex : sortie d’un régulateur de
tension)


Tri-State : Sortie pouvant être active, inactive ou en haute impédance


Open Collector/Open Drain : Sortie nécessitant une résistance de pull-up pour
fonctionner correctement


Passive : Utilisé pour des connexions simples comme des résistances ou
condensateurs


Unspecified : Type de pin non défini (par défaut dans certains cas)



Point ou triangle sur la pin 1

Faire attention au fait que les dimensions soient en mm, en cm, en pouces,...



F.Cu : Couche de cuivre côté supérieur (composants côté top)

B.Cu : Couche de cuivre côté inférieur (composants côté bottom)

F.Paste : Zone pour la crème à braser sur le top (pour les composants CMS)

B.Paste : Zone pour la crème à braser sur le bottom (pour les composants CMS)

F.Silkscreen : Sérigraphie sur la face supérieure (références, symboles, repères)

B.Silkscreen : Sérigraphie sur la face inférieure

F.Mask : Masque de soudure (protège les pistes, expose les pads pour la soudure)

B.Mask : Masque de soudure sur la face inférieure

F.Courtyard : Délimitation physique de l’empreinte du composant pour éviter les
chevauchements

B.Courtyard : Même chose mais côté Bottom

F.Fab : Informations précises sur la fabrication du PCB, notamment les
dimensions exactes du composant

B.Fab : Même chose mais côté bottom.


F : Front et B : Back



























