#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace UnityEngine { class Canvas; }

#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9585F50)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x9585F60)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x9585F70)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9586330)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9586580)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_REPOSITIONSELF_OFFSET UNITYSDK_OFFSET(0x9586760)
#define RUNTIMEINSPECTORNAMESPACE_POPUPBASE_SETPOINTER_OFFSET UNITYSDK_OFFSET(0x9586810)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int PopupBase_TypeDefinitionIndex = 35717;

	class PopupBase : public Il2CppObject
	{
	public:
		::System::Single POINTER_VALIDATE_INTERVAL; // 0x0
		::UnityEngine::UI::LayoutElement* borderLayoutElement; // 0x18
		::UnityEngine::UI::Image* background; // 0x20
		::UnityEngine::UI::Text* label; // 0x28
		::UnityEngine::RectTransform* rectTransform; // 0x30
		::UnityEngine::RectTransform* canvasTransform; // 0x38
		::UnityEngine::Camera* worldCamera; // 0x40
		::UnityEngine::EventSystems::PointerEventData* pointer; // 0x48
		::System::Single nextPointerValidation; // 0x50
		::System::Int32 m_skinVersion; // 0x54
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_.CTOR_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Void DestroySelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_DESTROYSELF_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void RepositionSelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_REPOSITIONSELF_OFFSET))(nullptr);
		}

		::System::Void SetPointer(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_POPUPBASE_SETPOINTER_OFFSET))(arg, nullptr);
		}

	};
}

