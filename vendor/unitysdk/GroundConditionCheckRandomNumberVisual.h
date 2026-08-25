#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionCheckRandomNumber; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONCHECKRANDOMNUMBERVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813EF0)
#define GROUNDCONDITIONCHECKRANDOMNUMBERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1813FB0)
#define GROUNDCONDITIONCHECKRANDOMNUMBERVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813FC0)

	inline static constexpr unsigned int GroundConditionCheckRandomNumberVisual_TypeDefinitionIndex = 1228;

	class GroundConditionCheckRandomNumberVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionCheckRandomNumber* GroundConditionCheckRandomNumber; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHECKRANDOMNUMBERVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHECKRANDOMNUMBERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHECKRANDOMNUMBERVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

