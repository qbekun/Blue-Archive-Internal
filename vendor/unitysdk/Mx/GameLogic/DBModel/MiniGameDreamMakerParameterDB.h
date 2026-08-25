#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DreamMakerParameterType; }
namespace MX::GameLogic::DBModel { class MiniGameDreamMakerParameterDB; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_SET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1002F40)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1002F50)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1002F60)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_GET_CURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1002F70)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_SET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1002F80)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_SET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1002F90)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1002FA0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_GET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1003010)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameDreamMakerParameterDB_TypeDefinitionIndex = 12655;

	class MiniGameDreamMakerParameterDB : public Il2CppObject
	{
	public:
		::FlatData::DreamMakerParameterType* _ParameterType_k__BackingField; // 0x10
		::System::Int64 _BaseAmount_k__BackingField; // 0x18
		::System::Int64 _CurrentAmount_k__BackingField; // 0x20

		::System::Void set_CurrentAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_SET_CURRENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_GET_CURRENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ParameterType(::FlatData::DreamMakerParameterType* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerParameterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_SET_PARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BaseAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_SET_BASEAMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_CLONE_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerParameterType* get_ParameterType()
		{
			return ((::FlatData::DreamMakerParameterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMEDREAMMAKERPARAMETERDB_GET_PARAMETERTYPE_OFFSET))(nullptr);
		}

	};
}

