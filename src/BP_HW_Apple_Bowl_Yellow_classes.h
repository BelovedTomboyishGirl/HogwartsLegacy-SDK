// BlueprintGeneratedClass BP_HW_Apple_Bowl_Yellow.BP_HW_Apple_Bowl_Yellow_C
// Size: 0x350 (Inherited: 0x2f4)
struct ABP_HW_Apple_Bowl_Yellow_C : ABP_HW_PartialBody_Interaction_C {
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_HW_AppleBowl_B_Yellow; // 0x300(0x08)
	struct USceneComponent* spawnLocation3; // 0x308(0x08)
	struct USceneComponent* spawnLocation2; // 0x310(0x08)
	struct USceneComponent* spawnLocation1; // 0x318(0x08)
	struct TArray<struct AActor*> applesSpawned; // 0x320(0x10)
	struct TArray<struct AActor*> RandomApple; // 0x330(0x10)
	struct TArray<struct FTransform> SpawnLocations; // 0x340(0x10)

	void InteractionStarted(); // Function BP_HW_Apple_Bowl_Yellow.BP_HW_Apple_Bowl_Yellow_C.InteractionStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Apples(); // Function BP_HW_Apple_Bowl_Yellow.BP_HW_Apple_Bowl_Yellow_C.Spawn Apples // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HW_Apple_Bowl_Yellow.BP_HW_Apple_Bowl_Yellow_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Kill apples(); // Function BP_HW_Apple_Bowl_Yellow.BP_HW_Apple_Bowl_Yellow_C.Kill apples // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Apple_Bowl_Yellow(int32_t EntryPoint); // Function BP_HW_Apple_Bowl_Yellow.BP_HW_Apple_Bowl_Yellow_C.ExecuteUbergraph_BP_HW_Apple_Bowl_Yellow // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

