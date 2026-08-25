#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_SHARED_CONDITION_ICONDITION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_SHARED_CONDITION_ICONDITION_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_SHARED_CONDITION_ICONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_SHARED_CONDITION_ICONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int ICondition_TypeDefinitionIndex = 10622;

	class ICondition : public Il2CppObject
	{
	public:
		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ICONDITION_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ICONDITION_ISSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ICONDITION_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ICONDITION_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

