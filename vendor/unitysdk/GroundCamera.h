#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Logic::Battles { class GroupTag; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
class RenderingAreaController;

#define GROUNDCAMERA_SET_DEFAULTCLIPPLANENEAR_OFFSET UNITYSDK_OFFSET(0xE4CAC0)
#define GROUNDCAMERA_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0xE4CAD0)
#define GROUNDCAMERA_GET_SMOOTHMOVEMENTFACTOR_OFFSET UNITYSDK_OFFSET(0xE4CAE0)
#define GROUNDCAMERA_GET_DEFAULTCLIPPLANENEAR_OFFSET UNITYSDK_OFFSET(0xE4CAF0)
#define GROUNDCAMERA_GET_RENDERINGAREACONTROLLER_OFFSET UNITYSDK_OFFSET(0xE4CB00)
#define GROUNDCAMERA_REFRESHFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xE4CB10)
#define GROUNDCAMERA_START_OFFSET UNITYSDK_OFFSET(0xE4CCC0)
#define GROUNDCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE4CD80)
#define GROUNDCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4CEB0)
#define GROUNDCAMERA_GET_FORCEFOVTOSTANDARD_OFFSET UNITYSDK_OFFSET(0xE4CEF0)
#define GROUNDCAMERA_GET_ISLETTERBOXINBATTLE_OFFSET UNITYSDK_OFFSET(0xE48D00)
#define GROUNDCAMERA_SET_DEFAULTCLIPPLANEFAR_OFFSET UNITYSDK_OFFSET(0xE4CF00)
#define GROUNDCAMERA_GET_CALCCAMERA_OFFSET UNITYSDK_OFFSET(0xE4CF10)
#define GROUNDCAMERA_GET_FOVCACHE_OFFSET UNITYSDK_OFFSET(0xE4CF20)
#define GROUNDCAMERA_SET_FORCEFOVTOSTANDARD_OFFSET UNITYSDK_OFFSET(0xE4CF30)
#define GROUNDCAMERA_GET_CURRENTCLIPPLANEFAR_OFFSET UNITYSDK_OFFSET(0xE43D20)
#define GROUNDCAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0xE4CF40)
#define GROUNDCAMERA_RESETCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xE4D040)
#define GROUNDCAMERA_GET_LEFTMARGIN_OFFSET UNITYSDK_OFFSET(0xE4D0D0)
#define GROUNDCAMERA_GET_BOTTOMMARGIN_OFFSET UNITYSDK_OFFSET(0xE4D0E0)
#define GROUNDCAMERA_GET_ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xE4D0F0)
#define GROUNDCAMERA_GET_CENTERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xE4D100)
#define GROUNDCAMERA_GET_VIEWPORTCENTER_OFFSET UNITYSDK_OFFSET(0xE4D110)
#define GROUNDCAMERA_APPLYFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xE4D120)
#define GROUNDCAMERA_GET_DEFAULTCLIPPLANEFAR_OFFSET UNITYSDK_OFFSET(0xE4D130)
#define GROUNDCAMERA_GET_CURRENTCLIPPLANENEAR_OFFSET UNITYSDK_OFFSET(0xE43D00)

	inline static constexpr unsigned int GroundCamera_TypeDefinitionIndex = 751;

	class GroundCamera : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Target; // 0x18
		::MX::Logic::Battles::GroupTag* GroupTag; // 0x20
		::UnityEngine::Vector2* viewportCenter; // 0x24
		::System::Single centerThreshold; // 0x2C
		::System::Single leftMargin; // 0x30
		::System::Single bottomMargin; // 0x34
		::System::Single smoothMovementFactor; // 0x38
		::System::Single zoomSpeed; // 0x3C
		::System::Single _DefaultClipPlaneFar_k__BackingField; // 0x40
		::System::Single _DefaultClipPlaneNear_k__BackingField; // 0x44
		::UnityEngine::Camera* mainCamera; // 0x48
		::UnityEngine::Vector3* entityWorldCenter; // 0x50
		::System::Single fovCache; // 0x5C
		::System::Single fovCacheTangent; // 0x60
		RenderingAreaController* renderingAreaController; // 0x68
		::System::Boolean _ForceFoVToStandard_k__BackingField; // 0x70

		::System::Void set_DefaultClipPlaneNear(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_SET_DEFAULTCLIPPLANENEAR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_MainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_MAINCAMERA_OFFSET))(nullptr);
		}

		::System::Single get_SmoothMovementFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_SMOOTHMOVEMENTFACTOR_OFFSET))(nullptr);
		}

		::System::Single get_DefaultClipPlaneNear()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_DEFAULTCLIPPLANENEAR_OFFSET))(nullptr);
		}

		RenderingAreaController* get_RenderingAreaController()
		{
			return ((RenderingAreaController*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_RENDERINGAREACONTROLLER_OFFSET))(nullptr);
		}

		::System::Void RefreshFieldOfView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_REFRESHFIELDOFVIEW_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ForceFoVToStandard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_FORCEFOVTOSTANDARD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLetterBoxInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_ISLETTERBOXINBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultClipPlaneFar(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_SET_DEFAULTCLIPPLANEFAR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_CalcCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_CALCCAMERA_OFFSET))(nullptr);
		}

		::System::Single get_FovCache()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_FOVCACHE_OFFSET))(nullptr);
		}

		::System::Void set_ForceFoVToStandard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_SET_FORCEFOVTOSTANDARD_OFFSET))(arg, nullptr);
		}

		::System::Single get_CurrentClipPlaneFar()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_CURRENTCLIPPLANEFAR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ResetClipPlane()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_RESETCLIPPLANE_OFFSET))(nullptr);
		}

		::System::Single get_LeftMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_LEFTMARGIN_OFFSET))(nullptr);
		}

		::System::Single get_BottomMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_BOTTOMMARGIN_OFFSET))(nullptr);
		}

		::System::Single get_ZoomSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_ZOOMSPEED_OFFSET))(nullptr);
		}

		::System::Single get_CenterThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_CENTERTHRESHOLD_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_ViewportCenter()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_VIEWPORTCENTER_OFFSET))(nullptr);
		}

		::System::Void ApplyFieldOfView(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_APPLYFIELDOFVIEW_OFFSET))(arg, nullptr);
		}

		::System::Single get_DefaultClipPlaneFar()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_DEFAULTCLIPPLANEFAR_OFFSET))(nullptr);
		}

		::System::Single get_CurrentClipPlaneNear()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCAMERA_GET_CURRENTCLIPPLANENEAR_OFFSET))(nullptr);
		}

	};

