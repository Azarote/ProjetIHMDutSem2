# ProjetIHMDutSem2

On veut construire une application qui lit et exécute des recettes de cuisine. Les fichiers de recette sont au format JSON, suivant le schéma : https://schema.org/Recipe. Un exemple est donné ci-dessous. Une fois la recette lue, on peut démarrer l'affichage des informations :

nom, description, mots-clés
liste des ingrédients
chacune des étapes de réalisation
Les 2 premiers affichages se font dans 2 widgets (fenêtre ou onglet). Les étapes de réalisation (3) sont affichées l'une après l'autre, en séquence, de la 1ère à la dernière. On peut passer à l'étape suivante ou à l'étape précédente en appuyant sur un bouton, ou à partir de la liste des étapes (liste déroulante).

Contraintes :

utilisation de QT, C++
chargement du fichier de recette via une boîte de dialogue (QFileDialog adapté aux fichiers JSON)
automate QT pour les étapes de réalisation de la recette (QStateMachine)
documentation obligatoire pour les classes et méthodes, schéma de votre machine à état
UI QT ou non ("à la main"), ce n'est pas une contrainte !
conception type MVC où le stockage des informations et les traitements sont indépendants, et ne se font pas dans des classes QT (couplage faible, comme vu dans les contrôles de TP).
Bonus :

un seul widget pour afficher chacune des étapes (plutôt qu'un widget par étape)
utilisation de Doxygen (cf https://franckh.developpez.com/tutoriels/outils/doxygen/)pour la documentation
portage sur Android (attention, cela nécessite le téléchargement du sdk Android)
Le projet se fait par binôme (cf. choix des groupes), rendu le 12 juin via Ametice (cf Remise du projet). Le projet rendu devra contenir les sources, le .pro, les fichiers d'exemple et une documentation en PDF donnant le diagramme des classes, le schéma de la machien à états et l'architecture de l'application.
