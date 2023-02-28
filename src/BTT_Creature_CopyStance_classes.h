// BlueprintGeneratedClass BTT_Creature_CopyStance.BTT_Creature_CopyStance_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_Creature_CopyStance_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class ECreatureStance DesiredStance; // 0xb0(0x01)
	bool Wait; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct FBlackboardKeySelector TargetActor; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Creature_CopyStance.BTT_Creature_CopyStance_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Creature_CopyStance.BTT_Creature_CopyStance_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Creature_CopyStance(int32_t EntryPoint); // Function BTT_Creature_CopyStance.BTT_Creature_CopyStance_C.ExecuteUbergraph_BTT_Creature_CopyStance // (Final|UbergraphFunction) // @ game+0x38a7480
};

