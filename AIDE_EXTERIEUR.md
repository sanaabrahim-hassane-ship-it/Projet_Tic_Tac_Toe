# Projet_Tic_Tac_Toe
### La logique derrière mon programme
  - On affiche le plateau du jeu
  - on demande au joueur de jouer en premier (c'est à dire entrer le nombre de case où il veut jouer)
  - on vérifie que ses entrées sont correctes (pour éviter les erreures, le choix de cases inexistantes ou dejà remplies)
  - on met à jour le plateau et on le réaffiche
  - ensuite c'est au tour de l'ordinateur de jouer.
  - on met le programme en pause durant 1 seconde le temps que l'ordinateur joue (par défaut l'ordinateur remplit la première case à son premier tour)
  - on vérifie s'il ya un gagnant en parcourant les lignes et les colonnes pour voir les cases identiques. on vérifie aussi les deux diagonales en comparant par rapport à la case du milieu, les cases extremes gauche et droite
  - on oublie pas de vérifier s'il reste des cases vides ou non pour jouer
  - on applique les conditions précedentes à chaque fois que l'un des deux joueurs termine son tour
  - A la fin du jeu, on met à jour le plateau et on le réaffiche de nouveau
  - Si c'est le joueur qui a gagné on affiche que c'est gagné
  - Sinon si c'est l'ordinateur qui a gagné on affiche que c'est perdu
  - Dans le cas contraire c'est un match nul
    
(note : je me suis inspirée de cette notion de résolution de problème pour faire ce projet
   [ https://www.w3schools.com/c/c_problem_solving.php ]

### Notions et sources externes
  - Dans functions.c et main.c : les mots "break" et "continue", sont appelés des mots clés en C. On les utilisent respectivement pour sortir d'une boucle ou pour continuer.
  source [ https://www.w3schools.com/c/c_ref_keywords.php ]
