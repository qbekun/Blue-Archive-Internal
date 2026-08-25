#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class IAuthenticationProvider; }

#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x64F1B0)
#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x64F1C0)
#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x647470)
#define BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x64F200)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int OnAuthenticationFailedDelegate_TypeDefinitionIndex = 21447;

	class OnAuthenticationFailedDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalRCore::IAuthenticationProvider* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::SignalRCore::IAuthenticationProvider* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ONAUTHENTICATIONFAILEDDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

	};
}

