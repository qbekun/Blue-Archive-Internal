#pragma once
#include "../../unitysdk.h"

namespace ToyWebViewShared::SharedMemory { class NXPSharedMemoryStream; }
namespace ToyWebViewShared::Messages { class Message; }

#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x9BB59D0)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x9BB59E0)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB5450)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_SENDTOSHAREDMEMORY_OFFSET UNITYSDK_OFFSET(0x9BB59F0)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_RECEIVEFROMSHAREDMEMORY_OFFSET UNITYSDK_OFFSET(0x9BB5C80)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB6A90)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB6AC0)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_MAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BB61C0)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_CONVERTTOBASE64STRING_OFFSET UNITYSDK_OFFSET(0x9BB56E0)
#define TOYWEBVIEWSHARED_MESSAGES_MESSAGE_CONVERTFROMBASE64STRING_OFFSET UNITYSDK_OFFSET(0x9BB5930)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int Message_TypeDefinitionIndex = 25439;

	class Message : public Il2CppObject
	{
	public:
		Id* _MessageId_k__BackingField; // 0x10
		::System::Int32 HeaderSize; // 0x0

		Id* get_MessageId()
		{
			return (return (Id*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_GET_MESSAGEID_OFFSET))(nullptr);
		}

		::System::Void set_MessageId(Id* arg)
		{
			((::System::Void(*)(Id*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_SET_MESSAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Id* arg)
		{
			((::System::Void(*)(Id*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SendToSharedMemory(::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_SENDTOSHAREDMEMORY_OFFSET))(arg, nullptr);
		}

		::ToyWebViewShared::Messages::Message* ReceiveFromSharedMemory(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::ToyWebViewShared::Messages::Message*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_RECEIVEFROMSHAREDMEMORY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_SETDATA_OFFSET))(str, nullptr);
		}

		::ToyWebViewShared::Messages::Message* MakeMessage(Id* arg, ::System::String* str)
		{
			return (return (::ToyWebViewShared::Messages::Message*(*)(Id*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_MAKEMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::String* ConvertToBase64String(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_CONVERTTOBASE64STRING_OFFSET))(str, nullptr);
		}

		::System::String* ConvertFromBase64String(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_MESSAGE_CONVERTFROMBASE64STRING_OFFSET))(str, nullptr);
		}

	};
}

