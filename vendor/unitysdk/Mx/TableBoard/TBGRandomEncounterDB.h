#pragma once
#include "../../unitysdk.h"

class TBGRandomEncounterStage;
namespace MX::TableBoard { class TBGEncounterState; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::TableBoard { class TBGHexaObjectDB; }
namespace MX::Data { class ITBGObjectInfo; }
namespace MX::Core::Math { class IRandomService; }

#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET UNITYSDK_OFFSET(0xF0D870)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET UNITYSDK_OFFSET(0xF0D880)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xF0D8B0)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xF0D8C0)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_ENCOUNTEROPTIONCHOICE_OFFSET UNITYSDK_OFFSET(0xF0D8D0)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_SET_ENCOUNTEROPTIONCHOICE_OFFSET UNITYSDK_OFFSET(0xF0D8E0)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0D8F0)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFF920)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF0D900)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0xF0D940)
#define MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_PROCESSENCOUNTEROPTION_OFFSET UNITYSDK_OFFSET(0xF0DBD0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGRandomEncounterDB_TypeDefinitionIndex = 11218;

	class TBGRandomEncounterDB : public Il2CppObject
	{
	public:
		TBGRandomEncounterStage* _Stage_k__BackingField; // 0x38
		::System::Int32 _EncounterOptionChoice_k__BackingField; // 0x3C

		::System::Int32 get_EncounterStageCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGEncounterState* get_EncounterState()
		{
			return ((::MX::TableBoard::TBGEncounterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET))(nullptr);
		}

		TBGRandomEncounterStage* get_Stage()
		{
			return ((TBGRandomEncounterStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(TBGRandomEncounterStage* arg)
		{
			((::System::Void(*)(TBGRandomEncounterStage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EncounterOptionChoice()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_GET_ENCOUNTEROPTIONCHOICE_OFFSET))(nullptr);
		}

		::System::Void set_EncounterOptionChoice(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_SET_ENCOUNTEROPTIONCHOICE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2, ::MX::Data::ITBGObjectInfo* arg3)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ProcessInput(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Int32 arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_PROCESSINPUT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ProcessEncounterOption(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::MX::TableBoard::TBGHexaObjectDB* arg3, ::System::Int32 arg4, ::System::String&* arg5)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGRANDOMENCOUNTERDB_PROCESSENCOUNTEROPTION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

