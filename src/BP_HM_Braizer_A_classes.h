// BlueprintGeneratedClass BP_HM_Braizer_A.BP_HM_Braizer_A_C
// Size: 0xb08 (Inherited: 0xaec)
struct ABP_HM_Braizer_A_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UCapsuleComponent* Capsule; // 0xaf8(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Firepit_001_LOD; // 0xb00(0x08)

	void ReceiveBeginPlay(); // Function BP_HM_Braizer_A.BP_HM_Braizer_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_Braizer_A(int32_t EntryPoint); // Function BP_HM_Braizer_A.BP_HM_Braizer_A_C.ExecuteUbergraph_BP_HM_Braizer_A // (Final|UbergraphFunction) // @ game+0x38a7480
};

