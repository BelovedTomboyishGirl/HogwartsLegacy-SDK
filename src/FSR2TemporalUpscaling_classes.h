// Class FSR2TemporalUpscaling.FSR2Settings
// Size: 0x88 (Inherited: 0x38)
struct UFSR2Settings : UDeveloperSettings {
	bool bEnabled; // 0x38(0x01)
	bool AutoExposure; // 0x39(0x01)
	bool EnabledInEditorViewport; // 0x3a(0x01)
	bool UseSSRExperimentalDenoiser; // 0x3b(0x01)
	bool UseNativeDX12; // 0x3c(0x01)
	bool UseNativeVulkan; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	enum class EFSR2QualityMode QualityMode; // 0x40(0x04)
	enum class EFSR2HistoryFormat HistoryFormat; // 0x44(0x04)
	enum class EFSR2DeDitherMode DeDither; // 0x48(0x04)
	float Sharpness; // 0x4c(0x04)
	bool AdjustMipBias; // 0x50(0x01)
	bool ReactiveMask; // 0x51(0x01)
	bool ForceVertexDeformationOutputsVelocity; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	enum class EFSR2LandscapeHISMMode ForceLandscapeHISMMobility; // 0x54(0x04)
	float ReflectionScale; // 0x58(0x04)
	float ReflectionLuminanceBias; // 0x5c(0x04)
	float RoughnessScale; // 0x60(0x04)
	float RoughnessBias; // 0x64(0x04)
	float RoughnessMaxDistance; // 0x68(0x04)
	bool ReactiveMaskRoughnessForceMaxDistance; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float TranslucencyBias; // 0x70(0x04)
	float TranslucencyLuminanceBias; // 0x74(0x04)
	float TranslucencyMaxDistance; // 0x78(0x04)
	float PreDOFTranslucencyScale; // 0x7c(0x04)
	bool PreDOFTranslucencyMax; // 0x80(0x01)
	enum class EMaterialShadingModel ReactiveShadingModelID; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float ForceReactiveMaterialValue; // 0x84(0x04)
};

