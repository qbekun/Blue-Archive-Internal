#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class ClanMemberScrollController;
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ClanDB; }

#define CLANJOINMANAGEMENTPOPUP_REFRESHCLANAPPLICANTLIST_OFFSET UNITYSDK_OFFSET(0x2332C60)
#define CLANJOINMANAGEMENTPOPUP_REQUESTCLANAPPLICANTLIST_OFFSET UNITYSDK_OFFSET(0x2332E90)
#define CLANJOINMANAGEMENTPOPUP_ERRORAPPLICATLIST_OFFSET UNITYSDK_OFFSET(0x2332FF0)
#define CLANJOINMANAGEMENTPOPUP_SETCLANAPPLICATLIST_OFFSET UNITYSDK_OFFSET(0x2333090)
#define CLANJOINMANAGEMENTPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2333370)
#define CLANJOINMANAGEMENTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23333C0)
#define CLANJOINMANAGEMENTPOPUP_HANDLECLANAPPLICATLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2333640)
#define CLANJOINMANAGEMENTPOPUP_CLANJOINMANAGEMENTPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x2333740)
#define CLANJOINMANAGEMENTPOPUP_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2332E20)
#define CLANJOINMANAGEMENTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x23339C0)
#define CLANJOINMANAGEMENTPOPUP_SETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x23338C0)
#define CLANJOINMANAGEMENTPOPUP_REFRESHCLANAPPLICATINFO_OFFSET UNITYSDK_OFFSET(0x23339D0)
#define CLANJOINMANAGEMENTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2333A10)

	inline static constexpr unsigned int ClanJoinManagementPopup_TypeDefinitionIndex = 4951;

	class ClanJoinManagementPopup : public Il2CppObject
	{
	public:
		UILabel* clanMemberCountLabel; // 0x18
		MXButton* cancelButton; // 0x20
		::UnityEngine::GameObject* emptyObject; // 0x28
		ClanMemberScrollController* controller; // 0x30
		Il2CppObject* clanApplicantList; // 0x38
		::System::Int64 callPageOffSet; // 0x40
		::System::Int64 clanDBId; // 0x48
		::System::Int64 originalClanMemberMax; // 0x50
		::System::Int64 addClanMemberMax; // 0x58
		::System::Action* onRefreshJoinManagementRadDot; // 0x60

		::System::Void RefreshClanApplicantList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_REFRESHCLANAPPLICANTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RequestClanApplicantList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_REQUESTCLANAPPLICANTLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorApplicatList(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_ERRORAPPLICATLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetClanApplicatList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_SETCLANAPPLICATLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanApplicatListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_HANDLECLANAPPLICATLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ClanJoinManagementPopupOpen(::MX::GameLogic::DBModel::ClanDB* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_CLANJOINMANAGEMENTPOPUPOPEN_OFFSET))(arg, arg2, nullptr);
		}

		ClanMemberScrollController* get_scrollController()
		{
			return ((ClanMemberScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMemberCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_SETMEMBERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshClanApplicatInfo(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_REFRESHCLANAPPLICATINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINMANAGEMENTPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

