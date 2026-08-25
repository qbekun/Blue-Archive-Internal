#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldConditionType; }

#define MXFIELD_SHARED_CONDITION_ICONDITIONCHECKER_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int IConditionChecker_TypeDefinitionIndex = 10625;

	class IConditionChecker : public Il2CppObject
	{
	public:
		::System::Boolean IsSatisfied(::FlatData::FieldConditionType* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ICONDITIONCHECKER_ISSATISFIED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

