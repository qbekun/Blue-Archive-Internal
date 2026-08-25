#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_GENERICFIELDCONTAINSVALUECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108D530)
#define MX_LOGIC_GENERICCONDITION_GENERICFIELDCONTAINSVALUECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E030)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int GenericFieldContainsValueCondition_TypeDefinitionIndex = 12947;

	class GenericFieldContainsValueCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* CheckTarget; // 0x10
		::System::String* FieldName; // 0x18
		Il2CppObject* CheckContainsValueList; // 0x20

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_GENERICFIELDCONTAINSVALUECONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_GENERICFIELDCONTAINSVALUECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

