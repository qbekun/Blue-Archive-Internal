#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_XR_XRDEVICE_DISABLEAUTOXRCAMERATRACKING_OFFSET UNITYSDK_OFFSET(0xA4AB3F0)
#define UNITYENGINE_XR_XRDEVICE_INVOKEDEVICELOADED_OFFSET UNITYSDK_OFFSET(0xA4AB430)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDevice_TypeDefinitionIndex = 38026;

	class XRDevice : public Il2CppObject
	{
	public:
		Il2CppObject* deviceLoaded; // 0x0

		::System::Void DisableAutoXRCameraTracking(::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDEVICE_DISABLEAUTOXRCAMERATRACKING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeDeviceLoaded(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDEVICE_INVOKEDEVICELOADED_OFFSET))(str, nullptr);
		}

	};
}

