#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class AntialiasingMode; }

#define CAMERAOVERRIDESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D0D60)
#define CAMERAOVERRIDESETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D0D70)

	inline static constexpr unsigned int CameraOverrideSettings_TypeDefinitionIndex = 3704;

	class CameraOverrideSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* uacData; // 0x18
		::System::Boolean overrideRenderPostProcessing; // 0x20
		::System::Boolean renderPostProcessing; // 0x21
		::System::Boolean overrideAntialiasingMode; // 0x22
		::UnityEngine::Rendering::Universal::AntialiasingMode* antialiasingMode; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOVERRIDESETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOVERRIDESETTINGS_ONENABLE_OFFSET))(nullptr);
		}

	};

