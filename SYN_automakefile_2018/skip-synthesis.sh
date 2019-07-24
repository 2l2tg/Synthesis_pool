#!/bin/bash
##
## EPITECH PROJECT, 2019
## skip-synthesis
## File description:
## piscine synthèse
##

if [[ $1 == "" ]]
	then exit 84;
fi

grep \ $1 | awk '{printf "%s %s\n", $3, $9}'
