#!/usr/bin/env python3

import datetime

# Passage d'une chaîne contenant un temps exprimé au format UTC
# à une paire de chaînes contenant le jour et l'heure exprimés localement.
def utc2localtime(datestr):
    """
    Convertit une date exprimée en UTC en une date au temps local exprimée
    sous la forme d'un couple (jour, heure)
    """
    d = datetime.datetime.strptime(datestr,"%Y-%m-%dT%H:%M:%S+01:00")
    d = d.replace(tzinfo=datetime.timezone.utc)
    d = d.astimezone()
    day = d.strftime("%d %b %Y")
    hms = d.strftime("%H:%M:%S")
    return (day,hms)

if __name__ == "__main__":
    print(utc2localtime("2021-10-15T08:47:19+01:00"))
    # Sortie: ('15 Oct 2021', '10:47:19')
