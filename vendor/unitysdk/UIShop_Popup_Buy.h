#pragma once
#include "unitysdk.h"

class MXButton;
class ButtonActivator;
class UIShop_Popup_Buy_ItemSet;
class ShopListElementData;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISHOP_POPUP_BUY_AWAKE_OFFSET UNITYSDK_OFFSET(0xABFEB0)
#define UISHOP_POPUP_BUY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAC0410)
#define UISHOP_POPUP_BUY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAC0690)
#define UISHOP_POPUP_BUY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xAC08B0)
#define UISHOP_POPUP_BUY_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xAC0960)
#define UISHOP_POPUP_BUY_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xAC09F0)
#define UISHOP_POPUP_BUY_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xAC0A80)
#define UISHOP_POPUP_BUY_SETDATA_OFFSET UNITYSDK_OFFSET(0xAC0F40)
#define UISHOP_POPUP_BUY_SETDATA_OFFSET UNITYSDK_OFFSET(0xAC1070)
#define UISHOP_POPUP_BUY_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAC1E10)
#define UISHOP_POPUP_BUY_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAC1EE0)
#define UISHOP_POPUP_BUY_.CTOR_OFFSET UNITYSDK_OFFSET(0xAC1FB0)

	inline static constexpr unsigned int UIShop_Popup_Buy_TypeDefinitionIndex = 8031;

	class UIShop_Popup_Buy : public Il2CppObject
	{
	public:
		MXButton* closeButtonNormal; // 0xD8
		MXButton* closeButtonCombined; // 0xE0
		MXButton* cancelButtonNormal; // 0xE8
		MXButton* cancelButtonCombined; // 0xF0
		ButtonActivator* okButtonNormal; // 0xF8
		ButtonActivator* okButtonCombined; // 0x100
		UIShop_Popup_Buy_ItemSet* NormalSet; // 0x108
		UIShop_Popup_Buy_ItemSet* CombinedSet; // 0x110
		Il2CppObject* packageItems; // 0x118
		Il2CppObject* singleItems; // 0x120
		ShopListElementData* singleShopElementData; // 0x128
		Il2CppObject* selectedShopIds; // 0x130

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(ShopListElementData* arg)
		{
			((::System::Void(*)(ShopListElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopBuyMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_HANDLESHOPBUYMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_BUY_.CTOR_OFFSET))(nullptr);
		}

	};

