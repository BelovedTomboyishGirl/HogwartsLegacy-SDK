// AnimBlueprintGeneratedClass ABP_BarnOwl.ABP_BarnOwl_C
// Size: 0x8874 (Inherited: 0x2c0)
struct UABP_BarnOwl_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x410(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x430(0x20)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0x450(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x568(0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x680(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_30; // 0x6a0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_29; // 0xae0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_28; // 0xf20(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_27; // 0x1360(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_26; // 0x17a0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_25; // 0x1be0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_24; // 0x2020(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_23; // 0x2460(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_22; // 0x28a0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_21; // 0x2ce0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_20; // 0x3120(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_19; // 0x3560(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_18; // 0x39a0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_17; // 0x3de0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0x4220(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x4660(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x4aa0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x4ee0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x5320(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x5760(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x5ba0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x5fe0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x6420(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x6860(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x6ca0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x70e0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x7520(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x7960(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x7da0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x81e0(0x440)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x8620(0x118)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x8738(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x8850(0x20)
	float featherDynAmnt; // 0x8870(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_BarnOwl.ABP_BarnOwl_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_BarnOwl(int32_t EntryPoint); // Function ABP_BarnOwl.ABP_BarnOwl_C.ExecuteUbergraph_ABP_BarnOwl // (Final|UbergraphFunction) // @ game+0x38a7480
};

