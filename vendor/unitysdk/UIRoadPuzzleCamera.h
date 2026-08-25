#pragma once
#include "unitysdk.h"

class CameraResolution;
namespace Lean::Touch { class LeanCameraZoom; }
class HexaCameraTranslate;
namespace UnityEngine { class Camera; }
class RoadPuzzleTileMap;

#define UIROADPUZZLECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27C92E0)
#define UIROADPUZZLECAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27C93F0)
#define UIROADPUZZLECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C9500)
#define UIROADPUZZLECAMERA_RESETCAMERATOSETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x27C9510)
#define UIROADPUZZLECAMERA_RESETCAMERAWITHMINZOOM_OFFSET UNITYSDK_OFFSET(0x27C91F0)
#define UIROADPUZZLECAMERA_ENABLECAMERAINPUT_OFFSET UNITYSDK_OFFSET(0x27C83E0)
#define UIROADPUZZLECAMERA_RESETMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x27C9560)
#define UIROADPUZZLECAMERA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27C9590)
#define UIROADPUZZLECAMERA_SETUP_OFFSET UNITYSDK_OFFSET(0x27C75E0)

	inline static constexpr unsigned int UIRoadPuzzleCamera_TypeDefinitionIndex = 7584;

	class UIRoadPuzzleCamera : public Il2CppObject
	{
	public:
		CameraResolution* CameraResolution; // 0x18
		::Lean::Touch::LeanCameraZoom* LeanCameraZoom; // 0x20
		HexaCameraTranslate* HexaCameraTranslate; // 0x28
		::UnityEngine::Camera* mainCamera; // 0x30
		::UnityEngine::Camera* camera3D; // 0x38
		RoadPuzzleTileMap* tileMap; // 0x40

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetCameraToSetupSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_RESETCAMERATOSETUPSETTINGS_OFFSET))(nullptr);
		}

		::System::Void ResetCameraWithMinZoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_RESETCAMERAWITHMINZOOM_OFFSET))(nullptr);
		}

		::System::Void EnableCameraInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_ENABLECAMERAINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void ResetMainCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_RESETMAINCAMERA_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(RoadPuzzleTileMap* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(RoadPuzzleTileMap*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLECAMERA_SETUP_OFFSET))(arg, arg2, nullptr);
		}

	};

