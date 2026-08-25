#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }

#define MXFIELD_SHARED_CONDITION_ORCONDITIONSUBSET_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE81890)
#define MXFIELD_SHARED_CONDITION_ORCONDITIONSUBSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE78560)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int OrConditionSubset_TypeDefinitionIndex = 10624;

	class OrConditionSubset : public Il2CppObject
	{
	public:
		Il2CppObject* Or; // 0x10

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORCONDITIONSUBSET_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORCONDITIONSUBSET_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

