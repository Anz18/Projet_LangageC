import random

def main():
	random.seed()  # initialisation basée sur l'horloge système
	for i in range(1, 101):
		n = random.randint(1, 1000)  # Génère un nombre aléatoire entre 1 et 1000
		if n % 2 == 0:
			print(f"Le nombre {n} est pair.")
		else:
			print(f"Le nombre {n} est impair.")

if __name__ == "__main__":
	main()