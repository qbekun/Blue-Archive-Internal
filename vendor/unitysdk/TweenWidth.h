#pragma once
#include "unitysdk.h"

class UIWidget;
class UITable;
class TweenWidth;

#define TWEENWIDTH_GET_CACHEDWIDGET_OFFSET UNITYSDK_OFFSET(0x21BF300)
#define TWEENWIDTH_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BF3A0)
#define TWEENWIDTH_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x21BF3F0)
#define TWEENWIDTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BF450)
#define TWEENWIDTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BF3D0)
#define TWEENWIDTH_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x21BF470)
#define TWEENWIDTH_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BF420)
#define TWEENWIDTH_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BF4A0)
#define TWEENWIDTH_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x21BF720)
#define TWEENWIDTH_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BF750)
#define TWEENWIDTH_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BF810)
#define TWEENWIDTH_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x21BF840)

	inline static constexpr unsigned int TweenWidth_TypeDefinitionIndex = 177;

	class TweenWidth : public Il2CppObject
	{
	public:
		::System::Int32 from; // 0x80
		::System::Int32 to; // 0x84
		::System::Boolean updateTable; // 0x88
		UIWidget* mWidget; // 0x90
		UITable* mTable; // 0x98

		UIWidget* get_cachedWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_GET_CACHEDWIDGET_OFFSET))(nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

		TweenWidth* Begin(UIWidget* arg, ::System::Single arg2, ::System::Int32 arg3)
		{
			return ((TweenWidth*(*)(UIWidget*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENWIDTH_GET_WIDTH_OFFSET))(nullptr);
		}

	};

