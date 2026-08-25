#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_CONDITIONLIST_COUNT_OFFSET UNITYSDK_OFFSET(0x108C240)
#define MX_LOGIC_GENERICCONDITION_CONDITIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x108C280)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ConditionList_TypeDefinitionIndex = 12933;

	class ConditionList : public Il2CppObject
	{
	public:
		Il2CppObject* Conditions; // 0x10

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_CONDITIONLIST_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_CONDITIONLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

