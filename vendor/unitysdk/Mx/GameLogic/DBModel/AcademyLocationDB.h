#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AcademyLocationDB; }

#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE0D40)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xFE0DC0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_GET_RANK_OFFSET UNITYSDK_OFFSET(0xFE0DD0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_SET_RANK_OFFSET UNITYSDK_OFFSET(0xFE0DE0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xFE0DF0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xFE0E00)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xFE0E10)
#define MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0DB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AcademyLocationDB_TypeDefinitionIndex = 12464;

	class AcademyLocationDB : public Il2CppObject
	{
	public:
		::System::Int64 _LocationId_k__BackingField; // 0x10
		::System::Int64 _Rank_k__BackingField; // 0x18
		::System::Int64 _Exp_k__BackingField; // 0x20

		::MX::GameLogic::DBModel::AcademyLocationDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::AcademyLocationDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Rank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYLOCATIONDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

