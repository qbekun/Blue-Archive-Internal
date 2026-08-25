#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_SHARED_CONDITION_ANDORCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE81670)
#define MXFIELD_SHARED_CONDITION_ANDORCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE785C0)
#define MXFIELD_SHARED_CONDITION_ANDORCONDITION_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE816F0)
#define MXFIELD_SHARED_CONDITION_ANDORCONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE81A60)
#define MXFIELD_SHARED_CONDITION_ANDORCONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE81D80)
#define MXFIELD_SHARED_CONDITION_ANDORCONDITION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xE820B0)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int AndOrCondition_TypeDefinitionIndex = 10620;

	class AndOrCondition : public Il2CppObject
	{
	public:
		Il2CppObject* And; // 0x10
		::System::Boolean IncludeConditionInProgress; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDORCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDORCONDITION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDORCONDITION_ISSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDORCONDITION_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDORCONDITION_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ANDORCONDITION_ISEMPTY_OFFSET))(nullptr);
		}

	};
}

