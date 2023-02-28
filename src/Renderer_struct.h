// ScriptStruct Renderer.LightPropagationVolumeSettings
// Size: 0x40 (Inherited: 0x00)
struct FLightPropagationVolumeSettings {
	char bOverride_LPVIntensity : 1; // 0x00(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x00(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x00(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x00(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_LPVSize : 1; // 0x00(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x01(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x01(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x01(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x01(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LPVIntensity; // 0x04(0x04)
	float LPVVplInjectionBias; // 0x08(0x04)
	float LPVSize; // 0x0c(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x10(0x04)
	float LPVSecondaryBounceIntensity; // 0x14(0x04)
	float LPVGeometryVolumeBias; // 0x18(0x04)
	float LPVEmissiveInjectionIntensity; // 0x1c(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x20(0x04)
	float LPVDirectionalOcclusionRadius; // 0x24(0x04)
	float LPVDiffuseOcclusionExponent; // 0x28(0x04)
	float LPVSpecularOcclusionExponent; // 0x2c(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x30(0x04)
	float LPVSpecularOcclusionIntensity; // 0x34(0x04)
	float LPVFadeRange; // 0x38(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x3c(0x04)
};

// ScriptStruct Renderer.DefaultPBRValidationProfile
// Size: 0x10 (Inherited: 0x00)
struct FDefaultPBRValidationProfile {
	struct FPBRValidationProfileRange LuminanceMetallicRange; // 0x00(0x08)
	struct FPBRValidationProfileRange LuminanceDielectricRange; // 0x08(0x08)
};

// ScriptStruct Renderer.PBRValidationProfileRange
// Size: 0x08 (Inherited: 0x00)
struct FPBRValidationProfileRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Renderer.PBRValidationProfile
// Size: 0x20 (Inherited: 0x00)
struct FPBRValidationProfile {
	struct FString Name; // 0x00(0x10)
	struct FPBRValidationProfileRange MetalnessRange; // 0x10(0x08)
	struct FPBRValidationProfileRange LuminanceRange; // 0x18(0x08)
};

