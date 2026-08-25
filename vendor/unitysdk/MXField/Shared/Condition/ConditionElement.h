#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldConditionType; }
namespace MXField::Shared::Condition { class IConditionChecker; }
namespace MXField::Shared::Condition { class ConditionElement; }

#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE74AA0)
#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE80B50)
#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE82100)
#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xE821D0)
#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xE7CBA0)
#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xE82200)
#define MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE82300)

namespace MXField::Shared::Condition
{
	inline static constexpr unsigned int ConditionElement_TypeDefinitionIndex = 10621;

	class ConditionElement : public Il2CppObject
	{
	public:
		::FlatData::FieldConditionType* Type; // 0x10
		::System::Int64 Id; // 0x18
		::System::Boolean Negation; // 0x20

		::System::Void .ctor(::FlatData::FieldConditionType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::FieldConditionType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Shared::Condition::ConditionElement* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::ConditionElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::FlatData::FieldConditionType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_EQUALS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_CONDITION_CONDITIONELEMENT_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

