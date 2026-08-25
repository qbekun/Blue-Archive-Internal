#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Object; }
namespace RuntimeInspectorNamespace { class DraggedReferenceItem; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_GETPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9580460)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9580480)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x9580F70)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9580FC0)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_ISPOINTERHELD_OFFSET UNITYSDK_OFFSET(0x9580F50)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_ISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9580F60)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int DraggedReferenceSourceCamera_TypeDefinitionIndex = 35688;

	class DraggedReferenceSourceCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::RuntimeInspectorNamespace::UISkin* draggedReferenceSkin; // 0x20
		::UnityEngine::Canvas* draggedReferenceCanvas; // 0x28
		::System::Single holdTime; // 0x30
		::UnityEngine::LayerMask* interactableObjectsMask; // 0x34
		::System::Single raycastRange; // 0x38
		::System::Boolean pointerDown; // 0x3C
		::System::Single pointerDownTime; // 0x40
		::UnityEngine::Vector2* pointerDownPos; // 0x44
		::UnityEngine::Object* hitObject; // 0x50
		::RuntimeInspectorNamespace::DraggedReferenceItem* draggedReference; // 0x58
		::UnityEngine::EventSystems::PointerEventData* draggingPointer; // 0x60
		Il2CppObject* hoveredUIElements; // 0x68
		RaycastHitProcesserDelegate* ProcessRaycastHit; // 0x70

		::UnityEngine::Vector2* GetPointerPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_GETPOINTERPOSITION_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerHeld()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_ISPOINTERHELD_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerDown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCECAMERA_ISPOINTERDOWN_OFFSET))(nullptr);
		}

	};
}

