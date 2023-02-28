// BlueprintGeneratedClass BTT_Biped_Swim.BTT_Biped_Swim_C
// Size: 0x180 (Inherited: 0x150)
struct UBTT_Biped_Swim_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool StickPressed; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float StickReleasedTime; // 0x15c(0x04)
	struct FVector DesiredWorldDirection; // 0x160(0x0c)
	float DesiredWorldSpeed; // 0x16c(0x04)
	float StickMinTime; // 0x170(0x04)
	bool Moving; // 0x174(0x01)
	bool StickNudgeLoop; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct FTimerHandle TutorialTimerHandle; // 0x178(0x08)

	void Stop(); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TutorialTimerExpired(); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.TutorialTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Swim(int32_t EntryPoint); // Function BTT_Biped_Swim.BTT_Biped_Swim_C.ExecuteUbergraph_BTT_Biped_Swim // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

