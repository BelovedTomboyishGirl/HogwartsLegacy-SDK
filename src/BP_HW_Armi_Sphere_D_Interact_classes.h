// BlueprintGeneratedClass BP_HW_Armi_Sphere_D_Interact.BP_HW_Armi_Sphere_D_Interact_C
// Size: 0x330 (Inherited: 0x2d8)
struct ABP_HW_Armi_Sphere_D_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_D_Frame; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct USceneComponent* MountA; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_D_MountB; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_D_Ball; // 0x300(0x08)
	struct USceneComponent* Tag; // 0x308(0x08)
	struct USceneComponent* MountB; // 0x310(0x08)
	struct UStaticMeshComponent* SM_HW_ArmilarySphere_D_MountA; // 0x318(0x08)
	float Timeline_0_NewTrack_0_16D416DF4C5DFF12801FA3A7EE2CA798; // 0x320(0x04)
	enum class ETimelineDirection Timeline_0__Direction_16D416DF4C5DFF12801FA3A7EE2CA798; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* Timeline_1; // 0x328(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_HW_Armi_Sphere_D_Interact.BP_HW_Armi_Sphere_D_Interact_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HW_Armi_Sphere_D_Interact.BP_HW_Armi_Sphere_D_Interact_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ResetCog(); // Function BP_HW_Armi_Sphere_D_Interact.BP_HW_Armi_Sphere_D_Interact_C.ResetCog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HW_Armi_Sphere_D_Interact.BP_HW_Armi_Sphere_D_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_Armi_Sphere_D_Interact(int32_t EntryPoint); // Function BP_HW_Armi_Sphere_D_Interact.BP_HW_Armi_Sphere_D_Interact_C.ExecuteUbergraph_BP_HW_Armi_Sphere_D_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

