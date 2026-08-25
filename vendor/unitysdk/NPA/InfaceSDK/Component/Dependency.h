#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class IPlatformDevice; }

#define NPA_INFACESDK_COMPONENT_DEPENDENCY_SETPLATFORMDEVICE_OFFSET UNITYSDK_OFFSET(0x9D01660)
#define NPA_INFACESDK_COMPONENT_DEPENDENCY_RESETPLATFORMDEVICE_OFFSET UNITYSDK_OFFSET(0x9D018B0)
#define NPA_INFACESDK_COMPONENT_DEPENDENCY_WRITESTRINGTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9D01A20)
#define NPA_INFACESDK_COMPONENT_DEPENDENCY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D01B40)
#define NPA_INFACESDK_COMPONENT_DEPENDENCY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D01B50)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Dependency_TypeDefinitionIndex = 25848;

	class Dependency : public Il2CppObject
	{
	public:
		::System::Int32 _devicePtr; // 0x0

		::System::Void SetPlatformDevice(::NPA::InfaceSDK::Component::IPlatformDevice* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::IPlatformDevice*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DEPENDENCY_SETPLATFORMDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPlatformDevice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DEPENDENCY_RESETPLATFORMDEVICE_OFFSET))(nullptr);
		}

		::System::Void WriteStringToBuffer(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DEPENDENCY_WRITESTRINGTOBUFFER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DEPENDENCY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DEPENDENCY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

