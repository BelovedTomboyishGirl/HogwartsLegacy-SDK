// BlueprintGeneratedClass BP_HW_K_PR_Cauldron_6Pots.BP_HW_K_PR_Cauldron_6Pots_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_HW_K_PR_Cauldron_6Pots_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_6Pots_A_10; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_6Pots_D_11; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_6Pots_E_9; // 0x268(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseChairsB; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_6Pots_B_9; // 0x278(0x08)
	struct UPhysicalResponseComponent* PhysicalResponseChairsF; // 0x280(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_6Pots_F_5; // 0x288(0x08)
	struct UStaticMeshComponent* SM_HM_Stacking_Cauldron_6Pots_C_8; // 0x290(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_K_PR_Cauldron_6Pots.BP_HW_K_PR_Cauldron_6Pots_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_K_PR_Cauldron_6Pots(int32_t EntryPoint); // Function BP_HW_K_PR_Cauldron_6Pots.BP_HW_K_PR_Cauldron_6Pots_C.ExecuteUbergraph_BP_HW_K_PR_Cauldron_6Pots // (Final|UbergraphFunction) // @ game+0x38a7480
};

