#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_IDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2ED0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CHANNELSINK_OFFSET UNITYSDK_OFFSET(0x91C2F00)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_CHANNELSINK_OFFSET UNITYSDK_OFFSET(0x91C2F10)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ENVOYSINK_OFFSET UNITYSDK_OFFSET(0x91C2F20)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x91C2F30)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x91C2F40)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x91C2F50)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x91C2F60)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x91C2F70)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CLIENTDYNAMICPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91C2F80)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_HASSERVERDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91C2FF0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYCLIENTDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91C3010)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYSERVERDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91C3080)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int Identity_TypeDefinitionIndex = 24435;

	class Identity : public Il2CppObject
	{
	public:
		::System::String* _objectUri; // 0x10
		::System::Runtime::Remoting::Messaging::IMessageSink* _channelSink; // 0x18
		::System::Runtime::Remoting::Messaging::IMessageSink* _envoySink; // 0x20
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _clientDynamicProperties; // 0x28
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _serverDynamicProperties; // 0x30
		::System::Runtime::Remoting::ObjRef* _objRef; // 0x38
		::System::Boolean _disposed; // 0x40

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_CREATEOBJREF_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_ChannelSink()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CHANNELSINK_OFFSET))(nullptr);
		}

		::System::Void set_ChannelSink(::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_CHANNELSINK_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySink()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ENVOYSINK_OFFSET))(nullptr);
		}

		::System::String* get_ObjectUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_OBJECTURI_OFFSET))(nullptr);
		}

		::System::Void set_ObjectUri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_OBJECTURI_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		::System::Boolean get_Disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_Disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* get_ClientDynamicProperties()
		{
			return (return (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CLIENTDYNAMICPROPERTIES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasServerDynamicSinks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_HASSERVERDYNAMICSINKS_OFFSET))(nullptr);
		}

		::System::Void NotifyClientDynamicSinks(::System::Boolean arg, ::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYCLIENTDYNAMICSINKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void NotifyServerDynamicSinks(::System::Boolean arg, ::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYSERVERDYNAMICSINKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

