#pragma once
#include "unitysdk.h"

class ScenarioCharacterTarget;
class UIScenarioCharacterControl;

#define SCENARIOCHARACTERSLOTPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DB850)
#define SCENARIOCHARACTERSLOTPAIR_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x27DB860)
#define SCENARIOCHARACTERSLOTPAIR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x27DB870)

	inline static constexpr unsigned int ScenarioCharacterSlotPair_TypeDefinitionIndex = 7631;

	class ScenarioCharacterSlotPair : public Il2CppObject
	{
	public:
		ScenarioCharacterTarget* characterTarget; // 0x10
		UIScenarioCharacterControl* characterControl; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSLOTPAIR_.CTOR_OFFSET))(nullptr);
		}

		UIScenarioCharacterControl* get_Control()
		{
			return ((UIScenarioCharacterControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSLOTPAIR_GET_CONTROL_OFFSET))(nullptr);
		}

		ScenarioCharacterTarget* get_Target()
		{
			return ((ScenarioCharacterTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHARACTERSLOTPAIR_GET_TARGET_OFFSET))(nullptr);
		}

	};

