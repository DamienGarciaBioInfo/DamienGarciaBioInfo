#! /usr/bin/env bash

read -p "oui ou non ? --> " response

while [[ "$response" != "oui" && "$response" != "non" ]]; do
  echo "Vous devez répondre par oui ou par non "
  read -p "oui ou non ? --> " response
done

if [[ "$response" == "oui" ]]; then
  echo "Vous avez répondu oui"
else # "$response" == "non"
  echo "Vous avez répondu non"
fi
