#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_SIGNALTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A8140)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalTrack_TypeDefinitionIndex = 36300;

	class SignalTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALTRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

