.PHONY: clean All

All:
	@echo "----------Building project:[ Round918 - Debug ]----------"
	@cd "Round918" && "$(MAKE)" -f  "Round918.mk"
clean:
	@echo "----------Cleaning project:[ Round918 - Debug ]----------"
	@cd "Round918" && "$(MAKE)" -f  "Round918.mk" clean
