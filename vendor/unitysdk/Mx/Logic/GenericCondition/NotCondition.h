#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_NOTCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108C290)
#define MX_LOGIC_GENERICCONDITION_NOTCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108C2A0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int NotCondition_TypeDefinitionIndex = 12934;

	class NotCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* Condition; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_NOTCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_NOTCONDITION_CHECK_OFFSET))(nullptr);
		}

	};
}

