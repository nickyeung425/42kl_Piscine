ifconfig | grep "ether " | sed 's/^.......//' | tr -d " "
