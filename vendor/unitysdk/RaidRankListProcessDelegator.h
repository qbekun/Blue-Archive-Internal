#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class RaidOpponentListResponseMessage;
class RaidRankListScrollViewController;
namespace MX::GameLogic::DBModel { class SingleRaidUserDB; }
namespace MX::GameLogic::DBModel { class RaidUserDB; }

#define RAIDRANKLISTPROCESSDELEGATOR_HANDLEOPPONENTLISTMESSAGE_OFFSET UNITYSDK_OFFSET(0x278D480)
#define RAIDRANKLISTPROCESSDELEGATOR_REQUESTSCORELIST_OFFSET UNITYSDK_OFFSET(0x278DF50)
#define RAIDRANKLISTPROCESSDELEGATOR_HANDLERAIDOPPONENTLISTBYRANK_OFFSET UNITYSDK_OFFSET(0x278D510)
#define RAIDRANKLISTPROCESSDELEGATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x278E030)
#define RAIDRANKLISTPROCESSDELEGATOR_REQUESTNEXTLIST_OFFSET UNITYSDK_OFFSET(0x278E060)
#define RAIDRANKLISTPROCESSDELEGATOR_REQUESTRANKLIST_OFFSET UNITYSDK_OFFSET(0x278E110)
#define RAIDRANKLISTPROCESSDELEGATOR_HANDLERAIDOPPONENTLISTBYSCORE_OFFSET UNITYSDK_OFFSET(0x278DAE0)
#define RAIDRANKLISTPROCESSDELEGATOR_REQUESTBRACKETLIST_OFFSET UNITYSDK_OFFSET(0x278E380)
#define RAIDRANKLISTPROCESSDELEGATOR__HANDLERAIDOPPONENTLISTBYSCORE_B__9_0_OFFSET UNITYSDK_OFFSET(0x278E3C0)
#define RAIDRANKLISTPROCESSDELEGATOR__HANDLERAIDOPPONENTLISTBYRANK_B__8_0_OFFSET UNITYSDK_OFFSET(0x278E3F0)
#define RAIDRANKLISTPROCESSDELEGATOR_REQUESTPREVLIST_OFFSET UNITYSDK_OFFSET(0x278E420)
#define RAIDRANKLISTPROCESSDELEGATOR_SETMINMAXSCORE_OFFSET UNITYSDK_OFFSET(0x278E530)

	inline static constexpr unsigned int RaidRankListProcessDelegator_TypeDefinitionIndex = 7426;

	class RaidRankListProcessDelegator : public Il2CppObject
	{
	public:
		::System::Boolean HandleOpponentListMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_HANDLEOPPONENTLISTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestScoreList(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_REQUESTSCORELIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HandleRaidOpponentListByRank(RaidOpponentListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(RaidOpponentListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_HANDLERAIDOPPONENTLISTBYRANK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(RaidRankListScrollViewController* arg)
		{
			((::System::Void(*)(RaidRankListScrollViewController*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RequestNextList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_REQUESTNEXTLIST_OFFSET))(nullptr);
		}

		::System::Void RequestRankList(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_REQUESTRANKLIST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean HandleRaidOpponentListByScore(RaidOpponentListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(RaidOpponentListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_HANDLERAIDOPPONENTLISTBYSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBracketList(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_REQUESTBRACKETLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _HandleRaidOpponentListByScore_b__9_0(::MX::GameLogic::DBModel::SingleRaidUserDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::SingleRaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR__HANDLERAIDOPPONENTLISTBYSCORE_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _HandleRaidOpponentListByRank_b__8_0(::MX::GameLogic::DBModel::RaidUserDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::RaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR__HANDLERAIDOPPONENTLISTBYRANK_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void RequestPrevList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_REQUESTPREVLIST_OFFSET))(nullptr);
		}

		::System::Void SetMinMaxScore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTPROCESSDELEGATOR_SETMINMAXSCORE_OFFSET))(nullptr);
		}

	};

