// BlueprintGeneratedClass BP_HM_PR_Quidditch_TrophyLow_B.BP_HM_PR_Quidditch_TrophyLow_B_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_HM_PR_Quidditch_TrophyLow_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HM_Quidditch_TrophyLow_B; // 0x250(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HM_PR_Quidditch_TrophyLow_B.BP_HM_PR_Quidditch_TrophyLow_B_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_PR_Quidditch_TrophyLow_B(int32_t EntryPoint); // Function BP_HM_PR_Quidditch_TrophyLow_B.BP_HM_PR_Quidditch_TrophyLow_B_C.ExecuteUbergraph_BP_HM_PR_Quidditch_TrophyLow_B // (Final|UbergraphFunction) // @ game+0x38a7480
};

