#pragma once
#include "unitysdk.h"

class UIArenaUserInfo;
class MXButton;
class UIAdmissionDisplay;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define UIPOPUP_ARENAENTRY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x21FC950)
#define UIPOPUP_ARENAENTRY___N__0_OFFSET UNITYSDK_OFFSET(0x21FC9E0)
#define UIPOPUP_ARENAENTRY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21FC9F0)
#define UIPOPUP_ARENAENTRY_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21FCC30)
#define UIPOPUP_ARENAENTRY_ENTERFORMATIONSETTING_OFFSET UNITYSDK_OFFSET(0x21FCC50)
#define UIPOPUP_ARENAENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x21FCE60)
#define UIPOPUP_ARENAENTRY_HANDLEARENATICKETPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21FCE70)
#define UIPOPUP_ARENAENTRY_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x21FCF40)
#define UIPOPUP_ARENAENTRY_REQUESTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x21FD500)
#define UIPOPUP_ARENAENTRY_REQUESTECHELONSETTINGTIME_OFFSET UNITYSDK_OFFSET(0x21FD470)
#define UIPOPUP_ARENAENTRY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x21FAD80)
#define UIPOPUP_ARENAENTRY_ONBACK_OFFSET UNITYSDK_OFFSET(0x21FD900)
#define UIPOPUP_ARENAENTRY_HANDLEARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21FDA00)
#define UIPOPUP_ARENAENTRY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21FDA80)
#define UIPOPUP_ARENAENTRY_AWAKE_OFFSET UNITYSDK_OFFSET(0x21FDC70)

	inline static constexpr unsigned int UIPopup_ArenaEntry_TypeDefinitionIndex = 4285;

	class UIPopup_ArenaEntry : public Il2CppObject
	{
	public:
		UIArenaUserInfo* playerInfo; // 0xD8
		UIArenaUserInfo* opponentInfo; // 0xE0
		MXButton* enterButton; // 0xE8
		MXButton* backButton; // 0xF0
		UIAdmissionDisplay* admissionDisplay; // 0xF8

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void EnterFormationSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_ENTERFORMATIONSETTING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleArenaTicketPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_HANDLEARENATICKETPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void RequestEnterBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_REQUESTENTERBATTLE_OFFSET))(nullptr);
		}

		::System::Void RequestEchelonSettingTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_REQUESTECHELONSETTINGTIME_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_ONBACK_OFFSET))(nullptr);
		}

		::System::Boolean HandleArenaSyncEchelonSettingTimeResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_HANDLEARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAENTRY_AWAKE_OFFSET))(nullptr);
		}

	};

