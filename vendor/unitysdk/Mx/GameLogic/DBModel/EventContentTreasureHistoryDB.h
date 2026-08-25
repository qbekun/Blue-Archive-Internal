#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureBoardHistory; }
namespace MX::Data { class EventContentTreasureInfo; }
namespace MX::Data { class EventContentTreasureRoundInfo; }
namespace MX::GameLogic::DBModel { class EventContentTreasureSaveBoard; }
namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_BUILDHINTTREASURE_OFFSET UNITYSDK_OFFSET(0xFFE4E0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFE880)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_HINTTREASURES_OFFSET UNITYSDK_OFFSET(0xFFE890)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_BOARD_OFFSET UNITYSDK_OFFSET(0xFFE8A0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFE8B0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xFFE8C0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFE8D0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xFFE8E0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_CREATETREASUREHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFFE8F0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_METAROUND_OFFSET UNITYSDK_OFFSET(0xFFEAB0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_CANCOMPLETE_OFFSET UNITYSDK_OFFSET(0xFFEB70)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_TREASUREINFO_OFFSET UNITYSDK_OFFSET(0xFFEAE0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFEBD0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_TREASUREROUNDINFO_OFFSET UNITYSDK_OFFSET(0xFFEBE0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFECA0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_CANFLIP_OFFSET UNITYSDK_OFFSET(0xFFECB0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_BOARD_OFFSET UNITYSDK_OFFSET(0xFFED30)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_HINTTREASURES_OFFSET UNITYSDK_OFFSET(0xFFED40)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentTreasureHistoryDB_TypeDefinitionIndex = 12622;

	class EventContentTreasureHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x18
		::MX::GameLogic::DBModel::EventContentTreasureBoardHistory* _Board_k__BackingField; // 0x20
		::System::Boolean _IsComplete_k__BackingField; // 0x28
		Il2CppObject* _HintTreasures_k__BackingField; // 0x30
		::MX::Data::EventContentTreasureInfo* _treasureInfo; // 0x38
		::MX::Data::EventContentTreasureRoundInfo* _treasureRoundInfo; // 0x40

		::System::Void BuildHintTreasure(::MX::GameLogic::DBModel::EventContentTreasureSaveBoard* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureSaveBoard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_BUILDHINTTREASURE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_HintTreasures(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_HINTTREASURES_OFFSET))(arg, nullptr);
		}

		::System::Void set_Board(::MX::GameLogic::DBModel::EventContentTreasureBoardHistory* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureBoardHistory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_BOARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* CreateTreasureHistoryDB(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_CREATETREASUREHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_MetaRound()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_METAROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_CanComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_CANCOMPLETE_OFFSET))(nullptr);
		}

		::MX::Data::EventContentTreasureInfo* get_TreasureInfo()
		{
			return ((::MX::Data::EventContentTreasureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_TREASUREINFO_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentTreasureRoundInfo* get_TreasureRoundInfo()
		{
			return ((::MX::Data::EventContentTreasureRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_TREASUREROUNDINFO_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanFlip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_CANFLIP_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureBoardHistory* get_Board()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureBoardHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_BOARD_OFFSET))(nullptr);
		}

		Il2CppObject* get_HintTreasures()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREHISTORYDB_GET_HINTTREASURES_OFFSET))(nullptr);
		}

	};
}

