// AblAbilityBlueprintGeneratedClass ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C
// Size: 0xf8 (Inherited: 0xe0)
struct UABL_NPC_RCT_SendAway_S_C : UAblReactionAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct ACharacter* TempCharRef; // 0xe8(0x08)
	struct UObject* NewVar_1; // 0xf0(0x08)

	void OnAbilityEnd(struct UAblAbilityContext* Context); // Function ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityEnd // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityInterrupt(struct UAblAbilityContext* Context); // Function ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityInterrupt // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityBranch(struct UAblAbilityContext* Context, struct UAblAbility* NextAbility); // Function ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityBranch // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.OnAbilityStart // (Event|Public|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_ABL_NPC_RCT_SendAway_S(int32_t EntryPoint); // Function ABL_NPC_RCT_SendAway_S.ABL_NPC_RCT_SendAway_S_C.ExecuteUbergraph_ABL_NPC_RCT_SendAway_S // (Final|UbergraphFunction) // @ game+0x38a7480
};

