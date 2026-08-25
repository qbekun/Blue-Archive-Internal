#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_ORCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108C4C0)
#define MX_LOGIC_GENERICCONDITION_ORCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108C610)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int OrCondition_TypeDefinitionIndex = 12936;

	class OrCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* ConditionA; // 0x10
		::MX::Logic::GenericCondition::ReferenceVariable* ConditionB; // 0x18

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ORCONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ORCONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

