// BlueprintGeneratedClass BTT_Biped_RideCreature.BTT_Biped_RideCreature_C
// Size: 0x158 (Inherited: 0x150)
struct UBTT_Biped_RideCreature_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)

	void CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_RideCreature(int32_t EntryPoint); // Function BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.ExecuteUbergraph_BTT_Biped_RideCreature // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

