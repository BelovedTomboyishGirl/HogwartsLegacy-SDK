// WidgetBlueprintGeneratedClass UI_BP_CreditEntry_Line.UI_BP_CreditEntry_Line_C
// Size: 0x340 (Inherited: 0x328)
struct UUI_BP_CreditEntry_Line_C : UPhoenixCreditEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UHorizontalBox* EntryBox; // 0x330(0x08)
	struct UPhoenixTextBlock* LineText; // 0x338(0x08)

	void SetCreditEntryInfo(struct FCreditEntry CreditEntry); // Function UI_BP_CreditEntry_Line.UI_BP_CreditEntry_Line_C.SetCreditEntryInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetCreditEntryAnimProgress(float Progress); // Function UI_BP_CreditEntry_Line.UI_BP_CreditEntry_Line_C.SetCreditEntryAnimProgress // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CreditEntry_Line(int32_t EntryPoint); // Function UI_BP_CreditEntry_Line.UI_BP_CreditEntry_Line_C.ExecuteUbergraph_UI_BP_CreditEntry_Line // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

