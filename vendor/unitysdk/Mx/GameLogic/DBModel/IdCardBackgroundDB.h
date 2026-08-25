#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x10012F0)
#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1001300)
#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1001310)
#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001320)
#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1001330)
#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1001340)
#define MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1001430)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int IdCardBackgroundDB_TypeDefinitionIndex = 12636;

	class IdCardBackgroundDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_IDCARDBACKGROUNDDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

