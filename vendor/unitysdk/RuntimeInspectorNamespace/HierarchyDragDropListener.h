#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace RuntimeInspectorNamespace { class HierarchyData; }
namespace RuntimeInspectorNamespace { class HierarchyDataRoot; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER__UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_B__18_0_OFFSET UNITYSDK_OFFSET(0x9560830)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_OFFSET UNITYSDK_OFFSET(0x9560AE0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_COMPAREHIERARCHYSIBLINGINDICES_OFFSET UNITYSDK_OFFSET(0x9560840)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x9561AF0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_DROPTRANSFORMONTO_OFFSET UNITYSDK_OFFSET(0x9561400)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UNITYENGINE.EVENTSYSTEMS.IPOINTEREXITHANDLER.ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9561C20)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_START_OFFSET UNITYSDK_OFFSET(0x9561CC0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9561D90)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UNITYENGINE.EVENTSYSTEMS.IPOINTERENTERHANDLER.ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x9561DB0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9561FA0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyDragDropListener_TypeDefinitionIndex = 35626;

	class HierarchyDragDropListener : public Il2CppObject
	{
	public:
		::System::Single POINTER_VALIDATE_INTERVAL; // 0x0
		::System::Single siblingIndexModificationArea; // 0x18
		::System::Single scrollableArea; // 0x1C
		::System::Single _1OverScrollableArea; // 0x20
		::System::Single scrollSpeed; // 0x24
		::RuntimeInspectorNamespace::RuntimeHierarchy* hierarchy; // 0x28
		::UnityEngine::RectTransform* content; // 0x30
		::UnityEngine::UI::Image* dragDropTargetVisualization; // 0x38
		::UnityEngine::Canvas* canvas; // 0x40
		::UnityEngine::RectTransform* rectTransform; // 0x48
		::System::Single height; // 0x50
		::UnityEngine::EventSystems::PointerEventData* pointer; // 0x58
		::UnityEngine::Camera* worldCamera; // 0x60
		::System::Single pointerLastYPos; // 0x68
		::System::Single nextPointerValidation; // 0x6C

		::System::Int32 _UnityEngine.EventSystems.IDropHandler.OnDrop_b__18_0(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER__UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_B__18_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IDropHandler.OnDrop(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareHierarchySiblingIndices(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_COMPAREHIERARCHYSIBLINGINDICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Boolean DropTransformOnto(::UnityEngine::Transform* arg, ::RuntimeInspectorNamespace::HierarchyData* arg, ::RuntimeInspectorNamespace::HierarchyDataRoot* arg, ::UnityEngine::Transform* arg, ::System::Int32 arg, bool&* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::RuntimeInspectorNamespace::HierarchyData*, ::RuntimeInspectorNamespace::HierarchyDataRoot*, ::UnityEngine::Transform*, ::System::Int32, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_DROPTRANSFORMONTO_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UNITYENGINE.EVENTSYSTEMS.IPOINTEREXITHANDLER.ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UNITYENGINE.EVENTSYSTEMS.IPOINTERENTERHANDLER.ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDRAGDROPLISTENER_UPDATE_OFFSET))(nullptr);
		}

	};
}

