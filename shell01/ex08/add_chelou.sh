echo $FT_NBR1 + $FT_NBR2 | tr "\"'\\\?\!mrdoc" "2013401234" | awk '{print "obase=13; ibase=5;"$0}' | bc | tr "0123456789ABC" "gtaio luSnemf"
