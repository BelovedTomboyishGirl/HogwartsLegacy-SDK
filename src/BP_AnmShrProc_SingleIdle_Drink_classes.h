// BlueprintGeneratedClass BP_AnmShrProc_SingleIdle_Drink.BP_AnmShrProc_SingleIdle_Drink_C
// Size: 0x60 (Inherited: 0x60)
struct UBP_AnmShrProc_SingleIdle_Drink_C : UT4_AnimationSharingStateProcessor {

	enum class EFacialAnimType GetFacialAnimType(char InCurrentState); // Function BP_AnmShrProc_SingleIdle_Drink.BP_AnmShrProc_SingleIdle_Drink_C.GetFacialAnimType // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetUsesEyeMouthAnims(char InCurrentState, bool& bOutUsesEyeAnims, bool& bOutUsesMouthAnims); // Function BP_AnmShrProc_SingleIdle_Drink.BP_AnmShrProc_SingleIdle_Drink_C.GetUsesEyeMouthAnims // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UEnum* GetAnimationStateEnum(); // Function BP_AnmShrProc_SingleIdle_Drink.BP_AnmShrProc_SingleIdle_Drink_C.GetAnimationStateEnum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function BP_AnmShrProc_SingleIdle_Drink.BP_AnmShrProc_SingleIdle_Drink_C.ProcessActorState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

