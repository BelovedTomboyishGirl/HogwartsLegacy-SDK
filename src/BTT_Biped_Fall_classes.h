// BlueprintGeneratedClass BTT_Biped_Fall.BTT_Biped_Fall_C
// Size: 0x168 (Inherited: 0x150)
struct UBTT_Biped_Fall_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float HeightAtFallStart; // 0x158(0x04)
	struct FVector DesiredWorldDirection; // 0x15c(0x0c)

	void ExecuteFall(struct AActor* OwnerActor); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.ExecuteFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Landed_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCharacterTeleported(struct AAmbulatory_Character* TeleportedCharacter, struct FVector AmountDisplaced, struct FRotator AmountRotated); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.OnCharacterTeleported // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Fall(int32_t EntryPoint); // Function BTT_Biped_Fall.BTT_Biped_Fall_C.ExecuteUbergraph_BTT_Biped_Fall // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

