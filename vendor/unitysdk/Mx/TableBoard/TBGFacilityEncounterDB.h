#pragma once
#include "../../unitysdk.h"

class TBGFacilityEncounterStage;
namespace MX::TableBoard { class TBGEncounterState; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::TableBoard { class TBGHexaObjectDB; }
namespace MX::Data { class ITBGObjectInfo; }
namespace MX::Core::Math { class IRandomService; }

#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET UNITYSDK_OFFSET(0xF02340)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET UNITYSDK_OFFSET(0xF02350)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xF02380)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xF02390)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_ENCOUNTEROPTIONCHOICE_OFFSET UNITYSDK_OFFSET(0xF023A0)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_SET_ENCOUNTEROPTIONCHOICE_OFFSET UNITYSDK_OFFSET(0xF023B0)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF023C0)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFF950)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF023D0)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0xF023E0)
#define MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_PROCESSENCOUNTEROPTION_OFFSET UNITYSDK_OFFSET(0xF02620)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGFacilityEncounterDB_TypeDefinitionIndex = 11189;

	class TBGFacilityEncounterDB : public Il2CppObject
	{
	public:
		TBGFacilityEncounterStage* _Stage_k__BackingField; // 0x38
		::System::Int32 _EncounterOptionChoice_k__BackingField; // 0x3C

		::System::Int32 get_EncounterStageCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGEncounterState* get_EncounterState()
		{
			return ((::MX::TableBoard::TBGEncounterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET))(nullptr);
		}

		TBGFacilityEncounterStage* get_Stage()
		{
			return ((TBGFacilityEncounterStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(TBGFacilityEncounterStage* arg)
		{
			((::System::Void(*)(TBGFacilityEncounterStage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EncounterOptionChoice()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_GET_ENCOUNTEROPTIONCHOICE_OFFSET))(nullptr);
		}

		::System::Void set_EncounterOptionChoice(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_SET_ENCOUNTEROPTIONCHOICE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2, ::MX::Data::ITBGObjectInfo* arg3)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ProcessInput(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Int32 arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_PROCESSINPUT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ProcessEncounterOption(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2, ::System::Int32 arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGFACILITYENCOUNTERDB_PROCESSENCOUNTEROPTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

