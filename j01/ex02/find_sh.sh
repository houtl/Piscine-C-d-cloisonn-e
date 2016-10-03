find . -name "*.sh" -type f -print | sed 's/\.sh$//g' | rev | cut -d / -f 1 | rev
