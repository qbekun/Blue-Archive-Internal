#pragma once
#include "unitysdk.h"

class UIInput;
class UILabel;
class MXButton;
class ClanJoinOptionTabController;
namespace MX::NetworkProtocol { class ErrorPacket; }
class UIPopup_System;
namespace MX::GameLogic::DBModel { class ClanDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CLANMANAGEMENTPOPUP__ONCLICKCONFIRM_B__15_1_OFFSET UNITYSDK_OFFSET(0x2333CA0)
#define CLANMANAGEMENTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2334110)
#define CLANMANAGEMENTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23345D0)
#define CLANMANAGEMENTPOPUP_ERRORACCOUNTCLANSETTING_OFFSET UNITYSDK_OFFSET(0x2334780)
#define CLANMANAGEMENTPOPUP__ONCLICKCONFIRM_B__15_0_OFFSET UNITYSDK_OFFSET(0x2334820)
#define CLANMANAGEMENTPOPUP_ONCHANGENAMEINPUT_OFFSET UNITYSDK_OFFSET(0x2334A10)
#define CLANMANAGEMENTPOPUP_CLANMANAGEMENTPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x2334A70)
#define CLANMANAGEMENTPOPUP_UPDATENOTICEINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x2334C10)
#define CLANMANAGEMENTPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2334CD0)
#define CLANMANAGEMENTPOPUP_ONCHANGENOTICEINPUT_OFFSET UNITYSDK_OFFSET(0x2334DB0)
#define CLANMANAGEMENTPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2334DC0)
#define CLANMANAGEMENTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2334DF0)
#define CLANMANAGEMENTPOPUP_HANDLECLANRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2334E00)

	inline static constexpr unsigned int ClanManagementPopup_TypeDefinitionIndex = 4955;

	class ClanManagementPopup : public Il2CppObject
	{
	public:
		UIInput* clanNameInput; // 0x18
		UIInput* clanNoticeInput; // 0x20
		UILabel* clanNameInputPlaceholder; // 0x28
		UILabel* clanNoticeCountLabel; // 0x30
		MXButton* cancelButton; // 0x38
		MXButton* confirmButton; // 0x40
		MXButton* buttonX; // 0x48
		ClanJoinOptionTabController* joinOptionTab; // 0x50
		Il2CppObject* callbackRefreshClanInfo; // 0x58

		::System::Void _OnClickConfirm_b__15_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP__ONCLICKCONFIRM_B__15_1_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorAccountClanSetting(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_ERRORACCOUNTCLANSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickConfirm_b__15_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP__ONCLICKCONFIRM_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeNameInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_ONCHANGENAMEINPUT_OFFSET))(nullptr);
		}

		::System::Void ClanManagementPopupOpen(::MX::GameLogic::DBModel::ClanDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_CLANMANAGEMENTPOPUPOPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateNoticeInputCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_UPDATENOTICEINPUTCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnChangeNoticeInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_ONCHANGENOTICEINPUT_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMANAGEMENTPOPUP_HANDLECLANRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

