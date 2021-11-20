#!/usr/bin/env bash

i=0

for f in * ; do
  if [[ -f $f ]]; then
    i=$((i+1))
  fi
done

echo "Le nombre de fichier régulier dans le répertoire courant est $i."
