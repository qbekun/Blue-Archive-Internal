#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class IAuthenticationProvider; }

#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x64F160)
#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x64F170)
#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x647360)
#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x64F1A0)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int OnAuthenticationSuccededDelegate_TypeDefinitionIndex = 21446;

	class OnAuthenticationSuccededDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalRCore::IAuthenticationProvider* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalRCore::IAuthenticationProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONSUCCEDEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

