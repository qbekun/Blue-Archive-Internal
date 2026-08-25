#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_ARENATICKETPURCHASE_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2204770)
#define UIPOPUP_ARENATICKETPURCHASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2204AE0)
#define UIPOPUP_ARENATICKETPURCHASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2204AF0)
#define UIPOPUP_ARENATICKETPURCHASE_HANDLEARENATICKETPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2204C00)
#define UIPOPUP_ARENATICKETPURCHASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x21FE330)
#define UIPOPUP_ARENATICKETPURCHASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2204D20)
#define UIPOPUP_ARENATICKETPURCHASE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2205010)
#define UIPOPUP_ARENATICKETPURCHASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2205030)

	inline static constexpr unsigned int UIPopup_ArenaTicketPurchase_TypeDefinitionIndex = 4306;

	class UIPopup_ArenaTicketPurchase : public Il2CppObject
	{
	public:
		::System::Int64 PRODUCT_ARENATICKET_ID; // 0x0
		UILabel* messageLabel; // 0xD8
		UILabel* beforeNumTicketLabel; // 0xE0
		UILabel* afterNumTicketLabel; // 0xE8
		UILabel* costLabel; // 0xF0
		MXButton* closeButton; // 0xF8
		MXButton* cancelButton; // 0x100
		MXButton* confirmButton; // 0x108
		::System::Int64 price; // 0x110

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleArenaTicketPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_HANDLEARENATICKETPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENATICKETPURCHASE_ONDISABLE_OFFSET))(nullptr);
		}

	};

