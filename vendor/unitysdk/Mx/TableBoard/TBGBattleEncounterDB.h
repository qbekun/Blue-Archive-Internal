#pragma once
#include "../../unitysdk.h"

class TBGBattleEncounterStage;
namespace MX::TableBoard { class TBGEncounterState; }
namespace FlatData { class TBGObjectType; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::TableBoard { class TBGHexaObjectDB; }
namespace MX::Data { class ITBGObjectInfo; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::TableBoard { class TBGPreBattleOption; }

#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET UNITYSDK_OFFSET(0xEFADD0)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET UNITYSDK_OFFSET(0xEFADE0)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xEFAE00)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xEFAE10)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFAE20)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFAE30)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEFAE50)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0xEFAEE0)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_PROCESSPREBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0xEFB330)
#define MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_PROCESSINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0xEFB740)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGBattleEncounterDB_TypeDefinitionIndex = 11177;

	class TBGBattleEncounterDB : public Il2CppObject
	{
	public:
		TBGBattleEncounterStage* _Stage_k__BackingField; // 0x38

		::System::Int32 get_EncounterStageCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGEncounterState* get_EncounterState()
		{
			return ((::MX::TableBoard::TBGEncounterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET))(nullptr);
		}

		TBGBattleEncounterStage* get_Stage()
		{
			return ((TBGBattleEncounterStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(TBGBattleEncounterStage* arg)
		{
			((::System::Void(*)(TBGBattleEncounterStage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::FlatData::TBGObjectType* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::FlatData::TBGObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2, ::MX::Data::ITBGObjectInfo* arg3)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ProcessInput(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Int32 arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_PROCESSINPUT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ProcessPreBattlePhase(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::MX::TableBoard::TBGPreBattleOption* arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGPreBattleOption*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_PROCESSPREBATTLEPHASE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ProcessInBattlePhase(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::String&* arg3)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBATTLEENCOUNTERDB_PROCESSINBATTLEPHASE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

