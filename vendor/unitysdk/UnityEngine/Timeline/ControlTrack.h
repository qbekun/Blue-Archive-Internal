#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_CONTROLTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A4FD0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlTrack_TypeDefinitionIndex = 36279;

	class ControlTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLTRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

