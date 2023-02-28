// WidgetBlueprintGeneratedClass UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C
// Size: 0x561 (Inherited: 0x4b8)
struct UUI_BP_CHAL_Button_LostPages_C : UFieldGuideButton_Challenges {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* GlowBorder_in; // 0x4c0(0x08)
	struct UWidgetAnimation* GlowBorder_Out; // 0x4c8(0x08)
	struct UWidgetAnimation* DrawingFlameAnimation; // 0x4d0(0x08)
	struct UWidgetAnimation* OnHoverAnimation; // 0x4d8(0x08)
	struct UBorder* cardBorder; // 0x4e0(0x08)
	struct UButton* cardButton; // 0x4e8(0x08)
	struct UPhoenixTextBlock* cardTitle; // 0x4f0(0x08)
	struct UUI_BP_NewIndicator_C* newIndicator; // 0x4f8(0x08)
	struct UPhoenixTextBlock* Percentage; // 0x500(0x08)
	struct UPhoenixTextBlock* Progress; // 0x508(0x08)
	struct FMulticastInlineDelegate ChallengeCategoryClicked; // 0x510(0x10)
	struct FMulticastInlineDelegate ChallengeCategoryHovered; // 0x520(0x10)
	struct FMulticastInlineDelegate ChallengeCategoryUnhovered; // 0x530(0x10)
	struct FName CategoryID; // 0x540(0x08)
	struct FText CategoryPercentage; // 0x548(0x18)
	bool InTutorial; // 0x560(0x01)

	void SetEnabledState(bool IsEnabled); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.SetEnabledState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTutorialState(bool DisableForTutorial); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.SetTutorialState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct TArray<struct FString> GatherMenuReaderStrings(int32_t DepthLevel); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.GatherMenuReaderStrings // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	void SetCategoryPercent(struct FText Percent); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.SetCategoryPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CHAL_Button_Combat_cardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.BndEvt__UI_BP_CHAL_Button_Combat_cardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CHAL_Button_Combat_cardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.BndEvt__UI_BP_CHAL_Button_Combat_cardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__UI_BP_CHAL_Button_Combat_cardButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.BndEvt__UI_BP_CHAL_Button_Combat_cardButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnSetItemIndicatorVisibility(enum class ESlateVisibility InVisibility); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.OnSetItemIndicatorVisibility // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BorderOut(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.BorderOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BorderIn(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.BorderIn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetLockedState(bool IsLocked); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.SetLockedState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CHAL_Button_LostPages(int32_t EntryPoint); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.ExecuteUbergraph_UI_BP_CHAL_Button_LostPages // (Final|UbergraphFunction) // @ game+0x38a7480
	void ChallengeCategoryUnhovered__DelegateSignature(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.ChallengeCategoryUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChallengeCategoryHovered__DelegateSignature(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.ChallengeCategoryHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ChallengeCategoryClicked__DelegateSignature(); // Function UI_BP_CHAL_Button_LostPages.UI_BP_CHAL_Button_LostPages_C.ChallengeCategoryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

