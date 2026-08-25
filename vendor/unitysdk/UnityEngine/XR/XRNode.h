#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class XRNode; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRNode_TypeDefinitionIndex = 37587;

	class XRNode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::XR::XRNode* LeftEye; // 0x0
		::UnityEngine::XR::XRNode* RightEye; // 0x0
		::UnityEngine::XR::XRNode* CenterEye; // 0x0
		::UnityEngine::XR::XRNode* Head; // 0x0
		::UnityEngine::XR::XRNode* LeftHand; // 0x0
		::UnityEngine::XR::XRNode* RightHand; // 0x0
		::UnityEngine::XR::XRNode* GameController; // 0x0
		::UnityEngine::XR::XRNode* TrackingReference; // 0x0
		::UnityEngine::XR::XRNode* HardwareTracker; // 0x0

	};
}

