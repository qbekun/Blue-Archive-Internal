#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_LIVESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D11B30)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D11C30)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x9D122E0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_HASVALIDSESSION_OFFSET UNITYSDK_OFFSET(0x9D123E0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_NOTIFYGAMECONNECTION_OFFSET UNITYSDK_OFFSET(0x9D124E0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_NOTIFYGAMETOKENCHANGED_OFFSET UNITYSDK_OFFSET(0x9D126A0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_UPDATEUSERCONNECTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x9D127E0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_CLEARUSERCONNECTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x9D129A0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9D12AA0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9D12C50)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_SUBSCRIBEINSTANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9D12E00)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_UNSUBSCRIBEINSTANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9D12F60)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_SUBSCRIBESDKTARGETEVENT_OFFSET UNITYSDK_OFFSET(0x9D130C0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9D11BB0)
#define NPA_INFACESDK_COMPONENT_LIVESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D132A0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Livestream_TypeDefinitionIndex = 25892;

	class Livestream : public Il2CppObject
	{
	public:
		::System::Boolean _isLivestreamInitialized; // 0x18
		::System::Boolean _isDisposed; // 0x19

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsActivated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_ISACTIVATED_OFFSET))(nullptr);
		}

		::System::Boolean HasValidSession()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_HASVALIDSESSION_OFFSET))(nullptr);
		}

		::System::Boolean NotifyGameConnection(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_NOTIFYGAMECONNECTION_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean NotifyGameTokenChanged(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_NOTIFYGAMETOKENCHANGED_OFFSET))(str, nullptr);
		}

		::System::Boolean UpdateUserConnectionStatus(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_UPDATEUSERCONNECTIONSTATUS_OFFSET))(arg, str, str, str, str, str, nullptr);
		}

		::System::Void ClearUserConnectionStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_CLEARUSERCONNECTIONSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean Subscribe(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_SUBSCRIBE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Unsubscribe(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_UNSUBSCRIBE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SubscribeInstantMessage(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_SUBSCRIBEINSTANTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean UnsubscribeInstantMessage(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_UNSUBSCRIBEINSTANTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean SubscribeSdkTargetEvent(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_SUBSCRIBESDKTARGETEVENT_OFFSET))(str, nullptr);
		}

		::System::Void TearDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_TEARDOWN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LIVESTREAM_.CTOR_OFFSET))(nullptr);
		}

	};
}

