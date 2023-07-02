.PHONY: clean All

All:
	@echo "----------Building project:[ EdRound151 - Debug ]----------"
	@cd "EdRound151" && "$(MAKE)" -f  "EdRound151.mk"
clean:
	@echo "----------Cleaning project:[ EdRound151 - Debug ]----------"
	@cd "EdRound151" && "$(MAKE)" -f  "EdRound151.mk" clean
