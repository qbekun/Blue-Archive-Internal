#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class XRPass; }
namespace UnityEngine::XR { class XRDisplaySubsystem; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering::Universal { class XRPass&; }
namespace UnityEngine::Rendering::Universal { class XRSystemData; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class CameraData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_CREATELAYOUTFROMXRSDK_OFFSET UNITYSDK_OFFSET(0xA093DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATECAMERADATA_OFFSET UNITYSDK_OFFSET(0xA087050)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_REFRESHXRSDK_OFFSET UNITYSDK_OFFSET(0xA089FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA094A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_RELEASEFRAME_OFFSET UNITYSDK_OFFSET(0xA0890D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_GETMSAALEVEL_OFFSET UNITYSDK_OFFSET(0xA094B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_GETMAXVIEWS_OFFSET UNITYSDK_OFFSET(0xA094A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_BEGINLATELATCHING_OFFSET UNITYSDK_OFFSET(0xA087C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATERENDERSCALE_OFFSET UNITYSDK_OFFSET(0xA0810B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_XRSYSTEMINIT_OFFSET UNITYSDK_OFFSET(0xA094B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_GETDISPLAYSUBSYSTEM_OFFSET UNITYSDK_OFFSET(0xA094990)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_INITIALIZEXRSYSTEMDATA_OFFSET UNITYSDK_OFFSET(0xA07A160)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_RENDERMIRRORVIEW_OFFSET UNITYSDK_OFFSET(0xA088500)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_ENDLATELATCHING_OFFSET UNITYSDK_OFFSET(0xA087CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_SETUPFRAME_OFFSET UNITYSDK_OFFSET(0xA086A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0813C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_OVERRIDEFORAUTOMATEDTESTS_OFFSET UNITYSDK_OFFSET(0xA094D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA08CA50)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xA087800)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATEMSAALEVEL_OFFSET UNITYSDK_OFFSET(0xA080F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_ADDPASSTOFRAME_OFFSET UNITYSDK_OFFSET(0xA090F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM__CREATELAYOUTFROMXRSDK_G__CANUSESINGLEPASS|26_0_OFFSET UNITYSDK_OFFSET(0xA0947D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRSystem_TypeDefinitionIndex = 32818;

	class XRSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::XRPass* emptyPass; // 0x10
		Il2CppObject* framePasses; // 0x18
		Il2CppObject* displayList; // 0x0
		::UnityEngine::XR::XRDisplaySubsystem* display; // 0x20
		::System::Int32 msaaLevel; // 0x8
		::UnityEngine::Material* occlusionMeshMaterial; // 0x28
		::UnityEngine::Material* mirrorViewMaterial; // 0x30
		::UnityEngine::MaterialPropertyBlock* mirrorViewMaterialProperty; // 0x38
		::UnityEngine::RenderTexture* testRenderTexture; // 0x40
		::System::String* k_XRMirrorTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* _XRMirrorProfilingSampler; // 0x10

		::System::Void CreateLayoutFromXrSdk(::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_CREATELAYOUTFROMXRSDK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateCameraData(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::Universal::XRPass&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::Universal::XRPass&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATECAMERADATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RefreshXrSdk()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_REFRESHXRSDK_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_RELEASEFRAME_OFFSET))(nullptr);
		}

		::System::Int32 GetMSAALevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_GETMSAALEVEL_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxViews()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_GETMAXVIEWS_OFFSET))(nullptr);
		}

		::System::Void BeginLateLatching(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_BEGINLATELATCHING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateRenderScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATERENDERSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void XRSystemInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_XRSYSTEMINIT_OFFSET))(nullptr);
		}

		::System::Void GetDisplaySubsystem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_GETDISPLAYSUBSYSTEM_OFFSET))(nullptr);
		}

		::System::Void InitializeXRSystemData(::UnityEngine::Rendering::Universal::XRSystemData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRSystemData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_INITIALIZEXRSYSTEMDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_RENDERMIRRORVIEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndLateLatching(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_ENDLATELATCHING_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SetupFrame(::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_SETUPFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void OverrideForAutomatedTests(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_OVERRIDEFORAUTOMATEDTESTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateFromCamera(::UnityEngine::Rendering::Universal::XRPass&* arg, ::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRPass&*, ::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATEFROMCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateMSAALevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_UPDATEMSAALEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddPassToFrame(::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM_ADDPASSTOFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CreateLayoutFromXrSdk_g__CanUseSinglePass|26_0(XRRenderPass* arg, <>c__DisplayClass26_0&* arg)
		{
			return (return (::System::Boolean(*)(XRRenderPass*, <>c__DisplayClass26_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEM__CREATELAYOUTFROMXRSDK_G__CANUSESINGLEPASS|26_0_OFFSET))(arg, arg, nullptr);
		}

	};
}

