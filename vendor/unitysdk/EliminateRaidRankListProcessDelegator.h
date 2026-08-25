#pragma once
#include "unitysdk.h"

class EliminateRaidOpponentListResponseMessage;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class RaidRankListScrollViewController;

#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_RESETPROCESSINFO_OFFSET UNITYSDK_OFFSET(0x278B0A0)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEELIMINATERAIDOPPONENTLISTBYRANK_OFFSET UNITYSDK_OFFSET(0x278B100)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_SETMINMAXSCORE_OFFSET UNITYSDK_OFFSET(0x278B520)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTSCORELIST_OFFSET UNITYSDK_OFFSET(0x278BAE0)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEELIMINATERAIDOPPONENTLISTBYSCORE_OFFSET UNITYSDK_OFFSET(0x278BBD0)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTNEXTLIST_OFFSET UNITYSDK_OFFSET(0x278C140)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEOPPONENTLISTMESSAGE_OFFSET UNITYSDK_OFFSET(0x278C290)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTPREVLIST_OFFSET UNITYSDK_OFFSET(0x278C870)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEELIMINATERAIDOPPONENTLISTBYBRACKET_OFFSET UNITYSDK_OFFSET(0x278C330)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTBRACKETLIST_OFFSET UNITYSDK_OFFSET(0x278CDA0)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x278CE70)
#define ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTRANKLIST_OFFSET UNITYSDK_OFFSET(0x278CED0)

	inline static constexpr unsigned int EliminateRaidRankListProcessDelegator_TypeDefinitionIndex = 7424;

	class EliminateRaidRankListProcessDelegator : public Il2CppObject
	{
	public:
		::System::Int64 firstBracketRank; // 0x58
		::System::Int64 lastBracketRank; // 0x60
		::System::Int32 jumpMoveIndex; // 0x68

		::System::Void ResetProcessInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_RESETPROCESSINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleEliminateRaidOpponentListByRank(EliminateRaidOpponentListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(EliminateRaidOpponentListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEELIMINATERAIDOPPONENTLISTBYRANK_OFFSET))(arg, nullptr);
		}

		::System::Void SetMinMaxScore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_SETMINMAXSCORE_OFFSET))(nullptr);
		}

		::System::Void RequestScoreList(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTSCORELIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HandleEliminateRaidOpponentListByScore(EliminateRaidOpponentListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(EliminateRaidOpponentListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEELIMINATERAIDOPPONENTLISTBYSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestNextList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTNEXTLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleOpponentListMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEOPPONENTLISTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestPrevList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTPREVLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleEliminateRaidOpponentListByBracket(EliminateRaidOpponentListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(EliminateRaidOpponentListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_HANDLEELIMINATERAIDOPPONENTLISTBYBRACKET_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBracketList(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTBRACKETLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(RaidRankListScrollViewController* arg)
		{
			((::System::Void(*)(RaidRankListScrollViewController*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RequestRankList(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKLISTPROCESSDELEGATOR_REQUESTRANKLIST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

