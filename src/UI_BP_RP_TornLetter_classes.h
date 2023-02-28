// WidgetBlueprintGeneratedClass UI_BP_RP_TornLetter.UI_BP_RP_TornLetter_C
// Size: 0x350 (Inherited: 0x329)
struct UUI_BP_RP_TornLetter_C : UUI_BP_RichPaperType_Base_C {
	char pad_329[0x7]; // 0x329(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPhoenixRichTextBlock* BodyText; // 0x338(0x08)
	struct UImage* Image_206; // 0x340(0x08)
	struct UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x348(0x08)

	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_RP_TornLetter.UI_BP_RP_TornLetter_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void MenuReadRichPaper(); // Function UI_BP_RP_TornLetter.UI_BP_RP_TornLetter_C.MenuReadRichPaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBodyData(struct FString BodyText); // Function UI_BP_RP_TornLetter.UI_BP_RP_TornLetter_C.SetBodyData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetRichPaperData(struct FString HeaderIcon, struct FString HeaderText, struct FString BodyIcon, struct FString BodyText, struct FString FooterIcon, struct FString footerText); // Function UI_BP_RP_TornLetter.UI_BP_RP_TornLetter_C.SetRichPaperData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_RP_TornLetter(int32_t EntryPoint); // Function UI_BP_RP_TornLetter.UI_BP_RP_TornLetter_C.ExecuteUbergraph_UI_BP_RP_TornLetter // (Final|UbergraphFunction) // @ game+0x38a7480
};

