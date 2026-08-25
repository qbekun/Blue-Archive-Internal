#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class InputDevice; }

#define UNITYENGINE_XR_INPUTDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AB7F0)
#define UNITYENGINE_XR_INPUTDEVICE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xA4AB800)
#define UNITYENGINE_XR_INPUTDEVICE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AB820)
#define UNITYENGINE_XR_INPUTDEVICE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AB8B0)
#define UNITYENGINE_XR_INPUTDEVICE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4AB8F0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 37595;

	class InputDevice : public Il2CppObject
	{
	public:
		::System::UInt64 m_DeviceId; // 0x10
		::System::Boolean m_Initialized; // 0x18

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_deviceId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_GET_DEVICEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

