#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPSelectionScrollView; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x9DA2650)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET UNITYSDK_OFFSET(0x9DA2710)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.IMOVEHANDLER.ONMOVE_OFFSET UNITYSDK_OFFSET(0x9DA2750)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x9DA28C0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.ICANCELHANDLER.ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9DA2900)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9DA2920)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA2970)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPSelectionScrollViewElement_TypeDefinitionIndex = 26354;

	class NXPSelectionScrollViewElement : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPSelectionScrollView* _ssview; // 0x18
		::UnityEngine::UI::Selectable* _selectable; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.EventSystems.ISelectHandler.OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IMoveHandler.OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.IMOVEHANDLER.ONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.ISubmitHandler.OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.ICancelHandler.OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.ICANCELHANDLER.ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

