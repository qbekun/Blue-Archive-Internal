#pragma once
#include "unitysdk.h"

namespace UnityEngine { class CameraClearFlags; }

	inline static constexpr unsigned int CameraSettingsCache_TypeDefinitionIndex = 11014;

	class CameraSettingsCache : public Il2CppObject
	{
	public:
		::UnityEngine::CameraClearFlags* clearFlags; // 0x10
		::System::Single fieldOfView; // 0x14
		::System::Single nearClipPlane; // 0x18
		::System::Single farClipPlane; // 0x1C

	};

