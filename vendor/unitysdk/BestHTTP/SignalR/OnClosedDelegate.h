#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x655B10)
#define BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x655B20)
#define BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x655BF0)
#define BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x655C00)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int OnClosedDelegate_TypeDefinitionIndex = 21475;

	class OnClosedDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::SignalR::Connection* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::SignalR::Connection*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ONCLOSEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

