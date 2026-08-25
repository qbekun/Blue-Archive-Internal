#pragma once
#include "unitysdk.h"

class MXButton;
class UIGrid;
namespace UnityEngine { class Transform; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_USEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x277E120)
#define UIPOPUP_USEITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x277E410)
#define UIPOPUP_USEITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x277E590)
#define UIPOPUP_USEITEM_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x277E790)
#define UIPOPUP_USEITEM_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x277E860)
#define UIPOPUP_USEITEM_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x277E930)
#define UIPOPUP_USEITEM_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x277E9C0)
#define UIPOPUP_USEITEM_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x277EA50)
#define UIPOPUP_USEITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x277EB90)
#define UIPOPUP_USEITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x277EC10)
#define UIPOPUP_USEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x277F2E0)

	inline static constexpr unsigned int UIPopup_UseItem_TypeDefinitionIndex = 7374;

	class UIPopup_UseItem : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIGrid* requiredConsumParcelGrid; // 0xE0
		::Il2CppArray<::System::Object*>* requiredConsumParcels; // 0xE8
		MXButton* cancelButton; // 0xF0
		MXButton* okButton; // 0xF8
		::UnityEngine::Transform* popupSizeAnchor; // 0x100
		Il2CppObject* eventContentId; // 0x108
		Il2CppObject* shopUniqueIdList; // 0x118

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_HANDLESHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentShopBuyRefreshMerchandiseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_HANDLEEVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USEITEM_.CTOR_OFFSET))(nullptr);
		}

	};

