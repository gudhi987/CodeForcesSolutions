.PHONY: clean All

All:
	@echo "----------Building project:[ Round882 - Debug ]----------"
	@cd "Round882" && "$(MAKE)" -f  "Round882.mk"
clean:
	@echo "----------Cleaning project:[ Round882 - Debug ]----------"
	@cd "Round882" && "$(MAKE)" -f  "Round882.mk" clean
