#pragma once
#include "../../unitysdk.h"

namespace FlatData { class FieldConditionType; }

#define MXFIELD_CORE_IFIELDCONDITIONTRIGGER_HASTRIGGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDCONDITIONTRIGGER_HASTRIGGER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Core
{
	inline static constexpr unsigned int IFieldConditionTrigger_TypeDefinitionIndex = 10967;

	class IFieldConditionTrigger : public Il2CppObject
	{
	public:
		::System::Boolean HasTrigger(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDCONDITIONTRIGGER_HASTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTrigger(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDCONDITIONTRIGGER_HASTRIGGER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

