#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::NetworkProtocol { class IrcServerConfig; }
namespace MX::NetworkProtocol { class ClanMemberListResponse; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace FlatData { class ClanSocialGrade; }
namespace MX::NetworkProtocol { class ClanLoginResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANINFOOBJECT_REQUESTCLANCANCELAPPLY_OFFSET UNITYSDK_OFFSET(0x1AD1600)
#define CLANINFOOBJECT_GETCHATINPUTDATE_OFFSET UNITYSDK_OFFSET(0x1AD1760)
#define CLANINFOOBJECT_CHATSERVERFAILED_OFFSET UNITYSDK_OFFSET(0x1AD1AB0)
#define CLANINFOOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD1B30)
#define CLANINFOOBJECT_SET_MYCLANATTENDANCEREWARD_OFFSET UNITYSDK_OFFSET(0x1AD1C00)
#define CLANINFOOBJECT_GETMYCLANSTATE_OFFSET UNITYSDK_OFFSET(0x1AD1C10)
#define CLANINFOOBJECT_SET_MYCLANINFODB_OFFSET UNITYSDK_OFFSET(0x1AD1C20)
#define CLANINFOOBJECT_CLANCHATTINGCHANNELJOIN_OFFSET UNITYSDK_OFFSET(0x1AD1C30)
#define CLANINFOOBJECT_SYNCCLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0x1AD1F10)
#define CLANINFOOBJECT_GETDEPLOYDATE_OFFSET UNITYSDK_OFFSET(0x1AD1F80)
#define CLANINFOOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD20C0)
#define CLANINFOOBJECT_SYNCUICLANMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x1AD21C0)
#define CLANINFOOBJECT_SET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0x1AD23D0)
#define CLANINFOOBJECT_CLANAUTOJOINSYNC_OFFSET UNITYSDK_OFFSET(0x1AD23E0)
#define CLANINFOOBJECT_SET_LASTSYNCTIME_OFFSET UNITYSDK_OFFSET(0x1AD25D0)
#define CLANINFOOBJECT_GET_MYCLANINFODB_OFFSET UNITYSDK_OFFSET(0x1AD25E0)
#define CLANINFOOBJECT_GET_MYCLANATTENDANCEREWARD_OFFSET UNITYSDK_OFFSET(0x1AD25F0)
#define CLANINFOOBJECT_ERRORCLANAUTOJOIN_OFFSET UNITYSDK_OFFSET(0x1AD2600)
#define CLANINFOOBJECT_GET_MYCLANAPPLICANTREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD2870)
#define CLANINFOOBJECT_REQUESTCLANCONFER_OFFSET UNITYSDK_OFFSET(0x1AD2880)
#define CLANINFOOBJECT_CLANINFOLOGINSYNC_OFFSET UNITYSDK_OFFSET(0x1AD29F0)
#define CLANINFOOBJECT__CLANCHATTINGCHANNELJOIN_B__47_0_OFFSET UNITYSDK_OFFSET(0x1AD2A50)
#define CLANINFOOBJECT_SET_MYCLANMANAGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD2BD0)
#define CLANINFOOBJECT_REQUESTCLANJOIN_OFFSET UNITYSDK_OFFSET(0x1AD2BE0)
#define CLANINFOOBJECT_ERRORCLANJOIN_OFFSET UNITYSDK_OFFSET(0x1AD2D40)
#define CLANINFOOBJECT_SHOWERRORCODEPOPUPCHECK_OFFSET UNITYSDK_OFFSET(0x1AD2620)
#define CLANINFOOBJECT_REFRESHCLANLOBBY_OFFSET UNITYSDK_OFFSET(0x1AD2D60)
#define CLANINFOOBJECT_SET_MYCLANAPPLICANTREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD2E30)
#define CLANINFOOBJECT_GET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0x1AD2E40)
#define CLANINFOOBJECT_CLANCANCELAPPLYSYNC_OFFSET UNITYSDK_OFFSET(0x1AD2E50)
#define CLANINFOOBJECT_GET_LASTSYNCTIME_OFFSET UNITYSDK_OFFSET(0x1AD2EC0)
#define CLANINFOOBJECT_GET_NEEDTOSYNCMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x1AD2ED0)
#define CLANINFOOBJECT_REQUESTCLANAUTOJOIN_OFFSET UNITYSDK_OFFSET(0x1AD2F10)
#define CLANINFOOBJECT_ERRORCLANPERMIT_OFFSET UNITYSDK_OFFSET(0x1AD3070)
#define CLANINFOOBJECT_GETMYCLANSOCIALGRADE_OFFSET UNITYSDK_OFFSET(0x1AD3090)
#define CLANINFOOBJECT_ERRORCLANCONFER_OFFSET UNITYSDK_OFFSET(0x1AD30B0)
#define CLANINFOOBJECT_CLANJOINSYNC_OFFSET UNITYSDK_OFFSET(0x1AD30D0)
#define CLANINFOOBJECT_CLANINFOSYNC_OFFSET UNITYSDK_OFFSET(0x1AD3260)
#define CLANINFOOBJECT_SET_MYCLANASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0x1AD32A0)
#define CLANINFOOBJECT_GET_MYCLANATTENDANCEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD32B0)
#define CLANINFOOBJECT_RUNROUTINE_OFFSET UNITYSDK_OFFSET(0x1AD1E80)
#define CLANINFOOBJECT_GET_MYCLANMANAGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD32E0)
#define CLANINFOOBJECT_CLANPERMITSYNC_OFFSET UNITYSDK_OFFSET(0x1AD32F0)
#define CLANINFOOBJECT_CLANLOBBYSYNC_OFFSET UNITYSDK_OFFSET(0x1AD33B0)
#define CLANINFOOBJECT_ERRORCLANCANCELAPPLY_OFFSET UNITYSDK_OFFSET(0x1AD3620)
#define CLANINFOOBJECT_CLANCONFERSYNC_OFFSET UNITYSDK_OFFSET(0x1AD3640)
#define CLANINFOOBJECT_GET_MYCLANASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0x1AD3650)
#define CLANINFOOBJECT_REQUESTCLANPERMIT_OFFSET UNITYSDK_OFFSET(0x1AD3660)
#define CLANINFOOBJECT_SET_MYCLANMEMBERINFODB_OFFSET UNITYSDK_OFFSET(0x1AD37D0)
#define CLANINFOOBJECT_SET_MYCLANATTENDANCEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD37E0)
#define CLANINFOOBJECT_GET_MYCLANMEMBERINFODB_OFFSET UNITYSDK_OFFSET(0x1AD37F0)
#define CLANINFOOBJECT_REQUESTCLANLOBBYUIMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x1AD24D0)

