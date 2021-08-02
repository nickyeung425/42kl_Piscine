cat /etc/passwd | grep -v "^#" | awk "NR % 2 == 0" | awk -F ":" '{print $1}' | rev | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | sed 's/$/,/' | tr '\n' ' ' | sed 's/..$//' 
