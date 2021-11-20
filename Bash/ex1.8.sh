#!/usr/bin/env bash

echo "Trouvez le nombre mistère !"

nbCoup=0
guess=0
nbMist=17

while [[ $guess -ne $nbMist ]]; do
  read
  nbCoup=$((nbCoup+1))
  if [[ $guess -lt $nbMist ]]; then
    echo "Plus grand"
  fi
  if [[ $guess -gt $nbMist ]]; then
    echo "Plus petit"    fi
  fi
done

echo "Bravo, vous avez trouver le nombre mistère en $nbCoup."
