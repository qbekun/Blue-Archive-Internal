#pragma once
#include "../../unitysdk.h"

namespace MXField::Events { class CommonEventType; }

#define MXFIELD_ACTIONS_COMMONEVENTACTION_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEE99F0)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEE9A00)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_HANDLEACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0xEE9A90)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEE9AA0)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEE9AB0)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xEE9AC0)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE9AD0)
#define MXFIELD_ACTIONS_COMMONEVENTACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE9B00)

namespace MXField::Actions
{
	inline static constexpr unsigned int CommonEventAction_TypeDefinitionIndex = 11038;

	class CommonEventAction : public Il2CppObject
	{
	public:
		::MXField::Events::CommonEventType* _EventType_k__BackingField; // 0x40
		::System::Int64 _EventId_k__BackingField; // 0x48
		::System::Boolean _IsPlaying_k__BackingField; // 0x50

		::MXField::Events::CommonEventType* get_EventType()
		{
			return ((::MXField::Events::CommonEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_GET_EVENTTYPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void HandleActionFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_HANDLEACTIONFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Int64 get_EventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Events::CommonEventType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MXField::Events::CommonEventType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COMMONEVENTACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

