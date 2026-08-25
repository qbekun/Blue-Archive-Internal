#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Analytics { class AnalyticsSessionState; }

namespace UnityEngine::Analytics
{
	inline static constexpr unsigned int AnalyticsSessionState_TypeDefinitionIndex = 38016;

	class AnalyticsSessionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Analytics::AnalyticsSessionState* kSessionStopped; // 0x0
		::UnityEngine::Analytics::AnalyticsSessionState* kSessionStarted; // 0x0
		::UnityEngine::Analytics::AnalyticsSessionState* kSessionPaused; // 0x0
		::UnityEngine::Analytics::AnalyticsSessionState* kSessionResumed; // 0x0

	};
}

