#pragma once
#include "unitysdk.h"

class TriggerType;
class ActionType;

#define DYNAMICUISLOTOPTIONALREQUEST_ISTRIGGERMATCH_OFFSET UNITYSDK_OFFSET(0x218CA40)
#define DYNAMICUISLOTOPTIONALREQUEST_APPLY_OFFSET UNITYSDK_OFFSET(0x218CA90)

	inline static constexpr unsigned int DynamicUISlotOptionalRequest_TypeDefinitionIndex = 4092;

	class DynamicUISlotOptionalRequest : public Il2CppObject
	{
	public:
		TriggerType* Trigger; // 0x10
		ActionType* Action; // 0x14
		::System::String* TriggerParam; // 0x18
		::System::String* ActionParam; // 0x20

		::System::Boolean IsTriggerMatch(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOTOPTIONALREQUEST_ISTRIGGERMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply(float&* arg)
		{
			((::System::Void(*)(float&*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOTOPTIONALREQUEST_APPLY_OFFSET))(arg, nullptr);
		}

	};

