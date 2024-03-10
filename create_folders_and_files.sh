#!/bin/bash

# Liste des dossiers à créer
folders=(
  "alpha_mirror"
  "camel_to_snake"
  "do_op"
  "ft_atoi"
  "ft_strcmp"
  "ft_strcspn"
  "inter"
  "is_power_of_2"
  "ft_strdup"
  "ft_strpbrk"
  "ft_strrev"
  "ft_strspn"
  "last_word"
  "max"
  "print_bits"
  "reverse_bits"
  "snake_to_camel"
  "unionw"
  "wdmatch"
)

# Boucle sur chaque dossier dans la liste
for folder in "${folders[@]}"; do
  # Crée le dossier s'il n'existe pas
  mkdir -p "$folder"
  # Crée un fichier .c vide avec le nom du dossier à l'intérieur du dossier
  touch "${folder}/${folder}.c"
done

echo "Dossiers et fichiers .c créés avec succès."

