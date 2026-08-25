#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionATGCheck; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONATGCHECKVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813A90)
#define GROUNDCONDITIONATGCHECKVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813AA0)
#define GROUNDCONDITIONATGCHECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1813B60)

	inline static constexpr unsigned int GroundConditionATGCheckVisual_TypeDefinitionIndex = 1223;

	class GroundConditionATGCheckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionATGCheck* ATGCheck; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONATGCHECKVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONATGCHECKVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONATGCHECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

