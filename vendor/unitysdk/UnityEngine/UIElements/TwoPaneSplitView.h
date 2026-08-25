#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TwoPaneSplitViewOrientation; }
namespace UnityEngine::UIElements { class TwoPaneSplitViewResizer; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }

#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FIXEDPANE_OFFSET UNITYSDK_OFFSET(0xA3C7FC0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FLEXEDPANE_OFFSET UNITYSDK_OFFSET(0xA3C7FD0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FIXEDPANEINDEX_OFFSET UNITYSDK_OFFSET(0xA3C7FE0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FIXEDPANEDIMENSION_OFFSET UNITYSDK_OFFSET(0xA3C7FF0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_SET_FIXEDPANEDIMENSION_OFFSET UNITYSDK_OFFSET(0xA3C8030)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C8060)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xA3C82F0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONPOSTDISPLAYSETUP_OFFSET UNITYSDK_OFFSET(0xA3C9AF0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_POSTDISPLAYSETUP_OFFSET UNITYSDK_OFFSET(0xA3C86B0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONSIZECHANGE_OFFSET UNITYSDK_OFFSET(0xA3C9CC0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONSIZECHANGE_OFFSET UNITYSDK_OFFSET(0xA3C9CD0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA3CA680)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0xA3CA690)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_SETDRAGLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xA3CA300)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_SETFIXEDPANEDIMENSION_OFFSET UNITYSDK_OFFSET(0xA3CA4C0)
#define UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3CA6D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TwoPaneSplitView_TypeDefinitionIndex = 30410;

	class TwoPaneSplitView : public Il2CppObject
	{
	public:
		::System::String* s_UssClassName; // 0x0
		::System::String* s_ContentContainerClassName; // 0x8
		::System::String* s_HandleDragLineClassName; // 0x10
		::System::String* s_HandleDragLineVerticalClassName; // 0x18
		::System::String* s_HandleDragLineHorizontalClassName; // 0x20
		::System::String* s_HandleDragLineAnchorClassName; // 0x28
		::System::String* s_HandleDragLineAnchorVerticalClassName; // 0x30
		::System::String* s_HandleDragLineAnchorHorizontalClassName; // 0x38
		::System::String* s_VerticalClassName; // 0x40
		::System::String* s_HorizontalClassName; // 0x48
		::UnityEngine::UIElements::VisualElement* m_LeftPane; // 0x3B0
		::UnityEngine::UIElements::VisualElement* m_RightPane; // 0x3B8
		::UnityEngine::UIElements::VisualElement* m_FixedPane; // 0x3C0
		::UnityEngine::UIElements::VisualElement* m_FlexedPane; // 0x3C8
		::System::Single m_FixedPaneDimension; // 0x3D0
		::UnityEngine::UIElements::VisualElement* m_DragLine; // 0x3D8
		::UnityEngine::UIElements::VisualElement* m_DragLineAnchor; // 0x3E0
		::System::Boolean m_CollapseMode; // 0x3E8
		::UnityEngine::UIElements::VisualElement* m_Content; // 0x3F0
		::UnityEngine::UIElements::TwoPaneSplitViewOrientation* m_Orientation; // 0x3F8
		::System::Int32 m_FixedPaneIndex; // 0x3FC
		::System::Single m_FixedPaneInitialDimension; // 0x400
		::UnityEngine::UIElements::TwoPaneSplitViewResizer* m_Resizer; // 0x408

		::UnityEngine::UIElements::VisualElement* get_fixedPane()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FIXEDPANE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_flexedPane()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FLEXEDPANE_OFFSET))(nullptr);
		}

		::System::Int32 get_fixedPaneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FIXEDPANEINDEX_OFFSET))(nullptr);
		}

		::System::Single get_fixedPaneDimension()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_FIXEDPANEDIMENSION_OFFSET))(nullptr);
		}

		::System::Void set_fixedPaneDimension(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_SET_FIXEDPANEDIMENSION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Int32 arg, ::System::Single arg, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnPostDisplaySetup(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONPOSTDISPLAYSETUP_OFFSET))(arg, nullptr);
		}

		::System::Void PostDisplaySetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_POSTDISPLAYSETUP_OFFSET))(nullptr);
		}

		::System::Void OnSizeChange(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONSIZECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSizeChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONSIZECHANGE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		::System::Void SetDragLineOffset(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_SETDRAGLINEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void SetFixedPaneDimension(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_SETFIXEDPANEDIMENSION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TWOPANESPLITVIEW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

