// BlueprintGeneratedClass BP_UI_Map_Wave_01.BP_UI_Map_Wave_01_C
// Size: 0x278 (Inherited: 0x248)
struct ABP_UI_Map_Wave_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* WaterWave; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float WaterOpacity_WaveOpacity_A32C763A49998E7BB5F489AEFD1800AA; // 0x260(0x04)
	enum class ETimelineDirection WaterOpacity__Direction_A32C763A49998E7BB5F489AEFD1800AA; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* WaterOpacity; // 0x268(0x08)
	struct UMaterialInstanceDynamic* Wave_M; // 0x270(0x08)

	void UserConstructionScript(); // Function BP_UI_Map_Wave_01.BP_UI_Map_Wave_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WaterOpacity__FinishedFunc(); // Function BP_UI_Map_Wave_01.BP_UI_Map_Wave_01_C.WaterOpacity__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void WaterOpacity__UpdateFunc(); // Function BP_UI_Map_Wave_01.BP_UI_Map_Wave_01_C.WaterOpacity__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_UI_Map_Wave_01.BP_UI_Map_Wave_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_UI_Map_Wave_01(int32_t EntryPoint); // Function BP_UI_Map_Wave_01.BP_UI_Map_Wave_01_C.ExecuteUbergraph_BP_UI_Map_Wave_01 // (Final|UbergraphFunction) // @ game+0x38a7480
};

