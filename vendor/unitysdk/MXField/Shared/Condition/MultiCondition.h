#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_SHARED_CONDITION_MULTICONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE82530)
#define MXFIELD_SHARED_CONDITION_MULTICONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE825B0)
#define MXFIELD_SHARED_CONDITION_MULTICONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE786E0)
#define MXFIELD_SHARED_CONDITION_MULTICONDITION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xE82670)
#define MXFIELD_SHARED_CONDITION_MULTICONDITION_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE826C0)
#define MXFIELD_SHARED_CONDITION_MULTICONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE82850)
#define MXFIELD_SHARED_CONDITION_MULTICONDITION_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE82920)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int MultiCondition_TypeDefinitionIndex = 10629;

	class MultiCondition : public Il2CppObject
	{
	public:
		Il2CppObject* Conditions; // 0x10
		::System::Int32 TriggerCount; // 0x18
		::System::Boolean IncludeConditionInProgress; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_ISSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_MULTICONDITION_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

