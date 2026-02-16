git ==> application 

GitHub ==> serveur pour gérer nos projets ; plateforme pour nos projet git



Git : HadjSassi  

LinkedIn : Mahdi Hadj Sassi  



**git init**

**git config**

**git log** 

**git add .**

**git commit -m"first commit"**   (il faut avoir déjà add avant)

**git status** 

**touch readme.txt** : crée un fichier

**nano readme.txt**

**mkdir nom\_de\_dossier**

**cd nom\_de\_dossier**



git : avoir les anciennes versions



git add puis git commit puis git push 



>> utiliser les virtual machine, avec la possibilité de booster la ram. 

Linux : sudo apt install git 

Windows : https://git-scm.com/install/windows



**git config --global user.name "<username>"**

**git config --global user.email <email>**



dépôt : 2G ou 20 si version payante (5-10€/mois)



certains bot arrivent à accéder aux environnements privés, donc pas de données sensibles. 



readme.md : descriptions, dépendances

.gitignore : ignore certains fichiers du projet Git. Utile pour ne pas synchroniser des fichiers temporaires ou exclure des fichiers tests



les crochets : <xxx /xyx> indique les différenes valeurs possibles 



**ssh-keygen -t <dsa / ecdsa / ecdsa-sk / ed25519 / ed25519-sk> -C"<email>"**

-t : spécifie l'encodage : privilégier ed25519



Windows : cmd ou PowerShell : privilégier PowerShell parce que cmd est plutôt réservé aux administrateurs

PowerShell : autre type de terminal, avec un autre langage (vient en opposition à GitBash) 

cmd et PowerShell n'ont pas les même commandes



Linux : **cat ~/./ssh/<nom-de-votre-clé>.pub** puis copier le retour : copier-coller le contenu de la commande pour récupérer le contenu 

(en opposition au |clip de Windows)



rajouter une clef SSH sur GitHub : Settnigs > SSH and GPG keys > New SSH keys

(Si l'une est compromise)



clone en SSH :

**git@github.com :<user>/<repo>.git**

Ex : git@github.com:azerty220/2526\_Projet2A\_-ampli\_audio-.git

nom de l'utilisateur et du repository



linux : 

**touch readme.md .gitignore** : pour crée les 2 fichiers





changer de branche :

**git branch -M main**

M : branche principale



**git add <fichier1>**

**git add .**



attention en ajoutant tous les fichiers (add .) si jamais on ajoute un fichier que l'on voulait pas avoir en public (fichier environnement), on est obligé de recréer un repository car sinon accès avec les versions passées



quitter l'interface vim : **:q**



**git status** : voir l'état de chaque fichier par rapport aux "zones" Git



**git branch <name>** : crée la branche mais ne change pas de branche

**git switch -c <name>** : crée la branche et permet le changement 

pour passer d'une branche à l'autre : **git switch <name>**

pour supprimer une branche : **git branch -d <name>** : pas conseillé



**git merge <branch>** : à faire sur la branche sur laquelle on veut merge



log : afficher les différents commits

**git log --oneline** : affiche les commits sur une seule ligne

**git log -<n>** : affiche n lignes de log

**git log --graph** : affiche les logs de façon architechturé





**git reset \[--hard] <commit>** : revenir à une version antérieure du projet 

commit : mettre le numéro de la version du commit sur laquelle on veut revenir

**git reset \[--hard] HEAD~<n>** : retour de n commit en arrière 





**Markdown : (idem markdown sur jupyter)**



\# Titre

\## Sous-titre

\### Sous-sous-titre



\*italique\*

\*\*gras\*\*

\*\*\*gras et italique\*\*\*



> citation



-\[x] ou -\[] : checkbox qu'on peut modifier sur GitHub



pour un tableau : on doit mettre le même nombre de tiret que de caractères au dessus :



ici | colonne

----|--------

1 | ya

2 | yi 









