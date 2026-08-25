#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Condition { class ICondition; }
namespace MXField::Dispatch { class DispatchType; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0xEC61A0)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEC64A0)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEC2CF0)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC6650)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xEC6770)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xEC6810)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEC6370)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEC64B0)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_EVENTS_CONDITIONALBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC5E20)

namespace MXField::Events
{
	inline static constexpr unsigned int ConditionalBehavior_TypeDefinitionIndex = 10879;

	class ConditionalBehavior : public Il2CppObject
	{
	public:
		::MXField::Shared::Condition::ICondition* Condition; // 0x18

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean Execute(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_SUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Void Unsubscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_UNSUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_EXECUTEIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_CONDITIONALBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

