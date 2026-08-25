#pragma once
#include "unitysdk.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Vector2; }

#define UISCENARIOMODE_SERIESSWIPE_SET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x2810BC0)
#define UISCENARIOMODE_SERIESSWIPE_ONSWIPELEFT_OFFSET UNITYSDK_OFFSET(0x2810BD0)
#define UISCENARIOMODE_SERIESSWIPE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2810C90)
#define UISCENARIOMODE_SERIESSWIPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2811120)
#define UISCENARIOMODE_SERIESSWIPE_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x2811130)
#define UISCENARIOMODE_SERIESSWIPE_ISINSIDECOLLIDER_OFFSET UNITYSDK_OFFSET(0x2810DB0)
#define UISCENARIOMODE_SERIESSWIPE_CHECKSWIPE_OFFSET UNITYSDK_OFFSET(0x2811030)
#define UISCENARIOMODE_SERIESSWIPE_ONSWIPERIGHT_OFFSET UNITYSDK_OFFSET(0x2811140)

	inline static constexpr unsigned int UIScenarioMode_SeriesSwipe_TypeDefinitionIndex = 7796;

	class UIScenarioMode_SeriesSwipe : public Il2CppObject
	{
	public:
		::System::Single _minSwipeDistance; // 0x18
		::UnityEngine::BoxCollider* _swipeAreaCollider; // 0x20
		::System::Boolean _IsDragging_k__BackingField; // 0x28
		::UnityEngine::Vector2* _dragStartPos; // 0x2C
		::UnityEngine::Vector2* _dragCurrentPos; // 0x34
		::System::Boolean _isInputActive; // 0x3C

		::System::Void set_IsDragging(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_SET_ISDRAGGING_OFFSET))(arg, nullptr);
		}

		::System::Void OnSwipeLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_ONSWIPELEFT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_GET_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Boolean IsInsideCollider(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_ISINSIDECOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSwipe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_CHECKSWIPE_OFFSET))(nullptr);
		}

		::System::Void OnSwipeRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SERIESSWIPE_ONSWIPERIGHT_OFFSET))(nullptr);
		}

	};

