// BlueprintGeneratedClass BP_HW_Storage_Draped_Crates_A.BP_HW_Storage_Draped_Crates_A_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_HW_Storage_Draped_Crates_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_HW_Storage_Draped_Crates_A; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HW_Storage_Draped_Crates_A; // 0x258(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Storage_Draped_Crates_A.BP_HW_Storage_Draped_Crates_A_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Storage_Draped_Crates_A(int32_t EntryPoint); // Function BP_HW_Storage_Draped_Crates_A.BP_HW_Storage_Draped_Crates_A_C.ExecuteUbergraph_BP_HW_Storage_Draped_Crates_A // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

