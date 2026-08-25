#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_MARKERTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A6D60)
#define UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA1A6DB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerTrack_TypeDefinitionIndex = 36294;

	class MarkerTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERTRACK_GET_OUTPUTS_OFFSET))(nullptr);
		}

	};
}

