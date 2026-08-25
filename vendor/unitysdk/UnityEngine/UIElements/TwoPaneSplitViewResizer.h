#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class TwoPaneSplitView; }
namespace UnityEngine::UIElements { class TwoPaneSplitViewOrientation; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }

#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FIXEDPANE_OFFSET UNITYSDK_OFFSET(0xA3CACC0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FLEXEDPANE_OFFSET UNITYSDK_OFFSET(0xA3CACE0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FIXEDPANEMINDIMENSION_OFFSET UNITYSDK_OFFSET(0xA3CAD00)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FLEXEDPANEMINDIMENSION_OFFSET UNITYSDK_OFFSET(0xA3CAE70)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C9BE0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_REGISTERCALLBACKSONTARGET_OFFSET UNITYSDK_OFFSET(0xA3CAFE0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_UNREGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA3CB170)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_APPLYDELTA_OFFSET UNITYSDK_OFFSET(0xA3CB300)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA3CBC10)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0xA3CBCD0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA3CBD80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TwoPaneSplitViewResizer_TypeDefinitionIndex = 30412;

	class TwoPaneSplitViewResizer : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Start; // 0x38
		::System::Boolean m_Active; // 0x44
		::UnityEngine::UIElements::TwoPaneSplitView* m_SplitView; // 0x48
		::System::Int32 m_Direction; // 0x50
		::UnityEngine::UIElements::TwoPaneSplitViewOrientation* m_Orientation; // 0x54

		::UnityEngine::UIElements::VisualElement* get_fixedPane()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FIXEDPANE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_flexedPane()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FLEXEDPANE_OFFSET))(nullptr);
		}

		::System::Single get_fixedPaneMinDimension()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FIXEDPANEMINDIMENSION_OFFSET))(nullptr);
		}

		::System::Single get_flexedPaneMinDimension()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_GET_FLEXEDPANEMINDIMENSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::TwoPaneSplitView* arg, ::System::Int32 arg, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TwoPaneSplitView*, ::System::Int32, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegisterCallbacksOnTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_REGISTERCALLBACKSONTARGET_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbacksFromTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_UNREGISTERCALLBACKSFROMTARGET_OFFSET))(nullptr);
		}

		::System::Void ApplyDelta(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_APPLYDELTA_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEWRESIZER_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

	};
}

