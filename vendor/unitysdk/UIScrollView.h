#pragma once
#include "unitysdk.h"

class Movement;
class DragEffect;
class UIProgressBar;
class ShowCondition;
namespace UnityEngine { class Vector2; }
class Pivot;
class OnDragNotification;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
class UIPanel;
namespace UnityEngine { class Plane; }
namespace UnityEngine { class Bounds; }
class UICenterOnChild;

#define UISCROLLVIEW_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA374F0)
#define UISCROLLVIEW_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xA37500)
#define UISCROLLVIEW_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xA37520)
#define UISCROLLVIEW_GET_CANMOVEHORIZONTALLY_OFFSET UNITYSDK_OFFSET(0xA375B0)
#define UISCROLLVIEW_GET_CANMOVEVERTICALLY_OFFSET UNITYSDK_OFFSET(0xA375E0)
#define UISCROLLVIEW_GET_SHOULDMOVEHORIZONTALLY_OFFSET UNITYSDK_OFFSET(0xA37610)
#define UISCROLLVIEW_GET_SHOULDMOVEVERTICALLY_OFFSET UNITYSDK_OFFSET(0xA377B0)
#define UISCROLLVIEW_GET_SHOULDMOVE_OFFSET UNITYSDK_OFFSET(0xA37950)
#define UISCROLLVIEW_GET_CURRENTMOMENTUM_OFFSET UNITYSDK_OFFSET(0xA37C10)
#define UISCROLLVIEW_SET_CURRENTMOMENTUM_OFFSET UNITYSDK_OFFSET(0xA37C30)
#define UISCROLLVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xA37C50)
#define UISCROLLVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA37EB0)
#define UISCROLLVIEW_START_OFFSET UNITYSDK_OFFSET(0xA382C0)
#define UISCROLLVIEW_CHECKSCROLLBARS_OFFSET UNITYSDK_OFFSET(0xA37F70)
#define UISCROLLVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA38380)
#define UISCROLLVIEW_ONSCALECHANGED_OFFSET UNITYSDK_OFFSET(0xA38420)
#define UISCROLLVIEW_RESTRICTWITHINBOUNDS_OFFSET UNITYSDK_OFFSET(0xA38560)
#define UISCROLLVIEW_RESTRICTWITHINBOUNDS_OFFSET UNITYSDK_OFFSET(0xA38580)
#define UISCROLLVIEW_DISABLESPRING_OFFSET UNITYSDK_OFFSET(0xA389F0)
#define UISCROLLVIEW_UPDATESCROLLBARS_OFFSET UNITYSDK_OFFSET(0xA38A80)
#define UISCROLLVIEW_UPDATESCROLLBARS_OFFSET UNITYSDK_OFFSET(0xA38AA0)
#define UISCROLLVIEW_UPDATESCROLLBARS_OFFSET UNITYSDK_OFFSET(0xA39190)
#define UISCROLLVIEW_SETDRAGAMOUNT_OFFSET UNITYSDK_OFFSET(0xA39570)
#define UISCROLLVIEW_INVALIDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0xA39A50)
#define UISCROLLVIEW_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xA39A60)
#define UISCROLLVIEW_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xA39C50)
#define UISCROLLVIEW_ONSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA3A000)
#define UISCROLLVIEW_CENTERONITEMMANUAL_OFFSET UNITYSDK_OFFSET(0xA3A2C0)
#define UISCROLLVIEW_SETROOTUINAME_OFFSET UNITYSDK_OFFSET(0xA3A490)
#define UISCROLLVIEW_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0xA3A4A0)
#define UISCROLLVIEW_MOVERELATIVEUSEKEY_OFFSET UNITYSDK_OFFSET(0xA3A4E0)
#define UISCROLLVIEW_MOVERELATIVE_OFFSET UNITYSDK_OFFSET(0xA3A5A0)
#define UISCROLLVIEW_MOVEABSOLUTE_OFFSET UNITYSDK_OFFSET(0xA3A690)
#define UISCROLLVIEW_PRESS_OFFSET UNITYSDK_OFFSET(0xA3A7B0)
#define UISCROLLVIEW_DRAG_OFFSET UNITYSDK_OFFSET(0xA3ADD0)
#define UISCROLLVIEW_SCROLL_OFFSET UNITYSDK_OFFSET(0xA3B6B0)
#define UISCROLLVIEW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA3B7D0)
#define UISCROLLVIEW_ONPAN_OFFSET UNITYSDK_OFFSET(0xA3BFF0)
#define UISCROLLVIEW_RESETLASTTOUCHPOS_OFFSET UNITYSDK_OFFSET(0xA3C180)
#define UISCROLLVIEW_ALIGNWITHINPANEL_OFFSET UNITYSDK_OFFSET(0xA3C2D0)
#define UISCROLLVIEW_ALIGNWITHINPANEL_OFFSET UNITYSDK_OFFSET(0xA3C340)
#define UISCROLLVIEW_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA3CB10)
#define UISCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CBA0)
#define UISCROLLVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3CCC0)
#define UISCROLLVIEW__ONSCALECHANGED_G__COONSCREENRESOLUTIONCHANGED|67_0_OFFSET UNITYSDK_OFFSET(0xA384F0)

	inline static constexpr unsigned int UIScrollView_TypeDefinitionIndex = 73;

	class UIScrollView : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		Movement* movement; // 0x18
		DragEffect* dragEffect; // 0x1C
		::System::Boolean restrictWithinPanel; // 0x20
		::System::Boolean constrainOnDrag; // 0x21
		::System::Boolean disableDragIfFits; // 0x22
		::System::Boolean smoothDragStart; // 0x23
		::System::Boolean iOSDragEmulation; // 0x24
		::System::Single scrollWheelFactor; // 0x28
		::System::Single dragMultiplier; // 0x2C
		::System::Boolean ShowDragMultiplier; // 0x30
		::System::Single momentumAmount; // 0x34
		::System::Single dampenStrength; // 0x38
		UIProgressBar* horizontalScrollBar; // 0x40
		UIProgressBar* verticalScrollBar; // 0x48
		ShowCondition* showScrollBars; // 0x50
		::UnityEngine::Vector2* customMovement; // 0x54
		Pivot* contentPivot; // 0x5C
		OnDragNotification* onDragStarted; // 0x60
		OnDragNotification* onDragFinished; // 0x68
		OnDragNotification* onMomentumMove; // 0x70
		OnDragNotification* onStoppedMoving; // 0x78
		::UnityEngine::Vector3* scale; // 0x80
		::UnityEngine::Vector2* relativePositionOnReset; // 0x8C
		::UnityEngine::Transform* mTrans; // 0x98
		UIPanel* mPanel; // 0xA0
		::UnityEngine::Plane* mPlane; // 0xA8
		::UnityEngine::Vector3* mLastPos; // 0xB8
		::System::Boolean mPressed; // 0xC4
		::UnityEngine::Vector3* mMomentum; // 0xC8
		::System::Single mScroll; // 0xD4
		::UnityEngine::Bounds* mBounds; // 0xD8
		::System::Boolean mCalculatedBounds; // 0xF0
		::System::Boolean mShouldMove; // 0xF1
		::System::Boolean mIgnoreCallbacks; // 0xF2
		::System::Int32 mDragID; // 0xF4
		::UnityEngine::Vector2* mDragStartOffset; // 0xF8
		::System::Boolean mDragStarted; // 0x100
		::System::Boolean mStarted; // 0x101
		::System::Boolean isCameraMoved; // 0x102
		UICenterOnChild* centerOnChild; // 0x108

		UIPanel* get_panel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Boolean get_isDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_ISDRAGGING_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* get_bounds()
		{
			return ((::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_BOUNDS_OFFSET))(nullptr);
		}

		::System::Boolean get_canMoveHorizontally()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_CANMOVEHORIZONTALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_canMoveVertically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_CANMOVEVERTICALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_shouldMoveHorizontally()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_SHOULDMOVEHORIZONTALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_shouldMoveVertically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_SHOULDMOVEVERTICALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_shouldMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_SHOULDMOVE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_currentMomentum()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_GET_CURRENTMOMENTUM_OFFSET))(nullptr);
		}

		::System::Void set_currentMomentum(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_SET_CURRENTMOMENTUM_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_START_OFFSET))(nullptr);
		}

		::System::Void CheckScrollbars()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_CHECKSCROLLBARS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnScaleChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ONSCALECHANGED_OFFSET))(nullptr);
		}

		::System::Boolean RestrictWithinBounds(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_RESTRICTWITHINBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean RestrictWithinBounds(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_RESTRICTWITHINBOUNDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DisableSpring()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_DISABLESPRING_OFFSET))(nullptr);
		}

		::System::Void UpdateScrollbars()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_UPDATESCROLLBARS_OFFSET))(nullptr);
		}

		::System::Void UpdateScrollbars(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_UPDATESCROLLBARS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateScrollbars(UIProgressBar* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(UIProgressBar*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_UPDATESCROLLBARS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetDragAmount(::System::Single arg, ::System::Single arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_SETDRAGAMOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InvalidateBounds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_INVALIDATEBOUNDS_OFFSET))(nullptr);
		}

		::System::Void ResetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_RESETPOSITION_OFFSET))(nullptr);
		}

		::System::Void UpdatePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_UPDATEPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ONSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void CenterOnItemManual(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_CENTERONITEMMANUAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetRootUIName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_SETROOTUINAME_OFFSET))(nullptr);
		}

		::System::Boolean IsMoveable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ISMOVEABLE_OFFSET))(nullptr);
		}

		::System::Void MoveRelativeUseKey(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_MOVERELATIVEUSEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void MoveRelative(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_MOVERELATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveAbsolute(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_MOVEABSOLUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Press(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_PRESS_OFFSET))(arg, nullptr);
		}

		::System::Void Drag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_DRAG_OFFSET))(nullptr);
		}

		::System::Void Scroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_SCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPan(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ONPAN_OFFSET))(arg, nullptr);
		}

		::System::Void ResetLastTouchPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_RESETLASTTOUCHPOS_OFFSET))(nullptr);
		}

		::System::Void AlignWithinPanel(::UnityEngine::Transform* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ALIGNWITHINPANEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AlignWithinPanel(::UnityEngine::Transform* arg, ::System::Boolean arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_ALIGNWITHINPANEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetLocalPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_SETLOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnScaleChanged_g__CoOnScreenResolutionChanged|67_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLVIEW__ONSCALECHANGED_G__COONSCREENRESOLUTIONCHANGED|67_0_OFFSET))(nullptr);
		}

	};

