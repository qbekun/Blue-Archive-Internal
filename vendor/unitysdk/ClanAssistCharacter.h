#pragma once
#include "unitysdk.h"

class CharacterObject;

#define CLANASSISTCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x220BEC0)

	inline static constexpr unsigned int ClanAssistCharacter_TypeDefinitionIndex = 4354;

	class ClanAssistCharacter : public Il2CppObject
	{
	public:
		CharacterObject* Character; // 0x10
		::System::Boolean IsSelect; // 0x18
		::System::Boolean IsDim; // 0x19

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTCHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};

