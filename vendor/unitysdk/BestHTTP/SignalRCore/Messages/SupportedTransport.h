#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x6550D0)
#define BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_SET_SUPPORTEDFORMATS_OFFSET UNITYSDK_OFFSET(0x6550E0)
#define BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x6550F0)
#define BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x655140)
#define BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_GET_SUPPORTEDFORMATS_OFFSET UNITYSDK_OFFSET(0x655150)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int SupportedTransport_TypeDefinitionIndex = 21470;

	class SupportedTransport : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		Il2CppObject* _SupportedFormats_k__BackingField; // 0x18

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_SupportedFormats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_SET_SUPPORTEDFORMATS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_SET_NAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_SupportedFormats()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_SUPPORTEDTRANSPORT_GET_SUPPORTEDFORMATS_OFFSET))(nullptr);
		}

	};
}

