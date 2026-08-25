#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class RetryContext; }

#define BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x644990)
#define BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x644A00)
#define BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_GETNEXTRETRYDELAY_OFFSET UNITYSDK_OFFSET(0x644A30)
#define BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x644A80)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int DefaultRetryPolicy_TypeDefinitionIndex = 21433;

	class DefaultRetryPolicy : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* DefaultBackoffTimes; // 0x0
		::Il2CppArray<::System::Object*>* backoffTimes; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNextRetryDelay(::BestHTTP::SignalRCore::RetryContext* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::SignalRCore::RetryContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_GETNEXTRETRYDELAY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DEFAULTRETRYPOLICY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