	inline static constexpr unsigned int ClanInfoObject_TypeDefinitionIndex = 1428;

	class ClanInfoObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _MyClanInfoDB_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::ClanMemberDB* _MyClanMemberInfoDB_k__BackingField; // 0x18
		::System::Int32 _MyClanManagerCount_k__BackingField; // 0x20
		::System::Boolean _MyClanAttendanceReward_k__BackingField; // 0x24
		::System::Boolean _MyClanAttendanceRewardRedDot_k__BackingField; // 0x25
		::System::Boolean _MyClanApplicantRedDot_k__BackingField; // 0x26
		Il2CppObject* _MyClanAssistSlotDBs_k__BackingField; // 0x28
		Il2CppObject* _ClanMemberDBs_k__BackingField; // 0x30
		Il2CppObject* OnSyncUIClanMemberList; // 0x38
		::System::DateTime* _LastSyncTime_k__BackingField; // 0x40

		::System::Void RequestClanCancelApply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REQUESTCLANCANCELAPPLY_OFFSET))(nullptr);
		}

		::System::String* GetChatInputDate(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GETCHATINPUTDATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ChatServerFailed()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CHATSERVERFAILED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_MyClanAttendanceReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANATTENDANCEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMyClanState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GETMYCLANSTATE_OFFSET))(nullptr);
		}

		::System::Void set_MyClanInfoDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void ClanChattingChannelJoin(::MX::NetworkProtocol::IrcServerConfig* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::IrcServerConfig*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANCHATTINGCHANNELJOIN_OFFSET))(arg, nullptr);
		}

		::System::Void SyncClanMemberDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SYNCCLANMEMBERDBS_OFFSET))(arg, nullptr);
		}

		::System::String* GetDeployDate(::System::TimeSpan* arg)
		{
			return ((::System::String*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GETDEPLOYDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncUiClanMemberList(::MX::NetworkProtocol::ClanMemberListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ClanMemberListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SYNCUICLANMEMBERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanMemberDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_CLANMEMBERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void ClanAutoJoinSync(::MX::NetworkProtocol::IrcServerConfig* arg, ::MX::GameLogic::DBModel::ClanDB* arg2, ::MX::GameLogic::DBModel::ClanMemberDB* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::IrcServerConfig*, ::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANAUTOJOINSYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_LastSyncTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_LASTSYNCTIME_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_MyClanInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANINFODB_OFFSET))(nullptr);
		}

		::System::Boolean get_MyClanAttendanceReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANATTENDANCEREWARD_OFFSET))(nullptr);
		}

		::System::Boolean ErrorClanAutoJoin(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_ERRORCLANAUTOJOIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MyClanApplicantRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANAPPLICANTREDDOT_OFFSET))(nullptr);
		}

		::System::Void RequestClanConfer(::FlatData::ClanSocialGrade* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ClanSocialGrade*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REQUESTCLANCONFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClanInfoLoginSync(::MX::NetworkProtocol::ClanLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ClanLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANINFOLOGINSYNC_OFFSET))(arg, nullptr);
		}

		::System::Void _ClanChattingChannelJoin_b__47_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT__CLANCHATTINGCHANNELJOIN_B__47_0_OFFSET))(nullptr);
		}

		::System::Void set_MyClanManagerCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANMANAGERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestClanJoin(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REQUESTCLANJOIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorClanJoin(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_ERRORCLANJOIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowErrorCodePopupCheck(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SHOWERRORCODEPOPUPCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshClanLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REFRESHCLANLOBBY_OFFSET))(nullptr);
		}

		::System::Void set_MyClanApplicantRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANAPPLICANTREDDOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClanMemberDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_CLANMEMBERDBS_OFFSET))(nullptr);
		}

		::System::Void ClanCancelApplySync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANCANCELAPPLYSYNC_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastSyncTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_LASTSYNCTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedToSyncMemberList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_NEEDTOSYNCMEMBERLIST_OFFSET))(nullptr);
		}

		::System::Void RequestClanAutoJoin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REQUESTCLANAUTOJOIN_OFFSET))(nullptr);
		}

		::System::Boolean ErrorClanPermit(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_ERRORCLANPERMIT_OFFSET))(arg, nullptr);
		}

		::FlatData::ClanSocialGrade* GetMyClanSocialGrade()
		{
			return ((::FlatData::ClanSocialGrade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GETMYCLANSOCIALGRADE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorClanConfer(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_ERRORCLANCONFER_OFFSET))(arg, nullptr);
		}

		::System::Void ClanJoinSync(::MX::NetworkProtocol::IrcServerConfig* arg, ::MX::GameLogic::DBModel::ClanDB* arg2, ::MX::GameLogic::DBModel::ClanMemberDB* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::IrcServerConfig*, ::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANJOINSYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ClanInfoSync(::MX::GameLogic::DBModel::ClanDB* arg, ::MX::GameLogic::DBModel::ClanMemberDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANINFOSYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MyClanAssistSlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANASSISTSLOTDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MyClanAttendanceRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANATTENDANCEREWARDREDDOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* RunRoutine(::System::Collections::IEnumerator* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_RUNROUTINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_MyClanManagerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANMANAGERCOUNT_OFFSET))(nullptr);
		}

		::System::Void ClanPermitSync(::MX::GameLogic::DBModel::ClanDB* arg, ::MX::GameLogic::DBModel::ClanMemberDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANPERMITSYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClanLobbySync(::MX::GameLogic::DBModel::ClanDB* arg, ::MX::GameLogic::DBModel::ClanMemberDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::MX::NetworkProtocol::IrcServerConfig* arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, Il2CppObject*, Il2CppObject*, ::MX::NetworkProtocol::IrcServerConfig*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANLOBBYSYNC_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean ErrorClanCancelApply(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_ERRORCLANCANCELAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void ClanConferSync(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_CLANCONFERSYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MyClanAssistSlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANASSISTSLOTDBS_OFFSET))(nullptr);
		}

		::System::Void RequestClanPermit(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REQUESTCLANPERMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MyClanMemberInfoDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANMEMBERINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_MyClanAttendanceRewardRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_SET_MYCLANATTENDANCEREWARDREDDOT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_MyClanMemberInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_GET_MYCLANMEMBERINFODB_OFFSET))(nullptr);
		}

		::System::Void RequestClanLobbyUiMemberList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANINFOOBJECT_REQUESTCLANLOBBYUIMEMBERLIST_OFFSET))(arg, nullptr);
		}

	};

