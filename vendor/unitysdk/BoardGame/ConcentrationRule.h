#pragma once
#include "../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentConcentrationSaveDB; }
namespace BoardGame { class BoardGameUpdateData; }
namespace BoardGame { class IBoardGameBoard; }
namespace MX::Data::Excel { class EventContentConcentrationCardExcel; }
class UIBase;

#define BOARDGAME_CONCENTRATIONRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE07130)
#define BOARDGAME_CONCENTRATIONRULE_CO_UPDATE_OFFSET UNITYSDK_OFFSET(0xE071C0)
#define BOARDGAME_CONCENTRATIONRULE_GETSKIPREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xE07270)
#define BOARDGAME_CONCENTRATIONRULE_GETBOARD_OFFSET UNITYSDK_OFFSET(0xE07B30)
#define BOARDGAME_CONCENTRATIONRULE_ISNOTENOUGHCOST_OFFSET UNITYSDK_OFFSET(0xE07C00)
#define BOARDGAME_CONCENTRATIONRULE_RESET_OFFSET UNITYSDK_OFFSET(0xE07F60)
#define BOARDGAME_CONCENTRATIONRULE_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0xE07FB0)
#define BOARDGAME_CONCENTRATIONRULE_SYNCSAVEDB_OFFSET UNITYSDK_OFFSET(0xE08150)
#define BOARDGAME_CONCENTRATIONRULE__GETCARDMATCHEDINFOS_B__15_0_OFFSET UNITYSDK_OFFSET(0xE08650)
#define BOARDGAME_CONCENTRATIONRULE_GETCARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE087B0)
#define BOARDGAME_CONCENTRATIONRULE__OPENBOARD_B__9_0_OFFSET UNITYSDK_OFFSET(0xE08920)
#define BOARDGAME_CONCENTRATIONRULE_GETCARDMATCHEDINFOS_OFFSET UNITYSDK_OFFSET(0xE079D0)
#define BOARDGAME_CONCENTRATIONRULE_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE08A50)
#define BOARDGAME_CONCENTRATIONRULE_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE08A60)
#define BOARDGAME_CONCENTRATIONRULE_OPENBOARD_OFFSET UNITYSDK_OFFSET(0xE08A70)

namespace BoardGame
{
	inline static constexpr unsigned int ConcentrationRule_TypeDefinitionIndex = 10267;

	class ConcentrationRule : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		Il2CppObject* cards; // 0x18
		::System::Int32 flipCount; // 0x20
		::System::Int32 roundNumber; // 0x24
		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* syncReservedSaveDB; // 0x28

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Update(::BoardGame::BoardGameUpdateData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_CO_UPDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSkipRewardParcels(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_GETSKIPREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::BoardGame::IBoardGameBoard* GetBoard()
		{
			return ((::BoardGame::IBoardGameBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_GETBOARD_OFFSET))(nullptr);
		}

		::System::Boolean IsNotEnoughCost(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_ISNOTENOUGHCOST_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_RESET_OFFSET))(nullptr);
		}

		::System::Boolean IsGameOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_ISGAMEOVER_OFFSET))(nullptr);
		}

		::System::Void SyncSaveDB(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_SYNCSAVEDB_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* _GetCardMatchedInfos_b__15_0(::MX::Data::Excel::EventContentConcentrationCardExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::EventContentConcentrationCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE__GETCARDMATCHEDINFOS_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::String* GetCardImagePath(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_GETCARDIMAGEPATH_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenBoard_b__9_0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE__OPENBOARD_B__9_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCardMatchedInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_GETCARDMATCHEDINFOS_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void OpenBoard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATIONRULE_OPENBOARD_OFFSET))(nullptr);
		}

	};
}

