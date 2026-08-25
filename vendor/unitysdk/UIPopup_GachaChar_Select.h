#pragma once
#include "unitysdk.h"

class MXButton;
class UICharacterCard;
class UINonEquipmentCard;
class UILabel;
class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_GACHACHAR_SELECT_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xAA1360)
#define UIPOPUP_GACHACHAR_SELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAA13F0)
#define UIPOPUP_GACHACHAR_SELECT_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xAA16E0)
#define UIPOPUP_GACHACHAR_SELECT_HANDLEITEMSELECTTICKETRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAA1770)
#define UIPOPUP_GACHACHAR_SELECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA18B0)
#define UIPOPUP_GACHACHAR_SELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA19C0)
#define UIPOPUP_GACHACHAR_SELECT_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xAA19D0)
#define UIPOPUP_GACHACHAR_SELECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAA1B40)
#define UIPOPUP_GACHACHAR_SELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0xAA1CA0)

	inline static constexpr unsigned int UIPopup_GachaChar_Select_TypeDefinitionIndex = 7966;

	class UIPopup_GachaChar_Select : public Il2CppObject
	{
	public:
		::System::Int32 TICKET_CONSUME_COUNT; // 0x0
		MXButton* closeButton; // 0xD8
		UICharacterCard* characterCard; // 0xE0
		UINonEquipmentCard* nonEquipmentCard; // 0xE8
		UILabel* selectDescriptionLabel; // 0xF0
		UILabel* ticketAmountLabel; // 0xF8
		UISprite* ticketIconSprite; // 0x100
		UILabel* ticketCostLabel; // 0x108
		MXButton* cancelButton; // 0x110
		MXButton* confirmButton; // 0x118
		::System::Int64 ticketId; // 0x120
		::System::Int64 selectedCharacterId; // 0x128

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleItemSelectTicketResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_HANDLEITEMSELECTTICKETRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHAR_SELECT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

