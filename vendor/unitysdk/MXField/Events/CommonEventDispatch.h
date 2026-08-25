#pragma once
#include "../../unitysdk.h"

namespace MXField::Events { class CommonEventType; }

#define MXFIELD_EVENTS_COMMONEVENTDISPATCH_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEC60F0)
#define MXFIELD_EVENTS_COMMONEVENTDISPATCH_GET_ONEVENTFINISHED_OFFSET UNITYSDK_OFFSET(0xEC6100)
#define MXFIELD_EVENTS_COMMONEVENTDISPATCH_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xEC6110)
#define MXFIELD_EVENTS_COMMONEVENTDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC6120)

namespace MXField::Events
{
	inline static constexpr unsigned int CommonEventDispatch_TypeDefinitionIndex = 10877;

	class CommonEventDispatch : public Il2CppObject
	{
	public:
		::MXField::Events::CommonEventType* _EventType_k__BackingField; // 0x18
		::System::Int64 _EventId_k__BackingField; // 0x20
		::System::Action* _OnEventFinished_k__BackingField; // 0x28

		::MXField::Events::CommonEventType* get_EventType()
		{
			return ((::MXField::Events::CommonEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMMONEVENTDISPATCH_GET_EVENTTYPE_OFFSET))(nullptr);
		}

		::System::Action* get_OnEventFinished()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMMONEVENTDISPATCH_GET_ONEVENTFINISHED_OFFSET))(nullptr);
		}

		::System::Int64 get_EventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMMONEVENTDISPATCH_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::MXField::Events::CommonEventType* arg2, ::System::Int64 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Object*, ::MXField::Events::CommonEventType*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMMONEVENTDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

