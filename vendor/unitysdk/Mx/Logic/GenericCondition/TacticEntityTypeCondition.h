#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_TACTICENTITYTYPECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108E320)
#define MX_LOGIC_GENERICCONDITION_TACTICENTITYTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E390)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int TacticEntityTypeCondition_TypeDefinitionIndex = 12950;

	class TacticEntityTypeCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* CheckTarget; // 0x10
		Il2CppObject* TacticEntityTypeList; // 0x18

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_TACTICENTITYTYPECONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_TACTICENTITYTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

