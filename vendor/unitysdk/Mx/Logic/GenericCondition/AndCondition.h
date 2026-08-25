#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_ANDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108C360)
#define MX_LOGIC_GENERICCONDITION_ANDCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108C370)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int AndCondition_TypeDefinitionIndex = 12935;

	class AndCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* ConditionA; // 0x10
		::MX::Logic::GenericCondition::ReferenceVariable* ConditionB; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ANDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ANDCONDITION_CHECK_OFFSET))(nullptr);
		}

	};
}

