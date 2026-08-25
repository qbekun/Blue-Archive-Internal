#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0xA2FC2F0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0xA2FC3D0)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0xA2FC430)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET UNITYSDK_OFFSET(0xA2FC440)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0xA2FC450)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0xA2FC460)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGMASK_OFFSET UNITYSDK_OFFSET(0xA2FC470)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGMASK_OFFSET UNITYSDK_OFFSET(0xA2FC480)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2FC490)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0xA2FC340)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA2FC520)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA2FDD00)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA2FD620)
#define UNITYENGINE_UI_GRAPHICRAYCASTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2FDDD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster_TypeDefinitionIndex = 34770;

	class GraphicRaycaster : public ::TriInspector::TriMessageType
	{
	public:
		::System::Int32 kNoEventMaskSet; // 0x0
		::System::Boolean m_IgnoreReversedGraphics; // 0x20
		BlockingObjects* m_BlockingObjects; // 0x24
		::UnityEngine::LayerMask* m_BlockingMask; // 0x28
		::UnityEngine::Canvas* m_Canvas; // 0x30
		Il2CppObject* m_RaycastResults; // 0x38
		Il2CppObject* s_SortedGraphics; // 0x0

		::System::Int32 get_sortOrderPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_SORTORDERPRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 get_renderOrderPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreReversedGraphics()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_IGNOREREVERSEDGRAPHICS_OFFSET))(nullptr);
		}

		::System::Void set_ignoreReversedGraphics(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_SET_IGNOREREVERSEDGRAPHICS_OFFSET))(arg, nullptr);
		}

		BlockingObjects* get_blockingObjects()
		{
			return (return (BlockingObjects*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGOBJECTS_OFFSET))(nullptr);
		}

		::System::Void set_blockingObjects(BlockingObjects* arg)
		{
			((::System::Void(*)(BlockingObjects*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGOBJECTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LayerMask* get_blockingMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_BLOCKINGMASK_OFFSET))(nullptr);
		}

		::System::Void set_blockingMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_SET_BLOCKINGMASK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_CANVAS_OFFSET))(nullptr);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void Raycast(::UnityEngine::Canvas* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector2* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera*, ::UnityEngine::Vector2*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICRAYCASTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

