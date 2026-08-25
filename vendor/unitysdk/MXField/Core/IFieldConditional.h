#pragma once
#include "../../unitysdk.h"

namespace FlatData { class FieldConditionType; }

#define MXFIELD_CORE_IFIELDCONDITIONAL_HASCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDCONDITIONAL_HASCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Core
{
	inline static constexpr unsigned int IFieldConditional_TypeDefinitionIndex = 10966;

	class IFieldConditional : public Il2CppObject
	{
	public:
		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDCONDITIONAL_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDCONDITIONAL_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

