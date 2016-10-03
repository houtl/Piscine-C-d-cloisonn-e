ldapsearch -Q -LLL "(uid=z*)" cn | grep "cn:" | sort -r -f | sed 's/cn\: //g'
