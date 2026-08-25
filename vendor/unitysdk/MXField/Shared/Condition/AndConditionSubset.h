#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }

#define MXFIELD_SHARED_CONDITION_ANDCONDITIONSUBSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE78620)
#define MXFIELD_SHARED_CONDITION_ANDCONDITIONSUBSET_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE82370)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int AndConditionSubset_TypeDefinitionIndex = 10623;

	class AndConditionSubset : public Il2CppObject
	{
	public:
		Il2CppObject* And; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDCONDITIONSUBSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDCONDITIONSUBSET_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

