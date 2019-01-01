# RandomNumber
Générateur de nombre aléatoire électromagnétique
Un niveau aléatoire (élevé ?) peut être obtenu en observant un aspect du monde physique réel et en capturant le bruit ambiant constitué par l'environnement électromagnétique (le «bruit» constitue en quelque sorte l'aléatoire).

C’est assez facile avec un convertisseur analogique digital. Il suffit de laisser une broche d’entrée flottante et de mesurer sa tension analogique. Le bit le moins significatif (celui de droite, de moindre exposant) sera le plus bruyant, fluctuant toujours en raison du bruit ambiant. Si nous répétons cela 32 fois et ne gardons que le bit moins significatif bas, nous devrions obtenir des résultats aléatoires.
