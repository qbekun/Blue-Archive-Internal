#pragma once
#include "unitysdk.h"

class RaidRankListScrollViewController;
class RankRequestType;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0x278E860)
#define RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTRANKLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SETMINMAXSCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x278E870)
#define RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTPREVLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_STARTBRACKETJUMP_OFFSET UNITYSDK_OFFSET(0x278E880)
#define RAIDRANKLISTPROCESSDELEGATORBASE_PROHIBITREQUEST_OFFSET UNITYSDK_OFFSET(0x278E950)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_CANNOTNEXTREQUEST_OFFSET UNITYSDK_OFFSET(0x278E960)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_DIFFICULTYFILTERFIRSTRANK_OFFSET UNITYSDK_OFFSET(0x278E970)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x278E980)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x278E990)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x278E9A0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTNEXTLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SENDEMPTYMESSAGE_OFFSET UNITYSDK_OFFSET(0x278B430)
#define RAIDRANKLISTPROCESSDELEGATORBASE_STARTRANKJUMP_OFFSET UNITYSDK_OFFSET(0x278E9B0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_REQUESTTYPE_OFFSET UNITYSDK_OFFSET(0x278EA70)
#define RAIDRANKLISTPROCESSDELEGATORBASE_RESETPROCESSINFO_OFFSET UNITYSDK_OFFSET(0x278B0D0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_LOWSCORE_OFFSET UNITYSDK_OFFSET(0x278EA80)
#define RAIDRANKLISTPROCESSDELEGATORBASE_HANDLEOPPONENTLISTMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x278EA90)
#define RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTSCORELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTBRACKETLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTPROCESSDELEGATORBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x278CEA0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_STARTSCOREJUMP_OFFSET UNITYSDK_OFFSET(0x278EAA0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x278EB10)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_CURRENTFIRSTRANK_OFFSET UNITYSDK_OFFSET(0x278CA50)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_DIFFICULTYFILTERLASTRANK_OFFSET UNITYSDK_OFFSET(0x278EB20)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_CANNOTPREVREQUEST_OFFSET UNITYSDK_OFFSET(0x278EB30)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_CANNOTPREVREQUEST_OFFSET UNITYSDK_OFFSET(0x278EB40)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x278EB50)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_DIFFICULTYFILTERFIRSTRANK_OFFSET UNITYSDK_OFFSET(0x278EB60)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_LOWSCORE_OFFSET UNITYSDK_OFFSET(0x278EB70)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_CANNOTNEXTREQUEST_OFFSET UNITYSDK_OFFSET(0x278EB80)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x278EB90)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_CURRENTLASTRANK_OFFSET UNITYSDK_OFFSET(0x278C260)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_DIFFICULTYFILTERLASTRANK_OFFSET UNITYSDK_OFFSET(0x278EBA0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x278EBB0)
#define RAIDRANKLISTPROCESSDELEGATORBASE_SET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x278EBC0)

	inline static constexpr unsigned int RaidRankListProcessDelegatorBase_TypeDefinitionIndex = 7428;

	class RaidRankListProcessDelegatorBase : public Il2CppObject
	{
	public:
		RaidRankListScrollViewController* _ScrollView_k__BackingField; // 0x10
		::System::Boolean _CannotPrevRequest_k__BackingField; // 0x18
		::System::Boolean _CannotNextRequest_k__BackingField; // 0x19
		RankRequestType* _RequestType_k__BackingField; // 0x1C
		Il2CppObject* _BossIndex_k__BackingField; // 0x20
		::System::Int64 _MinScore_k__BackingField; // 0x28
		::System::Int64 _MaxScore_k__BackingField; // 0x30
		::System::Int64 _HighScore_k__BackingField; // 0x38
		::System::Int64 _LowScore_k__BackingField; // 0x40
		::System::Int64 _DifficultyFilterFirstRank_k__BackingField; // 0x48
		::System::Int64 _DifficultyFilterLastRank_k__BackingField; // 0x50

		RankRequestType* get_RequestType()
		{
			return ((RankRequestType*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_REQUESTTYPE_OFFSET))(nullptr);
		}

		::System::Void RequestRankList(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTRANKLIST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetMinMaxScore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SETMINMAXSCORE_OFFSET))(nullptr);
		}

		RaidRankListScrollViewController* get_ScrollView()
		{
			return ((RaidRankListScrollViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void RequestPrevList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTPREVLIST_OFFSET))(nullptr);
		}

		::System::Void StartBracketJump(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_STARTBRACKETJUMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ProhibitRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_PROHIBITREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_CannotNextRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_CANNOTNEXTREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void set_DifficultyFilterFirstRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_DIFFICULTYFILTERFIRSTRANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_MAXSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScrollView(RaidRankListScrollViewController* arg)
		{
			((::System::Void(*)(RaidRankListScrollViewController*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_SCROLLVIEW_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_BOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void RequestNextList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTNEXTLIST_OFFSET))(nullptr);
		}

		::System::Void SendEmptyMessage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SENDEMPTYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void StartRankJump(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_STARTRANKJUMP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_RequestType(RankRequestType* arg)
		{
			((::System::Void(*)(RankRequestType*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_REQUESTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetProcessInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_RESETPROCESSINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_LowScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_LOWSCORE_OFFSET))(nullptr);
		}

		::System::Boolean HandleOpponentListMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_HANDLEOPPONENTLISTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_MINSCORE_OFFSET))(nullptr);
		}

		::System::Void RequestScoreList(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTSCORELIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RequestBracketList(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_REQUESTBRACKETLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(RaidRankListScrollViewController* arg)
		{
			((::System::Void(*)(RaidRankListScrollViewController*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void StartScoreJump(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_STARTSCOREJUMP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_HighScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_HIGHSCORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentFirstRank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_CURRENTFIRSTRANK_OFFSET))(nullptr);
		}

		::System::Void set_DifficultyFilterLastRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_DIFFICULTYFILTERLASTRANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CannotPrevRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_CANNOTPREVREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_CannotPrevRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_CANNOTPREVREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HighScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_HIGHSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_DifficultyFilterFirstRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_DIFFICULTYFILTERFIRSTRANK_OFFSET))(nullptr);
		}

		::System::Void set_LowScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_LOWSCORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CannotNextRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_CANNOTNEXTREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_MinScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_MINSCORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentLastRank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_CURRENTLASTRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_DifficultyFilterLastRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_DIFFICULTYFILTERLASTRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_GET_MAXSCORE_OFFSET))(nullptr);
		}

		::System::Void set_BossIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATORBASE_SET_BOSSINDEX_OFFSET))(arg, nullptr);
		}

	};

