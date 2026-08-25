#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Analytics { class AnalyticsSessionState; }

#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLSESSIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA49EEE0)
#define UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLIDENTITYTOKENCHANGED_OFFSET UNITYSDK_OFFSET(0xA49EF50)

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int AnalyticsSessionInfo_TypeDefinitionIndex = 38019;

	class AnalyticsSessionInfo : public Il2CppObject
	{
	public:
		SessionStateChanged* sessionStateChanged; // 0x0
		IdentityTokenChanged* identityTokenChanged; // 0x8

		::System::Void CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Analytics::AnalyticsSessionState*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLSESSIONSTATECHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CallIdentityTokenChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANALYTICS_ANALYTICSSESSIONINFO_CALLIDENTITYTOKENCHANGED_OFFSET))(str, nullptr);
		}

	};
}

