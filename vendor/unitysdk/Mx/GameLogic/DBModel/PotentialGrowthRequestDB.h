#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PotentialStatBonusRateType; }

#define MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF39F0)
#define MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFF3A00)
#define MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFF3A10)
#define MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFF3A20)
#define MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_ISINVALID_OFFSET UNITYSDK_OFFSET(0xFF3A30)
#define MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xFF3A60)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int PotentialGrowthRequestDB_TypeDefinitionIndex = 12560;

	class PotentialGrowthRequestDB : public Il2CppObject
	{
	public:
		::FlatData::PotentialStatBonusRateType* _Type_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::FlatData::PotentialStatBonusRateType* get_Type()
		{
			return ((::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsInvalid(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_ISINVALID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Type(::FlatData::PotentialStatBonusRateType* arg)
		{
			((::System::Void(*)(::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_POTENTIALGROWTHREQUESTDB_SET_TYPE_OFFSET))(arg, nullptr);
		}

	};
}

