// BlueprintGeneratedClass BP_Broom_Race_Marker.BP_Broom_Race_Marker_C
// Size: 0x320 (Inherited: 0x304)
struct ABP_Broom_Race_Marker_C : ANone {
	char pad_304[0x4]; // 0x304(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UBillboardComponent* Billboard; // 0x310(0x08)
	struct UChildActorComponent* BeaconLocation; // 0x318(0x08)

	void UserConstructionScript(); // Function BP_Broom_Race_Marker.BP_Broom_Race_Marker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Broom_Race_Marker.BP_Broom_Race_Marker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Broom_Race_Marker(int32_t EntryPoint); // Function BP_Broom_Race_Marker.BP_Broom_Race_Marker_C.ExecuteUbergraph_BP_Broom_Race_Marker // (Final|UbergraphFunction) // @ game+0x38a7480
};

