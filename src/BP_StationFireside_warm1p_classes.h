// BlueprintGeneratedClass BP_StationFireside_warm1p.BP_StationFireside_warm1p_C
// Size: 0x428 (Inherited: 0x40c)
struct ABP_StationFireside_warm1p_C : ABP_Station_Propless1p_C {
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x418(0x08)
	struct USkeletalMeshComponent* SkelMesh_1; // 0x420(0x08)

	void ReceiveBeginPlay(); // Function BP_StationFireside_warm1p.BP_StationFireside_warm1p_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationFireside_warm1p(int32_t EntryPoint); // Function BP_StationFireside_warm1p.BP_StationFireside_warm1p_C.ExecuteUbergraph_BP_StationFireside_warm1p // (Final|UbergraphFunction) // @ game+0x38a7480
};

