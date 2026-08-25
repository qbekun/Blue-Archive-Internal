#pragma once
#include "unitysdk.h"

namespace UnityEngine { class CameraClearFlags; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

	inline static constexpr unsigned int CameraBackup_TypeDefinitionIndex = 9927;

	class CameraBackup : public Il2CppObject
	{
	public:
		::System::Int32 cullingMask; // 0x10
		::UnityEngine::CameraClearFlags* clearFlags; // 0x14
		::System::Single fieldOfView; // 0x18
		::System::Single nearClipPlane; // 0x1C
		::System::Single farClipPlane; // 0x20
		::UnityEngine::Vector3* worldPosition; // 0x24
		::UnityEngine::Quaternion* worldRotation; // 0x30

	};

