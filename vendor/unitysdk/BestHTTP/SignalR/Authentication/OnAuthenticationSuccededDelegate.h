#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Authentication { class IAuthenticationProvider; }

#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x756EA0)
#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x756EB0)
#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x756EC0)
#define BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x756EF0)

namespace BestHTTP::SignalR::Authentication
{
	inline static constexpr unsigned int OnAuthenticationSuccededDelegate_TypeDefinitionIndex = 21514;

	class OnAuthenticationSuccededDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_ONAUTHENTICATIONSUCCEDEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

