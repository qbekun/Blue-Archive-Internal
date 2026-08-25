#pragma once
#include "unitysdk.h"

class UILabel;
class UIWidget;
class MXButton;
class TimeFormat;
namespace MX::GameLogic::DBModel { class ShopInfoDB; }

#define UISHOPCONTENT_REFRESHBAR_REMOVE_MASTERCOINSTATEPOPUPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAB0DC0)
#define UISHOPCONTENT_REFRESHBAR_SETDATA_OFFSET UNITYSDK_OFFSET(0xAAEAC0)
#define UISHOPCONTENT_REFRESHBAR_ADD_MASTERCOINSTATEPOPUPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAACA50)
#define UISHOPCONTENT_REFRESHBAR_ONCLICKREFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0xAB0E60)
#define UISHOPCONTENT_REFRESHBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB0E80)
#define UISHOPCONTENT_REFRESHBAR_UPDATEANDCHECK_OFFSET UNITYSDK_OFFSET(0xAACD40)
#define UISHOPCONTENT_REFRESHBAR_ONCLICKMASTERCOINSTATEPOPUPBUTTON_OFFSET UNITYSDK_OFFSET(0xAB1820)
#define UISHOPCONTENT_REFRESHBAR_REMOVE_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAB1840)
#define UISHOPCONTENT_REFRESHBAR_SETREMAINTIME_OFFSET UNITYSDK_OFFSET(0xAB1100)
#define UISHOPCONTENT_REFRESHBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB18E0)
#define UISHOPCONTENT_REFRESHBAR_CLEARDATA_OFFSET UNITYSDK_OFFSET(0xAAFB70)
#define UISHOPCONTENT_REFRESHBAR_ADD_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAAC9B0)

	inline static constexpr unsigned int UIShopContent_RefreshBar_TypeDefinitionIndex = 7987;

	class UIShopContent_RefreshBar : public Il2CppObject
	{
	public:
		UILabel* remainRefreshTitleLabel; // 0x18
		UIWidget* remainRefreshTimeLabelRootWidget; // 0x20
		UILabel* remainRefreshTimeLabel; // 0x28
		MXButton* refreshButton; // 0x30
		MXButton* masterCoinStatePopupButton; // 0x38
		Il2CppObject* expiredTo; // 0x40
		TimeFormat* timeFormat; // 0x50
		Il2CppObject* lastUpdateTime; // 0x58
		::System::Action* RefreshButtonClicked; // 0x68
		::System::Action* MasterCoinStatePopupButtonClicked; // 0x70

		::System::Void remove_MasterCoinStatePopupButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_REMOVE_MASTERCOINSTATEPOPUPBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetData(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void add_MasterCoinStatePopupButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_ADD_MASTERCOINSTATEPOPUPBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRefreshButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_ONCLICKREFRESHBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean UpdateAndCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_UPDATEANDCHECK_OFFSET))(nullptr);
		}

		::System::Void OnclickMasterCoinStatePopupButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_ONCLICKMASTERCOINSTATEPOPUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void remove_RefreshButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_REMOVE_REFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRemainTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_SETREMAINTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_CLEARDATA_OFFSET))(nullptr);
		}

		::System::Void add_RefreshButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_REFRESHBAR_ADD_REFRESHBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

	};

