#pragma once
#include "unitysdk.h"

class CharacterObject;

#define FORMATIONCHARACTER_SET_ASSISTOTHEROPERATIONTILE_OFFSET UNITYSDK_OFFSET(0x24D8250)
#define FORMATIONCHARACTER_GET_ASSISTOTHEROPERATIONTILE_OFFSET UNITYSDK_OFFSET(0x24D8260)
#define FORMATIONCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D8270)

	inline static constexpr unsigned int FormationCharacter_TypeDefinitionIndex = 5966;

	class FormationCharacter : public Il2CppObject
	{
	public:
		CharacterObject* Character; // 0x10
		::System::Boolean IsSelect; // 0x18
		::System::Boolean Using; // 0x19
		::System::Boolean Ready; // 0x1A
		::System::Boolean DeployedOnBase; // 0x1B
		::System::Boolean BlackList; // 0x1C
		::System::Boolean SameAssistCharacterInEchelon; // 0x1D
		::System::Boolean AssistTodayUseComplete; // 0x1E
		::System::Boolean _AssistOtherOperationTile_k__BackingField; // 0x1F
		Il2CppObject* EventContentId; // 0x20

		::System::Void set_AssistOtherOperationTile(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARACTER_SET_ASSISTOTHEROPERATIONTILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AssistOtherOperationTile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARACTER_GET_ASSISTOTHEROPERATIONTILE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};

