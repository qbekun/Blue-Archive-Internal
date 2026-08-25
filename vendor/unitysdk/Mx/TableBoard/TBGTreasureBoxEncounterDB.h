#pragma once
#include "../../unitysdk.h"

class TBGTreasureEncounterStage;
namespace MX::TableBoard { class TBGEncounterState; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::TableBoard { class TBGHexaObjectDB; }
namespace MX::Data { class ITBGObjectInfo; }
namespace MX::Core::Math { class IRandomService; }

#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET UNITYSDK_OFFSET(0xF0E510)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET UNITYSDK_OFFSET(0xF0E520)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xF0E540)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xF0E550)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_ISREALTREASURE_OFFSET UNITYSDK_OFFSET(0xF0E560)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_SET_ISREALTREASURE_OFFSET UNITYSDK_OFFSET(0xF0E570)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0E580)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFF980)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_CLEARTHEMA_OFFSET UNITYSDK_OFFSET(0xF0E590)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF0E630)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0xF0E6B0)
#define MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_PRERECEIVEREWARDPHASE_OFFSET UNITYSDK_OFFSET(0xF0E830)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGTreasureBoxEncounterDB_TypeDefinitionIndex = 11220;

	class TBGTreasureBoxEncounterDB : public Il2CppObject
	{
	public:
		TBGTreasureEncounterStage* _Stage_k__BackingField; // 0x38
		::System::Boolean _IsRealTreasure_k__BackingField; // 0x3C

		::System::Int32 get_EncounterStageCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGEncounterState* get_EncounterState()
		{
			return ((::MX::TableBoard::TBGEncounterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET))(nullptr);
		}

		TBGTreasureEncounterStage* get_Stage()
		{
			return ((TBGTreasureEncounterStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(TBGTreasureEncounterStage* arg)
		{
			((::System::Void(*)(TBGTreasureEncounterStage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRealTreasure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_GET_ISREALTREASURE_OFFSET))(nullptr);
		}

		::System::Void set_IsRealTreasure(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_SET_ISREALTREASURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ClearThema(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_CLEARTHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2, ::MX::Data::ITBGObjectInfo* arg3)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ProcessInput(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Int32 arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_PROCESSINPUT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean PreReceiveRewardPhase(::MX::TableBoard::TBGBoardSaveDB* arg, ::System::String&* arg2)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGBoardSaveDB*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGTREASUREBOXENCOUNTERDB_PRERECEIVEREWARDPHASE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

