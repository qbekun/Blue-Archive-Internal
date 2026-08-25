#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_ITIMELINEEVALUATECALLBACK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ITimelineEvaluateCallback_TypeDefinitionIndex = 36329;

	class ITimelineEvaluateCallback : public Il2CppObject
	{
	public:
		::System::Void Evaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ITIMELINEEVALUATECALLBACK_EVALUATE_OFFSET))(nullptr);
		}

	};
}

