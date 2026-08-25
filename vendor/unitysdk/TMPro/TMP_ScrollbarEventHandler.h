#pragma once
#include "../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define TMPRO_TMP_SCROLLBAREVENTHANDLER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA174DB0)
#define TMPRO_TMP_SCROLLBAREVENTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA174E10)
#define TMPRO_TMP_SCROLLBAREVENTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA174E70)
#define TMPRO_TMP_SCROLLBAREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA174ED0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ScrollbarEventHandler_TypeDefinitionIndex = 33714;

	class TMP_ScrollbarEventHandler : public Il2CppObject
	{
	public:
		::System::Boolean isSelected; // 0x18

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_ONDESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SCROLLBAREVENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

