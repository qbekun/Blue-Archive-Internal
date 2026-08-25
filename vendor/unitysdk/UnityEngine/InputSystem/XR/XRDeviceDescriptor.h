#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::XR { class InputDeviceCharacteristics; }
namespace UnityEngine::InputSystem::XR { class XRDeviceDescriptor; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9F233B0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_TOJSON_OFFSET UNITYSDK_OFFSET(0x9F26C10)
#define UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F26C20)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRDeviceDescriptor_TypeDefinitionIndex = 28585;

	class XRDeviceDescriptor : public Il2CppObject
	{
	public:
		::System::String* deviceName; // 0x10
		::System::String* manufacturer; // 0x18
		::System::String* serialNumber; // 0x20
		::UnityEngine::XR::InputDeviceCharacteristics* characteristics; // 0x28
		::System::Int32 deviceId; // 0x2C
		Il2CppObject* inputFeatures; // 0x30

		::UnityEngine::InputSystem::XR::XRDeviceDescriptor* FromJson(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::XR::XRDeviceDescriptor*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_FROMJSON_OFFSET))(str, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_TOJSON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

