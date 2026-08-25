#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF3C90)
#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFF3CA0)
#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF3CB0)
#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFF3CC0)
#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFF3CD0)
#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE3550)
#define MX_GAMELOGIC_DBMODEL_COSTUMEDB_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFF3DC0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CostumeDB_TypeDefinitionIndex = 12564;

	class CostumeDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _BoundCharacterServerId_k__BackingField; // 0x18

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_BoundCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BoundCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_COSTUMEDB_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

	};
}

