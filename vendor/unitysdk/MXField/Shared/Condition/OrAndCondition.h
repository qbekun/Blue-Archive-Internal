#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_SHARED_CONDITION_ORANDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE82AB0)
#define MXFIELD_SHARED_CONDITION_ORANDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE78680)
#define MXFIELD_SHARED_CONDITION_ORANDCONDITION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xE82B30)
#define MXFIELD_SHARED_CONDITION_ORANDCONDITION_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE82B80)
#define MXFIELD_SHARED_CONDITION_ORANDCONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE82D40)
#define MXFIELD_SHARED_CONDITION_ORANDCONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE83060)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int OrAndCondition_TypeDefinitionIndex = 10630;

	class OrAndCondition : public Il2CppObject
	{
	public:
		Il2CppObject* Or; // 0x10
		::System::Boolean IncludeConditionInProgress; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORANDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORANDCONDITION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORANDCONDITION_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORANDCONDITION_ISSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORANDCONDITION_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_ORANDCONDITION_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

