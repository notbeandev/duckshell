main:
	@echo -n "checking file duckshell.cpp: "
	@bash make.sh
	@echo -n "checking file basic/default.cpp: "
	@bash make2.sh
	@echo "Building duckshell for architecture: "
	@uname -m
	@g++ duckshell.cpp -o duck
	@echo "Add permission for duck"
	@chmod 777 duck
	@echo "If no error showing mean BUILD DONE!"
	@echo "Now type sudo mv duck /bin/ or sudo mv duck /usr/bin and type duck to run!"
	@echo "Or ./duck for quicky!"
