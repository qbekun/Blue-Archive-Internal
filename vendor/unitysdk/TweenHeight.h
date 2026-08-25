#pragma once
#include "unitysdk.h"

class UIWidget;
class UITable;
class TweenHeight;

#define TWEENHEIGHT_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x2081A20)
#define TWEENHEIGHT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2081A80)
#define TWEENHEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2081AC0)
#define TWEENHEIGHT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2081A50)
#define TWEENHEIGHT_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2081DE0)
#define TWEENHEIGHT_BEGIN_OFFSET UNITYSDK_OFFSET(0x2081E10)
#define TWEENHEIGHT_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x2081ED0)
#define TWEENHEIGHT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2081F00)
#define TWEENHEIGHT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2081AA0)
#define TWEENHEIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2081F30)
#define TWEENHEIGHT_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2081F50)
#define TWEENHEIGHT_GET_CACHEDWIDGET_OFFSET UNITYSDK_OFFSET(0x2081D40)

	inline static constexpr unsigned int TweenHeight_TypeDefinitionIndex = 166;

	class TweenHeight : public Il2CppObject
	{
	public:
		::System::Int32 from; // 0x80
		::System::Int32 to; // 0x84
		::System::Boolean updateTable; // 0x88
		UIWidget* mWidget; // 0x90
		UITable* mTable; // 0x98

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		TweenHeight* Begin(UIWidget* arg, ::System::Single arg2, ::System::Int32 arg3)
		{
			return ((TweenHeight*(*)(UIWidget*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		UIWidget* get_cachedWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENHEIGHT_GET_CACHEDWIDGET_OFFSET))(nullptr);
		}

	};

