// BlueprintGeneratedClass BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C
// Size: 0x346 (Inherited: 0x250)
struct ABP_FS_SpellImpactNew_C : AFieldSystemActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UCullingField* CullingField - LinearForce; // 0x258(0x08)
	struct UOperatorField* OperatorField - LinearForce; // 0x260(0x08)
	struct UUniformVector* UniformVector - LinearForce; // 0x268(0x08)
	struct UCullingField* CullingField - Torque; // 0x270(0x08)
	struct UOperatorField* OperatorField - TorqueB; // 0x278(0x08)
	struct UOperatorField* OperatorField - TorqueA; // 0x280(0x08)
	struct UUniformScalar* UniformScalar - Torque; // 0x288(0x08)
	struct URandomVector* RandomVector - Torque; // 0x290(0x08)
	struct UUniformVector* UniformVector - Torque; // 0x298(0x08)
	struct UCullingField* CullingField - Strain ; // 0x2a0(0x08)
	struct URadialFalloff* RadialFalloff - Strain Culling; // 0x2a8(0x08)
	struct UStaticMeshComponent* Strain Volume; // 0x2b0(0x08)
	struct URadialFalloff* RadialFalloff - Strain Magnitude; // 0x2b8(0x08)
	struct URadialFalloff* RadialFalloff - Culling Force; // 0x2c0(0x08)
	struct UCullingField* CullingField - Force; // 0x2c8(0x08)
	struct UOperatorField* OperatorField - Force; // 0x2d0(0x08)
	struct URadialVector* RadialVector - Force; // 0x2d8(0x08)
	struct UOperatorField* OperatorField - Force Noise; // 0x2e0(0x08)
	struct UNoiseField* NoiseField - Force; // 0x2e8(0x08)
	struct URadialFalloff* RadialFalloff - Force Magnitude; // 0x2f0(0x08)
	struct FVector Impact Direction; // 0x2f8(0x0c)
	bool DemolitionActive?; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float Delay; // 0x308(0x04)
	float Strain Radius; // 0x30c(0x04)
	float Strain Magnitude; // 0x310(0x04)
	float Radial Push Magnitude; // 0x314(0x04)
	struct FLinearColor Deactivated; // 0x318(0x10)
	float Linear Push Magnitude; // 0x328(0x04)
	float Push Noise Max; // 0x32c(0x04)
	float Push Noise Min; // 0x330(0x04)
	float Torque Magnitude; // 0x334(0x04)
	struct FVector Torque Vector Override; // 0x338(0x0c)
	bool Is Debug?; // 0x344(0x01)
	bool Destroy Node After Strike?; // 0x345(0x01)

	void UserConstructionScript(); // Function BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FS_SpellImpactNew(int32_t EntryPoint); // Function BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C.ExecuteUbergraph_BP_FS_SpellImpactNew // (Final|UbergraphFunction) // @ game+0x38a7480
};

