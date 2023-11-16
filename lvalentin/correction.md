- Compile pas
- Tu m'as mis le code (l'implementation) dans les .hpp au lieu des .cpp (et tu as mis les .cpp dans les .hpp)
- Attention on evite d'utiliser le `using namespace std;` et on ne redefini pas le type string
- On va generalement apprecier le fait d'avoir un commentaire au dessus de la fonction methode qui explique ce qu'elle fait, ce qu'elle prend en parametre et ce qu'elle renvoie
- Pas de getter
- Pas de setter
- Le constructeur entity ne prends pas en parametre la health, imaginons que je veuille creer une entite qui a un max de 1000hp mais qui commence avec 500hp, je ne peux pas (par exemple car elle regen 50hp toutes les 5 secondes)
- Pas de securite sur le overflow de la variable health quand une entity take damage (Comportement attendu : si damage > health, health = 0, mais toi ton code overflow)
- Aucune verification du max health sur le heal
- Generalement on va apprecier le fait d'avoir un destructeur virtuel vu qu'on va faire de l'heritage
- Pas de destructeur
- Plutot que d'avoir des if qui contiennent de gros bouts de code et notamment tout le code de la fonction, on va return le plus tot possible dans la fonction (pour eviter d'avoir des if qui font 50 lignes)
  Exemple :
  ```
  	if (condition) {
  		// 50 lignes de code
  	}
  ```
  Devient :
  ```
  	if (!condition) {
  		return;
  	}
  	// 50 lignes de code
  ```
- En c++ on met les accolades sur la ligne suivante

* Pas vu de francais
* Les propri�t�s sont priv�es et utilisent le bon type

Note finale : 0/20
