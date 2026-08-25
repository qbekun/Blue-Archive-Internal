#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }

#define CUSTOMCAMERASETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8DC0)

	inline static constexpr unsigned int CustomCameraSettings_TypeDefinitionIndex = 32427;

	class CustomCameraSettings : public Il2CppObject
	{
	public:
		::System::Boolean overrideCamera; // 0x10
		::System::Boolean restoreCamera; // 0x11
		::UnityEngine::Vector4* offset; // 0x14
		::System::Single cameraFieldOfView; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMCAMERASETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};

