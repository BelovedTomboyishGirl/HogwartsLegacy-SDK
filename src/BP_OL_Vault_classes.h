// BlueprintGeneratedClass BP_OL_Vault.BP_OL_Vault_C
// Size: 0xc90 (Inherited: 0x248)
struct ABP_OL_Vault_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* New Marker SOLO; // 0x250(0x08)
	struct UChildActorComponent* BP_OL_Vault_AvatarApproaching; // 0x258(0x08)
	struct UChildActorComponent* BP_OL_Vault_MetricsTriggerVolume; // 0x260(0x08)
	struct UAvaStreamingVolumeComponent* AvaStreamingVolume; // 0x268(0x08)
	struct UBoxComponent* Trigger; // 0x270(0x08)
	struct UChildActorComponent* BP_VaultRuin_Marker; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct AEncounterCreator* InstancedEncounterCreator; // 0x288(0x08)
	enum class E_AVA_OL_VaultList Vault List; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct TMap<enum class E_AVA_OL_VaultList, struct TSoftClassPtr<UObject>> VaultProxyList; // 0x298(0x50)
	struct TMap<enum class E_AVA_OL_VaultList, struct TSoftObjectPtr<UWorld>> VaultTypeToLevel; // 0x2e8(0x50)
	struct UChildActorComponent* Proxy; // 0x338(0x08)
	struct FTransform Cairn Crawl Door; // 0x340(0x30)
	struct FTransform Cairn Spinner Beam; // 0x370(0x30)
	struct FTransform Bombarda; // 0x3a0(0x30)
	struct FTransform Magic Plate; // 0x3d0(0x30)
	struct FTransform Magic Plate Door; // 0x400(0x30)
	struct FTransform Alohamora; // 0x430(0x30)
	struct FTransform WindSpinnerA; // 0x460(0x30)
	struct FTransform WindSpinnerB; // 0x490(0x30)
	struct FTransform Controller; // 0x4c0(0x30)
	struct FTransform DepulsoBars; // 0x4f0(0x30)
	struct FTransform Zero; // 0x520(0x30)
	struct FTransform Controller_TargetLocationA; // 0x550(0x30)
	struct FTransform Controller_TargetLocationB; // 0x580(0x30)
	bool PlateIncendio; // 0x5b0(0x01)
	bool PlateLevioso; // 0x5b1(0x01)
	bool PlateGlacius; // 0x5b2(0x01)
	char pad_5B3[0xd]; // 0x5b3(0x0d)
	struct FTransform SpiderWebs; // 0x5c0(0x30)
	struct FTransform AccioDoor; // 0x5f0(0x30)
	struct FTransform AccioSswitch; // 0x620(0x30)
	struct FTransform DevilsSnare; // 0x650(0x30)
	struct FTransform WindSpinnerTrigger; // 0x680(0x30)
	struct TArray<struct FName> VaultSpinnerTag; // 0x6b0(0x10)
	struct AActor* Cube; // 0x6c0(0x08)
	char pad_6C8[0x8]; // 0x6c8(0x08)
	struct FTransform SwimTeleportEntrance; // 0x6d0(0x30)
	struct FTransform SwimTeleportExit; // 0x700(0x30)
	struct FTransform SwimTeleport_Exit_Destination; // 0x730(0x30)
	struct FTransform SwimTeleport_Entrance_Destination; // 0x760(0x30)
	struct TArray<struct AActor*> AttachedActors; // 0x790(0x10)
	struct FString DoorName; // 0x7a0(0x10)
	struct FName String; // 0x7b0(0x08)
	struct FString Metrics Name; // 0x7b8(0x10)
	struct AActor* Spawned Cube; // 0x7c8(0x08)
	struct ABP_Vault_Door_C* BP_VaultDoor_Root; // 0x7d0(0x08)
	struct FString TMP Stat Name; // 0x7d8(0x10)
	struct TArray<struct FString> TMP Stat String Array A; // 0x7e8(0x10)
	struct FString TMP Name Prefix; // 0x7f8(0x10)
	struct FString TMP Stat Name Inside Macro; // 0x808(0x10)
	struct TArray<struct AActor*> NewVar_1; // 0x818(0x10)
	struct TArray<struct FString> Letters; // 0x828(0x10)
	struct ULevelStreamingDynamic* LightingSubLevel; // 0x838(0x08)
	bool Use New Marker; // 0x840(0x01)
	bool Use Offest Beacon; // 0x841(0x01)
	bool Beacon Offset = Hallway Left; // 0x842(0x01)
	bool Beacon Offset = Hallway Right; // 0x843(0x01)
	bool Beacon Offset = Use Manual; // 0x844(0x01)
	char pad_845[0x3]; // 0x845(0x03)
	struct TSoftClassPtr<UObject> BP_WindSpinner; // 0x848(0x28)
	struct FTransform Beacon Offset Manual; // 0x870(0x30)
	bool Chest Owner - Show Debug Radius; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	float Chest Owner Custom Radius; // 0x8a4(0x04)
	struct TSoftClassPtr<UObject> BP_ControlledObjects; // 0x8a8(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door_Cairn_DepulsoBarsA; // 0x8d0(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door_Cairn_DepulsoBarsB; // 0x8f8(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door; // 0x920(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_CrawlDoor_02; // 0x948(0x28)
	struct TSoftClassPtr<UObject> BP_DepulsoDoor; // 0x970(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door_DepulsoTrigger; // 0x998(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door_Cairn_DepulsoBarsEndCaps; // 0x9c0(0x28)
	struct TSoftClassPtr<UObject> BP_AccioSwitch; // 0x9e8(0x28)
	struct TSoftClassPtr<UObject> BP_MagicDoor; // 0xa10(0x28)
	struct TSoftClassPtr<UObject> TargetPoint; // 0xa38(0x28)
	struct TSoftClassPtr<UObject> BP_WorldTeleport_Swimming; // 0xa60(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door_Bombarda; // 0xa88(0x28)
	struct TSoftClassPtr<UObject> BP_BreakableDoor; // 0xab0(0x28)
	struct TSoftClassPtr<UObject> BP_SpiderWeb; // 0xad8(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_CrawlDoor_01; // 0xb00(0x28)
	struct TSoftClassPtr<UObject> BP_Vault_Door_DevilsSnare; // 0xb28(0x28)
	struct TSoftClassPtr<UObject> BP_PuzzleCube_Levioso; // 0xb50(0x28)
	struct TSoftClassPtr<UObject> BP_PuzzleCube_Incendio; // 0xb78(0x28)
	struct TSoftClassPtr<UObject> BP_PuzzleCube_Glacius; // 0xba0(0x28)
	struct TSoftClassPtr<UObject> BP_MagicTrigger; // 0xbc8(0x28)
	struct TSoftClassPtr<UObject> BP_TrickWall; // 0xbf0(0x28)
	struct TSoftClassPtr<UObject> BP_Door_Template; // 0xc18(0x28)
	struct TSoftClassPtr<UObject> BP_ResetOnExit; // 0xc40(0x28)
	struct TSoftClassPtr<UObject> BP_Disillusionment_Door; // 0xc68(0x28)

	void UserConstructionScript(); // Function BP_OL_Vault.BP_OL_Vault_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OL_Vault.BP_OL_Vault_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Crawl(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Crawl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Depulso Door(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Depulso Door // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Goblin - Disillusionment (eye door)(); // Function BP_OL_Vault.BP_OL_Vault_C.Goblin - Disillusionment (eye door) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Goblin -Crawl(); // Function BP_OL_Vault.BP_OL_Vault_C.Goblin -Crawl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cave - Bombarda (rock pile)(); // Function BP_OL_Vault.BP_OL_Vault_C.Cave - Bombarda (rock pile) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Goblin - Bombarda (rock pile)(); // Function BP_OL_Vault.BP_OL_Vault_C.Goblin - Bombarda (rock pile) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void  ave - Lumos (Devil???s snar(); // Function BP_OL_Vault.BP_OL_Vault_C. ave - Lumos (Devil???s snar // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Castle - Leviosa (magic plate)(); // Function BP_OL_Vault.BP_OL_Vault_C.Castle - Leviosa (magic plate) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Castle - Alohamora (Level 1)(); // Function BP_OL_Vault.BP_OL_Vault_C.Castle - Alohamora (Level 1) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Depulso Spinner(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Depulso Spinner // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Castle - Incendio (magic plate)(); // Function BP_OL_Vault.BP_OL_Vault_C.Castle - Incendio (magic plate) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Castle - Glacius (magic plate)(); // Function BP_OL_Vault.BP_OL_Vault_C.Castle - Glacius (magic plate) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Leviosa (magic plate)(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Leviosa (magic plate) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Glacius (magic plate)(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Glacius (magic plate) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Incendio (magic plate)(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Incendio (magic plate) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cave - Stupefy (boards)(); // Function BP_OL_Vault.BP_OL_Vault_C.Cave - Stupefy (boards) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cave - Incendio (Spider webs)(); // Function BP_OL_Vault.BP_OL_Vault_C.Cave - Incendio (Spider webs) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cairn - Accio(); // Function BP_OL_Vault.BP_OL_Vault_C.Cairn - Accio // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Goblin - Alohamora (any level)(); // Function BP_OL_Vault.BP_OL_Vault_C.Goblin - Alohamora (any level) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Castle - Alohamora (Level 2)(); // Function BP_OL_Vault.BP_OL_Vault_C.Castle - Alohamora (Level 2) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Castle - Alohamora (Level 3)(); // Function BP_OL_Vault.BP_OL_Vault_C.Castle - Alohamora (Level 3) // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Cave Door Crawl(); // Function BP_OL_Vault.BP_OL_Vault_C.Cave Door Crawl // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Underwater A Mission(); // Function BP_OL_Vault.BP_OL_Vault_C.Underwater A Mission // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Underwater B HS1 HS2 HN1(); // Function BP_OL_Vault.BP_OL_Vault_C.Underwater B HS1 HS2 HN1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Underwater B HN2 F1(); // Function BP_OL_Vault.BP_OL_Vault_C.Underwater B HN2 F1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Underwater B F1 F3 F4 CO_ALL(); // Function BP_OL_Vault.BP_OL_Vault_C.Underwater B F1 F3 F4 CO_ALL // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void __Load_Lighting(); // Function BP_OL_Vault.BP_OL_Vault_C.__Load_Lighting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void __Unload_Lighting(); // Function BP_OL_Vault.BP_OL_Vault_C.__Unload_Lighting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void zzz_Report VP Chest Name(); // Function BP_OL_Vault.BP_OL_Vault_C.zzz_Report VP Chest Name // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OL_Vault(int32_t EntryPoint); // Function BP_OL_Vault.BP_OL_Vault_C.ExecuteUbergraph_BP_OL_Vault // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

