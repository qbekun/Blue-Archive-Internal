#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x958EAF0)
#define RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x958EB80)
#define RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x958EBB0)
#define RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x958ECB0)
#define RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x958ECC0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int WindowDragHandler_TypeDefinitionIndex = 35729;

	class WindowDragHandler : public Il2CppObject
	{
	public:
		::System::Int32 NON_EXISTING_TOUCH; // 0x0
		::UnityEngine::RectTransform* rectTransform; // 0x18
		::System::Int32 pointerId; // 0x20
		::UnityEngine::Vector2* initialTouchPos; // 0x24

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_ONENDDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_WINDOWDRAGHANDLER_ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

	};
}

