#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::InputSystem::UI { class ExtendedPointerEventData; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_BLOCKINGMASK_OFFSET UNITYSDK_OFFSET(0x9F38450)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR2DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9F38460)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F38470)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x9F384F0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x9F38500)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_PERFORMRAYCAST_OFFSET UNITYSDK_OFFSET(0x9F30260)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR3DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9F38BB0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F38BC0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYINTERSECTSRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F38CA0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SORTEDRAYCASTGRAPHICS_OFFSET UNITYSDK_OFFSET(0x9F385A0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x9F390D0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x9F39150)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR2DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9F39160)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x9F39170)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F39200)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0x9F39290)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F392A0)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR3DOCCLUSION_OFFSET UNITYSDK_OFFSET(0x9F39330)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x9F38510)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_BLOCKINGMASK_OFFSET UNITYSDK_OFFSET(0x9F39340)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int TrackedDeviceRaycaster_TypeDefinitionIndex = 28635;

	class TrackedDeviceRaycaster : public ::TriInspector::TriMessageType
	{
	public:
		Il2CppObject* m_RaycastResultsCache; // 0x20
		Il2CppObject* s_Instances; // 0x0
		Il2CppObject* s_SortedGraphics; // 0x18
		::System::Boolean m_IgnoreReversedGraphics; // 0x28
		::System::Boolean m_CheckFor2DOcclusion; // 0x29
		::System::Boolean m_CheckFor3DOcclusion; // 0x2A
		::System::Single m_MaxDistance; // 0x2C
		::UnityEngine::LayerMask* m_BlockingMask; // 0x30
		::UnityEngine::Canvas* m_Canvas; // 0x38

		::System::Void set_blockingMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_BLOCKINGMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_checkFor2DOcclusion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR2DOCCLUSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Single get_maxDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_ignoreReversedGraphics(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET))(arg, nullptr);
		}

		::System::Void PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_PERFORMRAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_checkFor3DOcclusion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR3DOCCLUSION_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean RayIntersectsRectTransform(::UnityEngine::RectTransform* arg, ::UnityEngine::Ray* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYINTERSECTSRECTTRANSFORM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SortedRaycastGraphics(::UnityEngine::Canvas* arg, ::UnityEngine::Ray* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Ray*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SORTEDRAYCASTGRAPHICS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_EVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_maxDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_MAXDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_checkFor2DOcclusion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CHECKFOR2DOCCLUSION_OFFSET))(nullptr);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreReversedGraphics()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_checkFor3DOcclusion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_SET_CHECKFOR3DOCCLUSION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_CANVAS_OFFSET))(nullptr);
		}

		::UnityEngine::LayerMask* get_blockingMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER_GET_BLOCKINGMASK_OFFSET))(nullptr);
		}

	};
}

