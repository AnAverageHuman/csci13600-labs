#!/usr/bin/env bash

myhead='^*** START OF TH(E|IS) PROJECT GUTENBERG EBOOK'
mytail='^(***END OF TH(E|IS) PROJECT GUTENBERG EBOOK|End of Project Gutenberg)'

URLS=(
    ""
    "https://www.gutenberg.org/files/84/84-0.txt"
    "https://www.gutenberg.org/files/11/11-0.txt"
    "https://www.gutenberg.org/cache/epub/1080/pg1080.txt"
    "https://www.gutenberg.org/files/41/41-0.txt"
    "https://www.gutenberg.org/files/219/219-0.txt"
    "https://www.gutenberg.org/cache/epub/345/pg345.txt"
    "https://www.gutenberg.org/cache/epub/2542/pg2542.txt"
    "https://www.gutenberg.org/files/98/98-0.txt"
    "https://www.gutenberg.org/files/1342/1342-0.txt"
    "https://www.gutenberg.org/cache/epub/844/pg844.txt"
)

for ((i = 1; i < ${#URLS[@]}; i++)); do
    curl -sS "${URLS[$i]}" | awk "/$mytail/{flag=0} flag; /$myhead/{flag=1}" > $i &
done
wait

