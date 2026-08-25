#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_COUNTOUTOFRANGECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108CFD0)
#define MX_LOGIC_GENERICCONDITION_COUNTOUTOFRANGECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108D1A0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int CountOutOfRangeCondition_TypeDefinitionIndex = 12940;

	class CountOutOfRangeCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* CountToCheck; // 0x10
		::MX::Logic::GenericCondition::ReferenceVariable* CountMin; // 0x18
		::MX::Logic::GenericCondition::ReferenceVariable* CountMax; // 0x20

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_COUNTOUTOFRANGECONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_COUNTOUTOFRANGECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

