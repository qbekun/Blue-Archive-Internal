#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendIdCardDB; }
namespace MX::NetworkProtocol { class FriendGetFriendDetailedInfoResponse; }
namespace MX::NetworkProtocol { class FriendUnblockResponse; }
class FriendTab;
namespace MX::NetworkProtocol { class FriendListResponse; }

#define FRIENDINFOOBJECT_SENDACCEPTFRIEND_OFFSET UNITYSDK_OFFSET(0x1D1D990)
#define FRIENDINFOOBJECT_SYNCUSERINFO_OFFSET UNITYSDK_OFFSET(0x1D1DC10)
#define FRIENDINFOOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1DEA0)
#define FRIENDINFOOBJECT_SENDUSERINFOREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1DFB0)
#define FRIENDINFOOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3A0)
#define FRIENDINFOOBJECT_CLEARSEARCHLIST_OFFSET UNITYSDK_OFFSET(0x1D1E4A0)
#define FRIENDINFOOBJECT__SENDUNBLOCKREQUEST_B__54_0_OFFSET UNITYSDK_OFFSET(0x1D1E4F0)
#define FRIENDINFOOBJECT_GETFRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0x1D1E6D0)
#define FRIENDINFOOBJECT_ISMYFRIENDREQUESTUNDERMAX_OFFSET UNITYSDK_OFFSET(0x1D1E7F0)
#define FRIENDINFOOBJECT_GET_RECEIVEDFRIENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1E880)
#define FRIENDINFOOBJECT_GET_ISSEARCHALLOWED_OFFSET UNITYSDK_OFFSET(0x1D1E890)
#define FRIENDINFOOBJECT_ANYFRIENDREQRECEIVED_OFFSET UNITYSDK_OFFSET(0x1D1E8B0)
#define FRIENDINFOOBJECT_GET_NEEDTOSYNCLIST_OFFSET UNITYSDK_OFFSET(0x1D1E960)
#define FRIENDINFOOBJECT_SET_LASTSYNCTIME_OFFSET UNITYSDK_OFFSET(0x1D1E9D0)
#define FRIENDINFOOBJECT_SYNCLIST_OFFSET UNITYSDK_OFFSET(0x1D1E9E0)
#define FRIENDINFOOBJECT_ANYIDCARD_OFFSET UNITYSDK_OFFSET(0x1D1EB30)
#define FRIENDINFOOBJECT_ISMYFRIENDCOUNTUNDERMAX_OFFSET UNITYSDK_OFFSET(0x1D1DB80)
#define FRIENDINFOOBJECT_SYNCIDCARDS_OFFSET UNITYSDK_OFFSET(0x1D1EA70)
#define FRIENDINFOOBJECT_GET_MYIDCARDEMBLEMID_OFFSET UNITYSDK_OFFSET(0x1D1EC00)
#define FRIENDINFOOBJECT_SYNCBLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1D1ECB0)
#define FRIENDINFOOBJECT_SENDUNBLOCKREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1EDC0)
#define FRIENDINFOOBJECT_SENDWITHDRAWREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1EEB0)
#define FRIENDINFOOBJECT_SYNCMYCARD_OFFSET UNITYSDK_OFFSET(0x1D1EFD0)
#define FRIENDINFOOBJECT_GET_LASTSYNCTIME_OFFSET UNITYSDK_OFFSET(0x1D1EFE0)
#define FRIENDINFOOBJECT_ISIDCARDCHANGED_OFFSET UNITYSDK_OFFSET(0x1D1EFF0)
#define FRIENDINFOOBJECT_GET_BLOCKEDUSERS_OFFSET UNITYSDK_OFFSET(0x1D1F0D0)
#define FRIENDINFOOBJECT_GET_ISAUTOACCEPTON_OFFSET UNITYSDK_OFFSET(0x1D1F0E0)
#define FRIENDINFOOBJECT_GET_MYIDCARDCLONE_OFFSET UNITYSDK_OFFSET(0x1D1F100)
#define FRIENDINFOOBJECT_SENDFRIENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1F160)
#define FRIENDINFOOBJECT_GET_NEEDTOSYNCMYCARD_OFFSET UNITYSDK_OFFSET(0x1D1E9C0)
#define FRIENDINFOOBJECT_GET_MYBGID_OFFSET UNITYSDK_OFFSET(0x1D1F670)
#define FRIENDINFOOBJECT_SET_RECEIVEDFRIENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1F690)
#define FRIENDINFOOBJECT_GETFRIENDDBS_OFFSET UNITYSDK_OFFSET(0x1D1E790)
#define FRIENDINFOOBJECT_SYNCSEARCHLIST_OFFSET UNITYSDK_OFFSET(0x1D1F6A0)
#define FRIENDINFOOBJECT_ISUSERBLOCKED_OFFSET UNITYSDK_OFFSET(0x1D1F700)
#define FRIENDINFOOBJECT_SYNCDBS_OFFSET UNITYSDK_OFFSET(0x1D1E620)
#define FRIENDINFOOBJECT_ISUSERINTAB_OFFSET UNITYSDK_OFFSET(0x1D1F530)
#define FRIENDINFOOBJECT_GET_MYCODE_OFFSET UNITYSDK_OFFSET(0x1D1F760)
#define FRIENDINFOOBJECT_SENDBLOCKREQUEST_OFFSET UNITYSDK_OFFSET(0x1D1F7C0)

	inline static constexpr unsigned int FriendInfoObject_TypeDefinitionIndex = 1669;

	class FriendInfoObject : public Il2CppObject
	{
	public:
		Il2CppObject* friendDBs; // 0x10
		Il2CppObject* blockedUsers; // 0x18
		Il2CppObject* IdCardBackgroundDBs; // 0x20
		::MX::GameLogic::DBModel::FriendIdCardDB* myIdCard; // 0x28
		::System::Boolean _ReceivedFriendRequest_k__BackingField; // 0x30
		::System::DateTime* _LastSyncTime_k__BackingField; // 0x38

		::System::Void SendAcceptFriend(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SENDACCEPTFRIEND_OFFSET))(arg, nullptr);
		}

		::System::Void SyncUserInfo(::MX::NetworkProtocol::FriendGetFriendDetailedInfoResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::FriendGetFriendDetailedInfoResponse*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SendUserInfoRequest(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SENDUSERINFOREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearSearchList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_CLEARSEARCHLIST_OFFSET))(nullptr);
		}

		::System::Void _SendUnblockRequest_b__54_0(::MX::NetworkProtocol::FriendUnblockResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::FriendUnblockResponse*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT__SENDUNBLOCKREQUEST_B__54_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFriendCount(FriendTab* arg)
		{
			return ((::System::Int32(*)(FriendTab*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GETFRIENDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMyFriendRequestUnderMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ISMYFRIENDREQUESTUNDERMAX_OFFSET))(nullptr);
		}

		::System::Boolean get_ReceivedFriendRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_RECEIVEDFRIENDREQUEST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSearchAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_ISSEARCHALLOWED_OFFSET))(nullptr);
		}

		::System::Boolean AnyFriendReqReceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ANYFRIENDREQRECEIVED_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedToSyncList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_NEEDTOSYNCLIST_OFFSET))(nullptr);
		}

		::System::Void set_LastSyncTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SET_LASTSYNCTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SyncList(::MX::NetworkProtocol::FriendListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::FriendListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyIdCard(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ANYIDCARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMyFriendCountUnderMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ISMYFRIENDCOUNTUNDERMAX_OFFSET))(nullptr);
		}

		::System::Void SyncIdCards(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCIDCARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_MyIdCardEmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_MYIDCARDEMBLEMID_OFFSET))(nullptr);
		}

		::System::Void SyncBlockList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCBLOCKLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SendUnblockRequest(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SENDUNBLOCKREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void SendWithdrawRequest(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SENDWITHDRAWREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void SyncMyCard(::MX::GameLogic::DBModel::FriendIdCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendIdCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCMYCARD_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastSyncTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_LASTSYNCTIME_OFFSET))(nullptr);
		}

		::System::Boolean IsIdCardChanged(::MX::GameLogic::DBModel::FriendIdCardDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::FriendIdCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ISIDCARDCHANGED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BlockedUsers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_BLOCKEDUSERS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAutoAcceptOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_ISAUTOACCEPTON_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FriendIdCardDB* get_MyIdCardClone()
		{
			return ((::MX::GameLogic::DBModel::FriendIdCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_MYIDCARDCLONE_OFFSET))(nullptr);
		}

		::System::Void SendFriendRequest(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SENDFRIENDREQUEST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_NeedToSyncMyCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_NEEDTOSYNCMYCARD_OFFSET))(nullptr);
		}

		::System::Int64 get_MyBgId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_MYBGID_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedFriendRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SET_RECEIVEDFRIENDREQUEST_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFriendDBs(FriendTab* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(FriendTab*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GETFRIENDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncSearchList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCSEARCHLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUserBlocked(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ISUSERBLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void SyncDBs(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3, ::Il2CppArray<::System::Object*>* arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SYNCDBS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsUserInTab(FriendTab* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(FriendTab*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_ISUSERINTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_MyCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_GET_MYCODE_OFFSET))(nullptr);
		}

		::System::Void SendBlockRequest(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDINFOOBJECT_SENDBLOCKREQUEST_OFFSET))(arg, nullptr);
		}

	};

