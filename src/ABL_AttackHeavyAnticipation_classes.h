// AblAbilityBlueprintGeneratedClass ABL_AttackHeavyAnticipation.ABL_AttackHeavyAnticipation_C
// Size: 0xd0 (Inherited: 0xc8)
struct UABL_AttackHeavyAnticipation_C : UAblAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_AttackHeavyAnticipation.ABL_AttackHeavyAnticipation_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_AttackHeavyAnticipation.ABL_AttackHeavyAnticipation_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_AttackHeavyAnticipation(int32_t EntryPoint); // Function ABL_AttackHeavyAnticipation.ABL_AttackHeavyAnticipation_C.ExecuteUbergraph_ABL_AttackHeavyAnticipation // (Final|UbergraphFunction) // @ game+0x38a7480
};

