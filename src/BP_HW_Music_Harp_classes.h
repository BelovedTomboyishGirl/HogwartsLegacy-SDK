// BlueprintGeneratedClass BP_HW_Music_Harp.BP_HW_Music_Harp_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_HW_Music_Harp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HW_Music_Harp; // 0x250(0x08)
	struct UPhysicalResponseComponent* Phys response main; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ObjectPhysicalResponseImpact(float ImpactIntensity, struct FName SpellName, struct FName ResponseConfigName, struct FVector& ImpactLocation); // Function BP_HW_Music_Harp.BP_HW_Music_Harp_C.ObjectPhysicalResponseImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Music_Harp(int32_t EntryPoint); // Function BP_HW_Music_Harp.BP_HW_Music_Harp_C.ExecuteUbergraph_BP_HW_Music_Harp // (Final|UbergraphFunction) // @ game+0x38a7480
};

