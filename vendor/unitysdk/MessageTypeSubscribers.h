#pragma once
#include "unitysdk.h"

#define MESSAGETYPESUBSCRIBERS_GET_MESSAGETYPEID_OFFSET UNITYSDK_OFFSET(0xA24FD40)
#define MESSAGETYPESUBSCRIBERS_SET_MESSAGETYPEID_OFFSET UNITYSDK_OFFSET(0xA24FEB0)
#define MESSAGETYPESUBSCRIBERS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24FE10)

	inline static constexpr unsigned int MessageTypeSubscribers_TypeDefinitionIndex = 31471;

	class MessageTypeSubscribers : public Il2CppObject
	{
	public:
		::System::String* m_messageTypeId; // 0x10
		::System::Int32 subscriberCount; // 0x18
		MessageEvent* messageCallback; // 0x20

		::System::Guid* get_MessageTypeId()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGETYPESUBSCRIBERS_GET_MESSAGETYPEID_OFFSET))(nullptr);
		}

		::System::Void set_MessageTypeId(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + MESSAGETYPESUBSCRIBERS_SET_MESSAGETYPEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGETYPESUBSCRIBERS_.CTOR_OFFSET))(nullptr);
		}

	};

