#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class XRNode; }

#define UNITYENGINE_XR_INPUTTRACKING_INVOKETRACKINGEVENT_OFFSET UNITYSDK_OFFSET(0xA4AB4B0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputTracking_TypeDefinitionIndex = 37586;

	class InputTracking : public Il2CppObject
	{
	public:
		Il2CppObject* trackingAcquired; // 0x0
		Il2CppObject* trackingLost; // 0x8
		Il2CppObject* nodeAdded; // 0x10
		Il2CppObject* nodeRemoved; // 0x18

		::System::Void InvokeTrackingEvent(TrackingStateEventType* arg, ::UnityEngine::XR::XRNode* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(TrackingStateEventType*, ::UnityEngine::XR::XRNode*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTTRACKING_INVOKETRACKINGEVENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

