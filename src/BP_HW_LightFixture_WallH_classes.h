// BlueprintGeneratedClass BP_HW_LightFixture_WallH.BP_HW_LightFixture_WallH_C
// Size: 0xb08 (Inherited: 0xaec)
struct ABP_HW_LightFixture_WallH_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UPointLightComponent* Point Light_1; // 0xaf8(0x08)
	struct USpotLightComponent* Spot Light_1; // 0xb00(0x08)

	void ReceiveBeginPlay(); // Function BP_HW_LightFixture_WallH.BP_HW_LightFixture_WallH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_LightFixture_WallH(int32_t EntryPoint); // Function BP_HW_LightFixture_WallH.BP_HW_LightFixture_WallH_C.ExecuteUbergraph_BP_HW_LightFixture_WallH // (Final|UbergraphFunction) // @ game+0x38a7480
};

