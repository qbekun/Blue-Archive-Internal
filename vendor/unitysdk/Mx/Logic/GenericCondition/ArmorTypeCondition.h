#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_ARMORTYPECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108E290)
#define MX_LOGIC_GENERICCONDITION_ARMORTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E310)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ArmorTypeCondition_TypeDefinitionIndex = 12949;

	class ArmorTypeCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* CheckTarget; // 0x10
		Il2CppObject* ArmorTypeList; // 0x18

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ARMORTYPECONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ARMORTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

