#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class MXButton;
class UIEmblemParcel;
namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
class ManagementButtonType;
class UIPopup_System;
namespace FlatData { class ClanSocialGrade; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }
namespace MX::NetworkProtocol { class ClanDismissResponse; }

#define CLANMEMBERMANAGEMENTPOPUP_CLANMEMBERMANAGEMENTPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x2336860)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_1_OFFSET UNITYSDK_OFFSET(0x2336D10)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANMANAGER_OFFSET UNITYSDK_OFFSET(0x2336E00)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_6_OFFSET UNITYSDK_OFFSET(0x2336F50)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_1_OFFSET UNITYSDK_OFFSET(0x2337110)
#define CLANMEMBERMANAGEMENTPOPUP_SETMEMBERBUTTONINFO_OFFSET UNITYSDK_OFFSET(0x2337200)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_0_OFFSET UNITYSDK_OFFSET(0x23377D0)
#define CLANMEMBERMANAGEMENTPOPUP_SETMEMBERTAGINFO_OFFSET UNITYSDK_OFFSET(0x23378C0)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2337960)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_8_OFFSET UNITYSDK_OFFSET(0x2337A70)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_3_OFFSET UNITYSDK_OFFSET(0x2337C10)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x2337CC0)
#define CLANMEMBERMANAGEMENTPOPUP_HANDLECLANCONFERRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2337CD0)
#define CLANMEMBERMANAGEMENTPOPUP_ERRORCLANQUIT_OFFSET UNITYSDK_OFFSET(0x2337E10)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_9_OFFSET UNITYSDK_OFFSET(0x2337EB0)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_7_OFFSET UNITYSDK_OFFSET(0x2338020)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_3_OFFSET UNITYSDK_OFFSET(0x2338170)
#define CLANMEMBERMANAGEMENTPOPUP_ERRORCLANKICK_OFFSET UNITYSDK_OFFSET(0x2338260)
#define CLANMEMBERMANAGEMENTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2338300)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANMEMBERPROFILE_OFFSET UNITYSDK_OFFSET(0x2338A10)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANCHIEF_B__32_0_OFFSET UNITYSDK_OFFSET(0x2338AB0)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANCHIEF_B__32_1_OFFSET UNITYSDK_OFFSET(0x2338BA0)
#define CLANMEMBERMANAGEMENTPOPUP__SETMEMBERBUTTONINFO_B__28_0_OFFSET UNITYSDK_OFFSET(0x2338C50)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANCHIEF_OFFSET UNITYSDK_OFFSET(0x2338CF0)
#define CLANMEMBERMANAGEMENTPOPUP_ERRORCLANDISMISS_OFFSET UNITYSDK_OFFSET(0x2338DD0)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_2_OFFSET UNITYSDK_OFFSET(0x2338E70)
#define CLANMEMBERMANAGEMENTPOPUP_SETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x23369C0)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_4_OFFSET UNITYSDK_OFFSET(0x2338F60)
#define CLANMEMBERMANAGEMENTPOPUP__SETMEMBERBUTTONINFO_B__28_1_OFFSET UNITYSDK_OFFSET(0x2339020)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_5_OFFSET UNITYSDK_OFFSET(0x23390E0)
#define CLANMEMBERMANAGEMENTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2339250)
#define CLANMEMBERMANAGEMENTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2339260)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANMEMBERMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x2339410)
#define CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_2_OFFSET UNITYSDK_OFFSET(0x23396C0)
#define CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANSUPPORTINFO_OFFSET UNITYSDK_OFFSET(0x2339770)

	inline static constexpr unsigned int ClanMemberManagementPopup_TypeDefinitionIndex = 4961;

	class ClanMemberManagementPopup : public Il2CppObject
	{
	public:
		UICharacterCard* clanMemberCharacterCard; // 0x18
		UILabel* clanMemberNameLabel; // 0x20
		UILabel* clanMemberLvLabel; // 0x28
		UILabel* clanMembeCharcterNumLabel; // 0x30
		UILabel* clanMemberJoinedLabel; // 0x38
		UILabel* clanMemberAttendanceLabel; // 0x40
		MXButton* cancelButton; // 0x48
		MXButton* clanClanChiefButton; // 0x50
		MXButton* clanManagerButton; // 0x58
		UILabel* clanManagerButtonLabel; // 0x60
		MXButton* clanMemberManagementButton; // 0x68
		UILabel* clanMemberManagementLabel; // 0x70
		MXButton* clanBattleInfoButton; // 0x78
		MXButton* clanSupportInfoButton; // 0x80
		MXButton* confirmButton; // 0x88
		MXButton* clanMemberProfileButton; // 0x90
		::Il2CppArray<::System::Object*>* clanMemberTagObjects; // 0x98
		UIEmblemParcel* emblemParcel; // 0xA0
		::MX::GameLogic::DBModel::ClanDB* clanDB; // 0xA8
		::MX::GameLogic::DBModel::ClanMemberDB* memberDB; // 0xB0
		::MX::GameLogic::DBModel::DetailedAccountInfoDB* detailedAccountInfoDB; // 0xB8
		::System::Boolean management; // 0xC0
		ManagementButtonType* managementButtonType; // 0xC4

		::System::Void ClanMemberManagementPopupOpen(::MX::GameLogic::DBModel::ClanDB* arg, ::MX::GameLogic::DBModel::ClanMemberDB* arg2, ::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_CLANMEMBERMANAGEMENTPOPUPOPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnClickClanManager_b__33_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClanManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANMANAGER_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_6_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetMemberButtonInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_SETMEMBERBUTTONINFO_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanManager_b__33_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetMemberTagInfo(::FlatData::ClanSocialGrade* arg)
		{
			((::System::Void(*)(::FlatData::ClanSocialGrade*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_SETMEMBERTAGINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_8()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_8_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanManager_b__33_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_3_OFFSET))(nullptr);
		}

		::System::Void OnClickClanBattleInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANBATTLEINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanConferResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_HANDLECLANCONFERRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorClanQuit(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ERRORCLANQUIT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_9(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_9_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_7(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_7_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_3(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorClanKick(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ERRORCLANKICK_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClanMemberProfile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANMEMBERPROFILE_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanChief_b__32_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANCHIEF_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickClanChief_b__32_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANCHIEF_B__32_1_OFFSET))(nullptr);
		}

		::System::Void _SetMemberButtonInfo_b__28_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__SETMEMBERBUTTONINFO_B__28_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClanChief()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANCHIEF_OFFSET))(nullptr);
		}

		::System::Boolean ErrorClanDismiss(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ERRORCLANDISMISS_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_2_OFFSET))(arg, nullptr);
		}

		::System::Void SetMemberInfo(::MX::GameLogic::DBModel::ClanMemberDB* arg, ::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_SETMEMBERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_4_OFFSET))(nullptr);
		}

		::System::Void _SetMemberButtonInfo_b__28_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__SETMEMBERBUTTONINFO_B__28_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanMemberManagement_b__34_5(::MX::NetworkProtocol::ClanDismissResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ClanDismissResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMEMBERMANAGEMENT_B__34_5_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickClanMemberManagement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANMEMBERMANAGEMENT_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanManager_b__33_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP__ONCLICKCLANMANAGER_B__33_2_OFFSET))(nullptr);
		}

		::System::Void OnClickClanSupportInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERMANAGEMENTPOPUP_ONCLICKCLANSUPPORTINFO_OFFSET))(nullptr);
		}

	};

