// BlueprintGeneratedClass BP_Stand4PStation.BP_Stand4PStation_C
// Size: 0x4a8 (Inherited: 0x498)
struct ABP_Stand4PStation_C : ABP_Station_Propless4p_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x4a0(0x08)

	void ReceiveBeginPlay(); // Function BP_Stand4PStation.BP_Stand4PStation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Stand4PStation(int32_t EntryPoint); // Function BP_Stand4PStation.BP_Stand4PStation_C.ExecuteUbergraph_BP_Stand4PStation // (Final|UbergraphFunction) // @ game+0x38a7480
};

