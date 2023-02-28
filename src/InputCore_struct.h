// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8 {
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11,
	ETouchIndex_MAX = 12
};

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8 {
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	HMD = 6,
	Special_2 = 7,
	Special_3 = 8,
	Special_4 = 9,
	Special_5 = 10,
	Special_6 = 11,
	Special_7 = 12,
	Special_8 = 13,
	Special_9 = 14,
	Special_10 = 15,
	Special_11 = 16,
	Special_12 = 17,
	ControllerHand_Count = 18,
	EControllerHand_MAX = 19
};

// Enum InputCore.ETouchType
enum class ETouchType : uint8 {
	Began = 0,
	Moved = 1,
	Stationary = 2,
	ForceChanged = 3,
	FirstMove = 4,
	Ended = 5,
	NumTypes = 6,
	ETouchType_MAX = 7
};

// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8 {
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3
};

// ScriptStruct InputCore.Key
// Size: 0x18 (Inherited: 0x00)
struct FKey {
	struct FName KeyName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

