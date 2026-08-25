#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINESTORYBOARD_CREATECANVAS_OFFSET UNITYSDK_OFFSET(0x2839030)
#define CINEMACHINE_CINEMACHINESTORYBOARD_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x28395C0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_CAMERAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x28399E0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_GET_CANVASNAME_OFFSET UNITYSDK_OFFSET(0x2839550)
#define CINEMACHINE_CINEMACHINESTORYBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x283A0E0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_DESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0x2839730)
#define CINEMACHINE_CINEMACHINESTORYBOARD_PLACEIMAGE_OFFSET UNITYSDK_OFFSET(0x283A210)
#define CINEMACHINE_CINEMACHINESTORYBOARD_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x283A9F0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_STATICBLENDINGHANDLER_OFFSET UNITYSDK_OFFSET(0x283ACA0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x283AF10)
#define CINEMACHINE_CINEMACHINESTORYBOARD_UPDATERENDERCANVAS_OFFSET UNITYSDK_OFFSET(0x283AAE0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_LOCATEMYCANVAS_OFFSET UNITYSDK_OFFSET(0x2839BA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_TypeDefinitionIndex = 34236;

	class CinemachineStoryboard : public Il2CppObject
	{
	public:
		::System::Boolean s_StoryboardGlobalMute; // 0x0
		::System::Boolean m_ShowImage; // 0x28
		::UnityEngine::Texture* m_Image; // 0x30
		FillStrategy* m_Aspect; // 0x38
		::System::Single m_Alpha; // 0x3C
		::UnityEngine::Vector2* m_Center; // 0x40
		::UnityEngine::Vector3* m_Rotation; // 0x48
		::UnityEngine::Vector2* m_Scale; // 0x54
		::System::Boolean m_SyncScale; // 0x5C
		::System::Boolean m_MuteCamera; // 0x5D
		::System::Single m_SplitView; // 0x60
		StoryboardRenderMode* m_RenderMode; // 0x64
		::System::Int32 m_SortingOrder; // 0x68
		::System::Single m_PlaneDistance; // 0x6C
		Il2CppObject* mCanvasInfo; // 0x70

		::System::Void CreateCanvas(CanvasInfo* arg)
		{
			((::System::Void(*)(CanvasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CREATECANVAS_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectToVcam(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CONNECTTOVCAM_OFFSET))(arg, nullptr);
		}

		::System::Void CameraUpdatedCallback(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CAMERAUPDATEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::String* get_CanvasName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_GET_CANVASNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DestroyCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_DESTROYCANVAS_OFFSET))(nullptr);
		}

		::System::Void PlaceImage(CanvasInfo* arg, ::System::Single arg)
		{
			((::System::Void(*)(CanvasInfo*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_PLACEIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StaticBlendingHandler(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_STATICBLENDINGHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_INITIALIZEMODULE_OFFSET))(nullptr);
		}

		::System::Void UpdateRenderCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_UPDATERENDERCANVAS_OFFSET))(nullptr);
		}

		CanvasInfo* LocateMyCanvas(::Cinemachine::CinemachineBrain* arg, ::System::Boolean arg)
		{
			return (return (CanvasInfo*(*)(::Cinemachine::CinemachineBrain*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_LOCATEMYCANVAS_OFFSET))(arg, arg, nullptr);
		}

	};
}

