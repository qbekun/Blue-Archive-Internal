#pragma once
#include "unitysdk.h"

class OnInitializeItem;
namespace UnityEngine { class Transform; }
class UIPanel;
class UIScrollView;
class UIWidget;

#define UIWRAPCONTENT_SORTALPHABETICALLY_OFFSET UNITYSDK_OFFSET(0xA42460)
#define UIWRAPCONTENT_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xA42890)
#define UIWRAPCONTENT_SORTBASEDONSCROLLMOVEMENT_OFFSET UNITYSDK_OFFSET(0xA42AB0)
#define UIWRAPCONTENT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA42DC0)
#define UIWRAPCONTENT_REFRESHBOTTOMMOSTWIDGET_OFFSET UNITYSDK_OFFSET(0xA42DD0)
#define UIWRAPCONTENT_WRAPCONTENT_OFFSET UNITYSDK_OFFSET(0xA43170)
#define UIWRAPCONTENT_RESETCHILDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA43F70)
#define UIWRAPCONTENT_START_OFFSET UNITYSDK_OFFSET(0xA44080)
#define UIWRAPCONTENT_GET_BOTTOMMOSTWIDGET_OFFSET UNITYSDK_OFFSET(0xA44190)
#define UIWRAPCONTENT_CACHESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA42750)
#define UIWRAPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA441A0)
#define UIWRAPCONTENT_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA44280)

	inline static constexpr unsigned int UIWrapContent_TypeDefinitionIndex = 89;

	class UIWrapContent : public Il2CppObject
	{
	public:
		::System::Int32 itemSize; // 0x18
		::System::Boolean cullContent; // 0x1C
		::System::Int32 minIndex; // 0x20
		::System::Int32 maxIndex; // 0x24
		::System::Boolean hideInactive; // 0x28
		OnInitializeItem* onInitializeItem; // 0x30
		::UnityEngine::Transform* mTrans; // 0x38
		UIPanel* mPanel; // 0x40
		UIScrollView* mScroll; // 0x48
		::System::Boolean mHorizontal; // 0x50
		::System::Boolean mFirstTime; // 0x51
		Il2CppObject* mChildren; // 0x58
		Il2CppObject* mWidgets; // 0x60
		Il2CppObject* OnLastElementChanged; // 0x68
		UIWidget* bottomMostWidget; // 0x70

		::System::Void SortAlphabetically()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_SORTALPHABETICALLY_OFFSET))(nullptr);
		}

		::System::Void UpdateItem(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_UPDATEITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SortBasedOnScrollMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_SORTBASEDONSCROLLMOVEMENT_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void RefreshBottommostWidget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_REFRESHBOTTOMMOSTWIDGET_OFFSET))(nullptr);
		}

		::System::Void WrapContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_WRAPCONTENT_OFFSET))(nullptr);
		}

		::System::Void ResetChildPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_RESETCHILDPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_START_OFFSET))(nullptr);
		}

		UIWidget* get_BottomMostWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_GET_BOTTOMMOSTWIDGET_OFFSET))(nullptr);
		}

		::System::Boolean CacheScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_CACHESCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnMove(UIPanel* arg)
		{
			((::System::Void(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWRAPCONTENT_ONMOVE_OFFSET))(arg, nullptr);
		}

	};

