#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Authentication { class IAuthenticationProvider; }

#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x757000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x757040)
#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x757050)
#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x757060)

namespace BestHTTP::SignalR::Authentication
{
	inline static constexpr unsigned int OnAuthenticationFailedDelegate_TypeDefinitionIndex = 21515;

	class OnAuthenticationFailedDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONFAILEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

