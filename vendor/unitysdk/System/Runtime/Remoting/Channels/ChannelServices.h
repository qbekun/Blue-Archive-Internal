#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GET_CROSSCONTEXTCHANNEL_OFFSET UNITYSDK_OFFSET(0x91E0A20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x91E0A70)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x91E1420)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET UNITYSDK_OFFSET(0x91E1650)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET UNITYSDK_OFFSET(0x91E16A0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x91E1F20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x91E2E10)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_SYNCDISPATCHMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E3180)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKINCOMINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E3230)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKRETURNMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E34A0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_ISLOCALCALL_OFFSET UNITYSDK_OFFSET(0x91E3680)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GETCURRENTCHANNELINFO_OFFSET UNITYSDK_OFFSET(0x91E37D0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91E3D30)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int ChannelServices_TypeDefinitionIndex = 24489;

	class ChannelServices : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* registeredChannels; // 0x0
		::System::Collections::ArrayList* delayedClientChannels; // 0x8
		::System::Runtime::Remoting::Contexts::CrossContextChannel* _crossContextSink; // 0x10
		::System::String* CrossContextUrl; // 0x18
		::System::Collections::IList* oldStartModeTypes; // 0x20

		::System::Runtime::Remoting::Contexts::CrossContextChannel* get_CrossContextChannel()
		{
			return (return (::System::Runtime::Remoting::Contexts::CrossContextChannel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GET_CROSSCONTEXTCHANNEL_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::String* str, ::System::Object* arg, ::System::String&* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String&* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::Runtime::Remoting::Channels::IChannelSender*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Channels::IChannel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Channels::IChannel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ChannelData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNELCONFIG_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateProvider(::System::Runtime::Remoting::ProviderData* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::ProviderData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATEPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_SYNCDISPATCHMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::ReturnMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKINCOMINGMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKRETURNMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_ISLOCALCALL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCurrentChannelInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GETCURRENTCHANNELINFO_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

