#pragma once
#include "unitysdk.h"

class UIScrollView;
class Movement;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UIINPUTSCROLLVIEW_ONPAN_OFFSET UNITYSDK_OFFSET(0x2196F90)
#define UIINPUTSCROLLVIEW_GETKEYINPUT_OFFSET UNITYSDK_OFFSET(0x2197050)
#define UIINPUTSCROLLVIEW_FINDPARENTUIBASENAME_OFFSET UNITYSDK_OFFSET(0x21972B0)
#define UIINPUTSCROLLVIEW_START_OFFSET UNITYSDK_OFFSET(0x2197390)
#define UIINPUTSCROLLVIEW_ONDRAG_OFFSET UNITYSDK_OFFSET(0x2197680)
#define UIINPUTSCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x2197730)
#define UIINPUTSCROLLVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x21977B0)
#define UIINPUTSCROLLVIEW_RESTOREMOVEMENTSETTING_OFFSET UNITYSDK_OFFSET(0x2197920)
#define UIINPUTSCROLLVIEW_FINDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21973A0)
#define UIINPUTSCROLLVIEW_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x2197AF0)
#define UIINPUTSCROLLVIEW_STOPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x2197BB0)
#define UIINPUTSCROLLVIEW_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x2197C00)
#define UIINPUTSCROLLVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2197C10)
#define UIINPUTSCROLLVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x2197E30)
#define UIINPUTSCROLLVIEW_CANMOVINGBYMOUSE_OFFSET UNITYSDK_OFFSET(0x2197040)
#define UIINPUTSCROLLVIEW_APPLYMOVEMENTSETTING_OFFSET UNITYSDK_OFFSET(0x2197A40)
#define UIINPUTSCROLLVIEW_RESTORESCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0x21978A0)
#define UIINPUTSCROLLVIEW_FILTERBYMOVEMENT_OFFSET UNITYSDK_OFFSET(0x2198290)
#define UIINPUTSCROLLVIEW_GET_SHOWCUSTOMMOVEMENT_OFFSET UNITYSDK_OFFSET(0x21983B0)
#define UIINPUTSCROLLVIEW_ONPRESS_OFFSET UNITYSDK_OFFSET(0x21983D0)
#define UIINPUTSCROLLVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2198570)
#define UIINPUTSCROLLVIEW_APPLYMOUSEWHEELSETTING_OFFSET UNITYSDK_OFFSET(0x21979B0)

	inline static constexpr unsigned int UIInputScrollView_TypeDefinitionIndex = 4118;

	class UIInputScrollView : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		::System::Boolean autoFindRequiredUI; // 0x20
		::System::String* requiredUIName; // 0x28
		Movement* overrideMovement; // 0x30
		::UnityEngine::Vector2* customKeyboardMovement; // 0x34
		::System::Boolean enableMouseWheel; // 0x3C
		::System::Boolean enableKeyboardControl; // 0x3D
		::System::Single moveSpeed; // 0x40
		::System::Boolean useMomentum; // 0x44
		::System::Single dampenStrength; // 0x48
		::System::Single momentumAcceleration; // 0x4C
		::UnityEngine::Transform* mTrans; // 0x50
		::System::Boolean mAutoFind; // 0x58
		::System::Boolean mStarted; // 0x59
		::System::Single mOriginalScrollWheelFactor; // 0x5C
		Movement* mOriginalMovement; // 0x60
		::UnityEngine::Vector2* mOriginalCustomMovement; // 0x64
		::UnityEngine::Vector3* mMomentum; // 0x6C
		::System::Boolean mIsMovingByKeyboard; // 0x78
		::System::Boolean mIsKeyboardInput; // 0x79
		::System::Boolean mPressedByMouse; // 0x7A
		::System::Boolean mScrollWheelModified; // 0x7B
		::System::Boolean mMovementModified; // 0x7C

		::System::Void OnPan(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONPAN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetKeyInput()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_GETKEYINPUT_OFFSET))(nullptr);
		}

		::System::String* FindParentUIBaseName(::UnityEngine::Transform* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_FINDPARENTUIBASENAME_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_START_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RestoreMovementSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_RESTOREMOVEMENTSETTING_OFFSET))(nullptr);
		}

		::System::Void FindScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_FINDSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void StopMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_STOPMOVEMENT_OFFSET))(nullptr);
		}

		::System::Void RefreshScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_REFRESHSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean CanMovingByMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_CANMOVINGBYMOUSE_OFFSET))(nullptr);
		}

		::System::Void ApplyMovementSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_APPLYMOVEMENTSETTING_OFFSET))(nullptr);
		}

		::System::Void RestoreScrollWheelFactor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_RESTORESCROLLWHEELFACTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* FilterByMovement(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_FILTERBYMOVEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowCustomMovement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_GET_SHOWCUSTOMMOVEMENT_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ApplyMouseWheelSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTSCROLLVIEW_APPLYMOUSEWHEELSETTING_OFFSET))(nullptr);
		}

	};

