#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionCharactersDead; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONCHARACTERSDEADVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813E10)
#define GROUNDCONDITIONCHARACTERSDEADVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813ED0)
#define GROUNDCONDITIONCHARACTERSDEADVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1813EE0)

	inline static constexpr unsigned int GroundConditionCharactersDeadVisual_TypeDefinitionIndex = 1227;

	class GroundConditionCharactersDeadVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionCharactersDead* CharactersDead; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERSDEADVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERSDEADVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERSDEADVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

