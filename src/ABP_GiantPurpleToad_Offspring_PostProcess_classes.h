// AnimBlueprintGeneratedClass ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C
// Size: 0xdd0 (Inherited: 0x2c0)
struct UABP_GiantPurpleToad_Offspring_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_3; // 0x2c8(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x3f0(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x518(0x128)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x640(0x28)
	struct FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend; // 0x668(0x50)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x6b8(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x6e0(0x158)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x838(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x858(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x878(0x118)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x990(0x30)
	struct FAnimNode_BoneTransformMultiplier AnimGraphNode_BoneTransformMultiplier_4; // 0x9c0(0x100)
	struct FAnimNode_BoneTransformMultiplier AnimGraphNode_BoneTransformMultiplier_3; // 0xac0(0x100)
	struct FAnimNode_BoneTransformMultiplier AnimGraphNode_BoneTransformMultiplier_2; // 0xbc0(0x100)
	struct FAnimNode_BoneTransformMultiplier AnimGraphNode_BoneTransformMultiplier; // 0xcc0(0x100)
	float PlayRate; // 0xdc0(0x04)
	char pad_DC4[0x4]; // 0xdc4(0x04)
	struct UAmbulatory_AnimInstance* AnimBP; // 0xdc8(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_54A542B2405F346554251DA87CF86B6E(); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_54A542B2405F346554251DA87CF86B6E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_F349514343CED8607C60128449C2307C(); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_F349514343CED8607C60128449C2307C // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_A799AA0348F222144CEC4DB5214B5912(); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_A799AA0348F222144CEC4DB5214B5912 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_7039E33B4DE8520B848837A4174B564B(); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_BoneTransformMultiplier_7039E33B4DE8520B848837A4174B564B // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_MultiWayBlend_34ADB4214DDB0300E006AE82B58069B5(); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess_AnimGraphNode_MultiWayBlend_34ADB4214DDB0300E006AE82B58069B5 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess(int32_t EntryPoint); // Function ABP_GiantPurpleToad_Offspring_PostProcess.ABP_GiantPurpleToad_Offspring_PostProcess_C.ExecuteUbergraph_ABP_GiantPurpleToad_Offspring_PostProcess // (Final|UbergraphFunction) // @ game+0x38a7480
};

