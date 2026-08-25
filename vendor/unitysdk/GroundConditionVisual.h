#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDCONDITIONVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDCONDITIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18134F0)

	inline static constexpr unsigned int GroundConditionVisual_TypeDefinitionIndex = 1240;

	class GroundConditionVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

