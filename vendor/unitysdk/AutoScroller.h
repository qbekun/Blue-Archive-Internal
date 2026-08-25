#pragma once
#include "unitysdk.h"

class UICenterOnChild;
class UIScrollView;
class UIWrapContent;

#define AUTOSCROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0EB80)
#define AUTOSCROLLER_SCROLLTONEXT_OFFSET UNITYSDK_OFFSET(0xC0EC60)
#define AUTOSCROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0EF60)
#define AUTOSCROLLER_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xC0F060)
#define AUTOSCROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0F070)
#define AUTOSCROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC0F330)
#define AUTOSCROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xC0EB90)
#define AUTOSCROLLER_SCROLLTONEAREST_OFFSET UNITYSDK_OFFSET(0xC0F080)
#define AUTOSCROLLER_SCROLLTO_OFFSET UNITYSDK_OFFSET(0xC0EF10)
#define AUTOSCROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0F390)
#define AUTOSCROLLER_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xC0F3B0)

	inline static constexpr unsigned int AutoScroller_TypeDefinitionIndex = 8826;

	class AutoScroller : public Il2CppObject
	{
	public:
		::System::Single interval; // 0x18
		UICenterOnChild* centerOnChild; // 0x20
		UIScrollView* scrollView; // 0x28
		UIWrapContent* wrapContent; // 0x30
		::System::Int32 numElement; // 0x38
		::System::Single elapsedTime; // 0x3C

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ScrollToNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_SCROLLTONEXT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_Interval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_SET_INTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_STOP_OFFSET))(nullptr);
		}

		::System::Void ScrollToNearest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_SCROLLTONEAREST_OFFSET))(nullptr);
		}

		::System::Void ScrollTo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_SCROLLTO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCROLLER_GET_INTERVAL_OFFSET))(nullptr);
		}

	};

