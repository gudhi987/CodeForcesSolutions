.PHONY: clean All

All:
	@echo "----------Building project:[ Round891 - Debug ]----------"
	@cd "Round891" && "$(MAKE)" -f  "Round891.mk"
clean:
	@echo "----------Cleaning project:[ Round891 - Debug ]----------"
	@cd "Round891" && "$(MAKE)" -f  "Round891.mk" clean
