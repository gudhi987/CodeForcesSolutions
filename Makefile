.PHONY: clean All

All:
	@echo "----------Building project:[ CodeTonRound5 - Debug ]----------"
	@cd "CodeTonRound5" && "$(MAKE)" -f  "CodeTonRound5.mk"
clean:
	@echo "----------Cleaning project:[ CodeTonRound5 - Debug ]----------"
	@cd "CodeTonRound5" && "$(MAKE)" -f  "CodeTonRound5.mk" clean
