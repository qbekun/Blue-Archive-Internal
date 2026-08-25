#pragma once
#include "unitysdk.h"

class UIScrollView;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector2; }

#define UIDRAGSCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03970)
#define UIDRAGSCROLLVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA03980)
#define UIDRAGSCROLLVIEW_START_OFFSET UNITYSDK_OFFSET(0xA03BC0)
#define UIDRAGSCROLLVIEW_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xA03BD0)
#define UIDRAGSCROLLVIEW_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA03C90)
#define UIDRAGSCROLLVIEW_ONPAN_OFFSET UNITYSDK_OFFSET(0xA03D30)
#define UIDRAGSCROLLVIEW_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA03DE0)
#define UIDRAGSCROLLVIEW_FINDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA03A90)
#define UIDRAGSCROLLVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA03F70)

	inline static constexpr unsigned int UIDragScrollView_TypeDefinitionIndex = 38;

	class UIDragScrollView : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UIScrollView* draggablePanel; // 0x20
		::UnityEngine::Transform* mTrans; // 0x28
		UIScrollView* mScroll; // 0x30
		::System::Boolean mAutoFind; // 0x38
		::System::Boolean mStarted; // 0x39
		::System::Boolean mPressed; // 0x3A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_START_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPan(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_ONPAN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void FindScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_FINDSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGSCROLLVIEW_ONDISABLE_OFFSET))(nullptr);
		}

	};

