#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_GACHALOGDB_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1000340)
#define MX_GAMELOGIC_DBMODEL_GACHALOGDB_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1000350)
#define MX_GAMELOGIC_DBMODEL_GACHALOGDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1000360)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int GachaLogDB_TypeDefinitionIndex = 12632;

	class GachaLogDB : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GACHALOGDB_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GACHALOGDB_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GACHALOGDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

