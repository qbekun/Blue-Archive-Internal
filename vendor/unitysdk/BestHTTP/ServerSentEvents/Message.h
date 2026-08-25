#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x757C30)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x7598E0)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x7598F0)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x759900)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x759910)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_ISCOMMENT_OFFSET UNITYSDK_OFFSET(0x759920)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_EVENT_OFFSET UNITYSDK_OFFSET(0x759930)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_RETRY_OFFSET UNITYSDK_OFFSET(0x759940)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_RETRY_OFFSET UNITYSDK_OFFSET(0x759950)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_ISCOMMENT_OFFSET UNITYSDK_OFFSET(0x759960)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x759970)
#define BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x7599B0)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int Message_TypeDefinitionIndex = 21526;

	class Message : public Il2CppObject
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::String* _Event_k__BackingField; // 0x18
		::System::String* _Data_k__BackingField; // 0x20
		::System::TimeSpan* _Retry_k__BackingField; // 0x28
		::System::Boolean _IsComment_k__BackingField; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Data()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* get_Event()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_EVENT_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Void set_IsComment(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_ISCOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Event(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_EVENT_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* get_Retry()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_RETRY_OFFSET))(nullptr);
		}

		::System::Void set_Retry(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_RETRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsComment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_GET_ISCOMMENT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_Data(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_MESSAGE_SET_DATA_OFFSET))(str, nullptr);
		}

	};
}

