// BlueprintGeneratedClass BP_HW_PR_Telescope_B.BP_HW_PR_Telescope_B_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_HW_PR_Telescope_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HW_Telescope_COL; // 0x250(0x08)
	struct UPhysicalResponseComponent* PhysicalResponse2; // 0x258(0x08)
	struct UStaticMeshComponent* GC_HW_Telescope_B_Piece_02; // 0x260(0x08)
	struct UStaticMeshComponent* GC_HW_Telescope_B_Piece_01; // 0x268(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_PR_Telescope_B.BP_HW_PR_Telescope_B_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_PR_Telescope_B(int32_t EntryPoint); // Function BP_HW_PR_Telescope_B.BP_HW_PR_Telescope_B_C.ExecuteUbergraph_BP_HW_PR_Telescope_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

