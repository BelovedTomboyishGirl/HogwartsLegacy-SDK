// Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEncodingSettingsBase : UObject {
};

// Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAudioEndpointSettingsBase : UObject {
};

// Class AudioExtensions.DummyEndpointSettings
// Size: 0x28 (Inherited: 0x28)
struct UDummyEndpointSettings : UAudioEndpointSettingsBase {
};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USpatializationPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UOcclusionPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UReverbPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.SoundModulatorBase
// Size: 0x28 (Inherited: 0x28)
struct USoundModulatorBase : UObject {
};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEndpointSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEffectSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectBase
// Size: 0x30 (Inherited: 0x28)
struct USoundfieldEffectBase : UObject {
	struct USoundfieldEffectSettingsBase* Settings; // 0x28(0x08)
};

