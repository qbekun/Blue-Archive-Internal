#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class GroundCommandLocateCameraVisual;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Vector3; }
class RailPointInfo;

#define RAILTESTCAMERA_COPLAY_OFFSET UNITYSDK_OFFSET(0xE4D150)
#define RAILTESTCAMERA_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE4D1E0)
#define RAILTESTCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4D560)
#define RAILTESTCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0xE4D5C0)
#define RAILTESTCAMERA_PLAY_OFFSET UNITYSDK_OFFSET(0xE4DE80)
#define RAILTESTCAMERA_STOP_OFFSET UNITYSDK_OFFSET(0xE4DF40)
#define RAILTESTCAMERA_SETCAMERALOCATION_OFFSET UNITYSDK_OFFSET(0xE4DF80)
#define RAILTESTCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE4E480)

	inline static constexpr unsigned int RailTestCamera_TypeDefinitionIndex = 755;

	class RailTestCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* testCamera; // 0x18
		GroundCommandLocateCameraVisual* parent; // 0x20
		::System::Single positionController; // 0x28
		::System::Single zoomRatioController; // 0x2C
		::System::Single playSpeed; // 0x30
		::System::Boolean play; // 0x34
		::System::Boolean isPlaying; // 0x35
		::UnityEngine::Coroutine* playCoroutine; // 0x38
		::System::Single totalDist; // 0x40
		::UnityEngine::Vector3* targetPosition; // 0x44

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_COPLAY_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_PLAY_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_STOP_OFFSET))(nullptr);
		}

		::System::Void SetCameraLocation(RailPointInfo* arg)
		{
			((::System::Void(*)(RailPointInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_SETCAMERALOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILTESTCAMERA_ONENABLE_OFFSET))(nullptr);
		}

	};

