#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }
class CompareOperator;

#define MX_LOGIC_GENERICCONDITION_COUNTCOMPARECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108C620)
#define MX_LOGIC_GENERICCONDITION_COUNTCOMPARECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108CDE0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int CountCompareCondition_TypeDefinitionIndex = 12938;

	class CountCompareCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* CountA; // 0x10
		CompareOperator* Operator; // 0x18
		::MX::Logic::GenericCondition::ReferenceVariable* CountB; // 0x20

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_COUNTCOMPARECONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_COUNTCOMPARECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

