#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ScrollerVisibility; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Scroller; }
namespace UnityEngine::UIElements { class ScrollViewMode; }
namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class DetachFromPanelEvent; }
namespace UnityEngine::UIElements { class PointerCaptureEvent; }
namespace UnityEngine::UIElements { class PointerCaptureOutEvent; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class PointerCancelEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class WheelEvent; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }

#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_HORIZONTALSCROLLERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA3B5AD0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_HORIZONTALSCROLLERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA3B5AE0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_VERTICALSCROLLERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA3B6190)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_VERTICALSCROLLERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA3B61A0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SHOWHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA3B6220)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SHOWVERTICAL_OFFSET UNITYSDK_OFFSET(0xA3B6250)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_NEEDSHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA3B5B60)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_NEEDSVERTICAL_OFFSET UNITYSDK_OFFSET(0xA3B5BA0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_ISVERTICALSCROLLDISPLAYED_OFFSET UNITYSDK_OFFSET(0xA3B63C0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_ISHORIZONTALSCROLLDISPLAYED_OFFSET UNITYSDK_OFFSET(0xA3B6470)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0xA3B6520)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0xA3B65B0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_HORIZONTALPAGESIZE_OFFSET UNITYSDK_OFFSET(0xA3B6A30)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_VERTICALPAGESIZE_OFFSET UNITYSDK_OFFSET(0xA3B6C80)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_MOUSEWHEELSCROLLSIZE_OFFSET UNITYSDK_OFFSET(0xA3B6ED0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_MOUSEWHEELSCROLLSIZE_OFFSET UNITYSDK_OFFSET(0xA3B6EE0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLABLEWIDTH_OFFSET UNITYSDK_OFFSET(0xA3B6280)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLABLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3B6320)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_HASINERTIA_OFFSET UNITYSDK_OFFSET(0xA3B6F90)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLDECELERATIONRATE_OFFSET UNITYSDK_OFFSET(0xA3B6FB0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SCROLLDECELERATIONRATE_OFFSET UNITYSDK_OFFSET(0xA3B6FC0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_ELASTICITY_OFFSET UNITYSDK_OFFSET(0xA3B6FD0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_ELASTICITY_OFFSET UNITYSDK_OFFSET(0xA3B6FE0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_TOUCHSCROLLBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA3B6FF0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_TOUCHSCROLLBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA3B7000)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_NESTEDINTERACTIONKIND_OFFSET UNITYSDK_OFFSET(0xA3B70C0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_NESTEDINTERACTIONKIND_OFFSET UNITYSDK_OFFSET(0xA3B70D0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_ELASTICANIMATIONINTERVALMS_OFFSET UNITYSDK_OFFSET(0xA3B70E0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONHORIZONTALSCROLLDRAGELEMENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA3B7280)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONVERTICALSCROLLDRAGELEMENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA3B7320)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATEHORIZONTALSLIDERPAGESIZE_OFFSET UNITYSDK_OFFSET(0xA3B6A40)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATEVERTICALSLIDERPAGESIZE_OFFSET UNITYSDK_OFFSET(0xA3B6C90)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATECONTENTVIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA3B6710)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SCROLLTO_OFFSET UNITYSDK_OFFSET(0xA3B73C0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GETXDELTAOFFSET_OFFSET UNITYSDK_OFFSET(0xA3B7A40)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GETYDELTAOFFSET_OFFSET UNITYSDK_OFFSET(0xA3B76C0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GETDELTADISTANCE_OFFSET UNITYSDK_OFFSET(0xA3B7DC0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_CONTENTVIEWPORT_OFFSET UNITYSDK_OFFSET(0xA3B7E30)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_CONTENTVIEWPORT_OFFSET UNITYSDK_OFFSET(0xA3B7E40)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_HORIZONTALSCROLLER_OFFSET UNITYSDK_OFFSET(0xA3B7E60)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_HORIZONTALSCROLLER_OFFSET UNITYSDK_OFFSET(0xA3B7E70)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_VERTICALSCROLLER_OFFSET UNITYSDK_OFFSET(0xA3B7E90)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_VERTICALSCROLLER_OFFSET UNITYSDK_OFFSET(0xA3B7EA0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA3B7EC0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B7ED0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B7EE0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA3B8F00)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_MODE_OFFSET UNITYSDK_OFFSET(0xA3B8F10)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SETSCROLLVIEWMODE_OFFSET UNITYSDK_OFFSET(0xA3B8D60)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0xA3B8F30)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONDETACHFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA3B95A0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERCAPTURE_OFFSET UNITYSDK_OFFSET(0xA3B9B80)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERCAPTUREOUT_OFFSET UNITYSDK_OFFSET(0xA3B9CD0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA3B9E90)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SCHEDULERESETLAYOUTPASS_OFFSET UNITYSDK_OFFSET(0xA3BA000)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_RESETLAYOUTPASS_OFFSET UNITYSDK_OFFSET(0xA3B9B70)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_COMPUTEELASTICOFFSET_OFFSET UNITYSDK_OFFSET(0xA3BA200)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_COMPUTEINITIALSPRINGBACKVELOCITY_OFFSET UNITYSDK_OFFSET(0xA3BA350)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_SPRINGBACK_OFFSET UNITYSDK_OFFSET(0xA3BA6E0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_APPLYSCROLLINERTIA_OFFSET UNITYSDK_OFFSET(0xA3BA900)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_POSTPOINTERUPANIMATION_OFFSET UNITYSDK_OFFSET(0xA3BAE60)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA3BB040)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0xA3BB670)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERCANCEL_OFFSET UNITYSDK_OFFSET(0xA3BC0C0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA3BC120)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_INITTOUCHSCROLLING_OFFSET UNITYSDK_OFFSET(0xA3BB2B0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_COMPUTETOUCHSCROLLING_OFFSET UNITYSDK_OFFSET(0xA3BB920)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_APPLYTOUCHSCROLLING_OFFSET UNITYSDK_OFFSET(0xA3BC1D0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_RELEASESCROLLING_OFFSET UNITYSDK_OFFSET(0xA3B9DC0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_EXECUTEELASTICSPRINGANIMATION_OFFSET UNITYSDK_OFFSET(0xA3BC520)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ADJUSTSCROLLERS_OFFSET UNITYSDK_OFFSET(0xA3BC730)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATESCROLLERS_OFFSET UNITYSDK_OFFSET(0xA3B5BE0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONSCROLLERSGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA3BC9D0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONSCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0xA3BCBB0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONROOTCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0xA3BD4F0)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONROOTPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA3BD500)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_READSINGLELINEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3B9490)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATEELASTICBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0xA3BD200)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3BD510)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW__.CTOR_B__123_0_OFFSET UNITYSDK_OFFSET(0xA3BD890)
#define UNITYENGINE_UIELEMENTS_SCROLLVIEW__.CTOR_B__123_1_OFFSET UNITYSDK_OFFSET(0xA3BD930)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ScrollView_TypeDefinitionIndex = 30378;

	class ScrollView : public Il2CppObject
	{
	public:
		::System::Int32 m_FirstLayoutPass; // 0x3B0
		::UnityEngine::UIElements::ScrollerVisibility* m_HorizontalScrollerVisibility; // 0x3B4
		::UnityEngine::UIElements::ScrollerVisibility* m_VerticalScrollerVisibility; // 0x3B8
		::UnityEngine::UIElements::VisualElement* m_AttachedRootVisualContainer; // 0x3C0
		::System::Single m_SingleLineHeight; // 0x3C8
		::System::Boolean m_MouseWheelScrollSizeIsInline; // 0x3CC
		::System::Single m_HorizontalPageSize; // 0x3D0
		::System::Single m_VerticalPageSize; // 0x3D4
		::System::Single m_MouseWheelScrollSize; // 0x3D8
		::System::Single k_DefaultScrollDecelerationRate; // 0x0
		::System::Single m_ScrollDecelerationRate; // 0x3DC
		::System::Single k_ScaledPixelsPerPointMultiplier; // 0x3E0
		::System::Single k_TouchScrollInertiaBaseTimeInterval; // 0x3E4
		::System::Single k_DefaultElasticity; // 0x4
		::System::Single m_Elasticity; // 0x3E8
		TouchScrollBehavior* m_TouchScrollBehavior; // 0x3EC
		NestedInteractionKind* m_NestedInteractionKind; // 0x3F0
		::System::Int64 k_DefaultElasticAnimationInterval; // 0x8
		::System::Int64 m_ElasticAnimationIntervalMs; // 0x3F8
		::UnityEngine::UIElements::VisualElement* _contentViewport_k__BackingField; // 0x400
		::UnityEngine::UIElements::Scroller* _horizontalScroller_k__BackingField; // 0x408
		::UnityEngine::UIElements::Scroller* _verticalScroller_k__BackingField; // 0x410
		::UnityEngine::UIElements::VisualElement* m_ContentContainer; // 0x418
		::UnityEngine::UIElements::VisualElement* m_ContentAndVerticalScrollContainer; // 0x420
		::System::Single previousVerticalTouchScrollTimeStamp; // 0x428
		::System::Single previousHorizontalTouchScrollTimeStamp; // 0x42C
		::System::Single elapsedTimeSinceLastVerticalTouchScroll; // 0x430
		::System::Single elapsedTimeSinceLastHorizontalTouchScroll; // 0x434
		::System::String* ussClassName; // 0x10
		::System::String* viewportUssClassName; // 0x18
		::System::String* contentAndVerticalScrollUssClassName; // 0x20
		::System::String* contentUssClassName; // 0x28
		::System::String* hScrollerUssClassName; // 0x30
		::System::String* vScrollerUssClassName; // 0x38
		::System::String* horizontalVariantUssClassName; // 0x40
		::System::String* verticalVariantUssClassName; // 0x48
		::System::String* verticalHorizontalVariantUssClassName; // 0x50
		::System::String* scrollVariantUssClassName; // 0x58
		::UnityEngine::UIElements::ScrollViewMode* m_Mode; // 0x438
		::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScheduledLayoutPassResetItem; // 0x440
		::UnityEngine::Vector2* m_StartPosition; // 0x448
		::UnityEngine::Vector2* m_PointerStartPosition; // 0x450
		::UnityEngine::Vector2* m_Velocity; // 0x458
		::UnityEngine::Vector2* m_SpringBackVelocity; // 0x460
		::UnityEngine::Vector2* m_LowBounds; // 0x468
		::UnityEngine::Vector2* m_HighBounds; // 0x470
		::System::Single m_LastVelocityLerpTime; // 0x478
		::System::Boolean m_StartedMoving; // 0x47C
		::System::Boolean m_TouchPointerMoveAllowed; // 0x47D
		::System::Boolean m_TouchStoppedVelocity; // 0x47E
		::UnityEngine::UIElements::VisualElement* m_CapturedTarget; // 0x480
		Il2CppObject* m_CapturedTargetPointerMoveCallback; // 0x488
		Il2CppObject* m_CapturedTargetPointerUpCallback; // 0x490
		::UnityEngine::UIElements::IVisualElementScheduledItem* m_PostPointerUpAnimation; // 0x498

		::UnityEngine::UIElements::ScrollerVisibility* get_horizontalScrollerVisibility()
		{
			return (return (::UnityEngine::UIElements::ScrollerVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_HORIZONTALSCROLLERVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScrollerVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_HORIZONTALSCROLLERVISIBILITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ScrollerVisibility* get_verticalScrollerVisibility()
		{
			return (return (::UnityEngine::UIElements::ScrollerVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_VERTICALSCROLLERVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScrollerVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_VERTICALSCROLLERVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_showHorizontal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SHOWHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_showVertical(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SHOWVERTICAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_needsHorizontal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_NEEDSHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Boolean get_needsVertical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_NEEDSVERTICAL_OFFSET))(nullptr);
		}

		::System::Boolean get_isVerticalScrollDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_ISVERTICALSCROLLDISPLAYED_OFFSET))(nullptr);
		}

		::System::Boolean get_isHorizontalScrollDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_ISHORIZONTALSCROLLDISPLAYED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_scrollOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_scrollOffset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SCROLLOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_horizontalPageSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_HORIZONTALPAGESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_verticalPageSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_VERTICALPAGESIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_mouseWheelScrollSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_MOUSEWHEELSCROLLSIZE_OFFSET))(nullptr);
		}

		::System::Void set_mouseWheelScrollSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_MOUSEWHEELSCROLLSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_scrollableWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLABLEWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_scrollableHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLABLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_hasInertia()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_HASINERTIA_OFFSET))(nullptr);
		}

		::System::Single get_scrollDecelerationRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_SCROLLDECELERATIONRATE_OFFSET))(nullptr);
		}

		::System::Void set_scrollDecelerationRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_SCROLLDECELERATIONRATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_elasticity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_ELASTICITY_OFFSET))(nullptr);
		}

		::System::Void set_elasticity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_ELASTICITY_OFFSET))(arg, nullptr);
		}

		TouchScrollBehavior* get_touchScrollBehavior()
		{
			return (return (TouchScrollBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_TOUCHSCROLLBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_touchScrollBehavior(TouchScrollBehavior* arg)
		{
			((::System::Void(*)(TouchScrollBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_TOUCHSCROLLBEHAVIOR_OFFSET))(arg, nullptr);
		}

		NestedInteractionKind* get_nestedInteractionKind()
		{
			return (return (NestedInteractionKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_NESTEDINTERACTIONKIND_OFFSET))(nullptr);
		}

		::System::Void set_nestedInteractionKind(NestedInteractionKind* arg)
		{
			((::System::Void(*)(NestedInteractionKind*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_NESTEDINTERACTIONKIND_OFFSET))(arg, nullptr);
		}

		::System::Void set_elasticAnimationIntervalMs(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_ELASTICANIMATIONINTERVALMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONHORIZONTALSCROLLDRAGELEMENTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONVERTICALSCROLLDRAGELEMENTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateHorizontalSliderPageSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATEHORIZONTALSLIDERPAGESIZE_OFFSET))(nullptr);
		}

		::System::Void UpdateVerticalSliderPageSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATEVERTICALSLIDERPAGESIZE_OFFSET))(nullptr);
		}

		::System::Void UpdateContentViewTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATECONTENTVIEWTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void ScrollTo(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SCROLLTO_OFFSET))(arg, nullptr);
		}

		::System::Single GetXDeltaOffset(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GETXDELTAOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Single GetYDeltaOffset(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GETYDELTAOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Single GetDeltaDistance(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GETDELTADISTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_contentViewport()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_CONTENTVIEWPORT_OFFSET))(nullptr);
		}

		::System::Void set_contentViewport(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_CONTENTVIEWPORT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Scroller* get_horizontalScroller()
		{
			return (return (::UnityEngine::UIElements::Scroller*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_HORIZONTALSCROLLER_OFFSET))(nullptr);
		}

		::System::Void set_horizontalScroller(::UnityEngine::UIElements::Scroller* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Scroller*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_HORIZONTALSCROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Scroller* get_verticalScroller()
		{
			return (return (::UnityEngine::UIElements::Scroller*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_VERTICALSCROLLER_OFFSET))(nullptr);
		}

		::System::Void set_verticalScroller(::UnityEngine::UIElements::Scroller* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Scroller*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_VERTICALSCROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::ScrollViewMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScrollViewMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ScrollViewMode* get_mode()
		{
			return (return (::UnityEngine::UIElements::ScrollViewMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_mode(::UnityEngine::UIElements::ScrollViewMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScrollViewMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SET_MODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScrollViewMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SETSCROLLVIEWMODE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONDETACHFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCaptureEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERCAPTURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCaptureOutEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERCAPTUREOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ScheduleResetLayoutPass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SCHEDULERESETLAYOUTPASS_OFFSET))(nullptr);
		}

		::System::Void ResetLayoutPass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_RESETLAYOUTPASS_OFFSET))(nullptr);
		}

		::System::Single ComputeElasticOffset(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_COMPUTEELASTICOFFSET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeInitialSpringBackVelocity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_COMPUTEINITIALSPRINGBACKVELOCITY_OFFSET))(nullptr);
		}

		::System::Void SpringBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_SPRINGBACK_OFFSET))(nullptr);
		}

		::System::Void ApplyScrollInertia()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_APPLYSCROLLINERTIA_OFFSET))(nullptr);
		}

		::System::Void PostPointerUpAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_POSTPOINTERUPANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCancelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void InitTouchScrolling(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_INITTOUCHSCROLLING_OFFSET))(arg, nullptr);
		}

		TouchScrollingResult* ComputeTouchScrolling(::UnityEngine::Vector2* arg)
		{
			return (return (TouchScrollingResult*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_COMPUTETOUCHSCROLLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ApplyTouchScrolling(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_APPLYTOUCHSCROLLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseScrolling(::System::Int32 arg, ::UnityEngine::UIElements::IEventHandler* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::UIElements::IEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_RELEASESCROLLING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteElasticSpringAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_EXECUTEELASTICSPRINGANIMATION_OFFSET))(nullptr);
		}

		::System::Void AdjustScrollers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ADJUSTSCROLLERS_OFFSET))(nullptr);
		}

		::System::Void UpdateScrollers(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATESCROLLERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONSCROLLERSGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnScrollWheel(::UnityEngine::UIElements::WheelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::WheelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONSCROLLWHEEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONROOTCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRootPointerUp(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_ONROOTPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void ReadSingleLineHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_READSINGLELINEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void UpdateElasticBehaviour()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_UPDATEELASTICBEHAVIOUR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__123_0(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW__.CTOR_B__123_0_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__123_1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLVIEW__.CTOR_B__123_1_OFFSET))(arg, nullptr);
		}

	};
}

