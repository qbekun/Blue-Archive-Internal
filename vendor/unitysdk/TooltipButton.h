#pragma once
#include "unitysdk.h"

class AssetObjectBase;
class UIWidget;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class UIPopup_Tooltip;

#define TOOLTIPBUTTON__ONCLICKIMPL_B__22_1_OFFSET UNITYSDK_OFFSET(0x2744CC0)
#define TOOLTIPBUTTON_SETSTATDISPLAY_OFFSET UNITYSDK_OFFSET(0x2744FD0)
#define TOOLTIPBUTTON_SET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x2744FE0)
#define TOOLTIPBUTTON_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x2744FF0)
#define TOOLTIPBUTTON_SET_ONCLICKPREPROCESS_OFFSET UNITYSDK_OFFSET(0x2745000)
#define TOOLTIPBUTTON_ONCLICKIMPL_OFFSET UNITYSDK_OFFSET(0x2745010)
#define TOOLTIPBUTTON_GET_ISSHORTCUTVISIBLE_OFFSET UNITYSDK_OFFSET(0x27450E0)
#define TOOLTIPBUTTON_SETSHORTCUTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x27450F0)
#define TOOLTIPBUTTON_GET_PARCELKEY_OFFSET UNITYSDK_OFFSET(0x2745100)
#define TOOLTIPBUTTON_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x2745110)
#define TOOLTIPBUTTON_GET_ONCLICKPREPROCESS_OFFSET UNITYSDK_OFFSET(0x2745120)
#define TOOLTIPBUTTON_SET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x2745130)
#define TOOLTIPBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2745140)
#define TOOLTIPBUTTON_SET_PARCELKEY_OFFSET UNITYSDK_OFFSET(0x2745150)
#define TOOLTIPBUTTON__ONCLICKIMPL_B__22_0_OFFSET UNITYSDK_OFFSET(0x2745160)
#define TOOLTIPBUTTON_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2746550)

	inline static constexpr unsigned int TooltipButton_TypeDefinitionIndex = 7234;

	class TooltipButton : public Il2CppObject
	{
	public:
		::System::Boolean showShortcut; // 0x18
		AssetObjectBase* assetObjectBase; // 0x20
		UIWidget* _Layout_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelKeyPair* _ParcelKey_k__BackingField; // 0x30
		::System::Int64 _TargetCount_k__BackingField; // 0x40
		::System::Action* _OnClickPreProcess_k__BackingField; // 0x48

		::System::Void _OnClickImpl_b__22_1(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON__ONCLICKIMPL_B__22_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetStatDisplay(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_SETSTATDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_SET_TARGETCOUNT_OFFSET))(arg, nullptr);
		}

		UIWidget* get_Layout()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_GET_LAYOUT_OFFSET))(nullptr);
		}

		::System::Void set_OnClickPreProcess(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_SET_ONCLICKPREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_ONCLICKIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsShortcutVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_GET_ISSHORTCUTVISIBLE_OFFSET))(nullptr);
		}

		::System::Void SetShortcutVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_SETSHORTCUTVISIBILITY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_ParcelKey()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_GET_PARCELKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_GET_TARGETCOUNT_OFFSET))(nullptr);
		}

		::System::Action* get_OnClickPreProcess()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_GET_ONCLICKPREPROCESS_OFFSET))(nullptr);
		}

		::System::Void set_Layout(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_SET_LAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelKey(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_SET_PARCELKEY_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickImpl_b__22_0(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON__ONCLICKIMPL_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPBUTTON_ONCLICK_OFFSET))(nullptr);
		}

	};

