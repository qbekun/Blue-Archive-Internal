#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x100AB80)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x100AB90)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x100ABA0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x100ABB0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_GET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x100ABC0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_SET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x100ABD0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100ABE0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100ABF0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ScenarioCollectionDB_TypeDefinitionIndex = 12714;

	class ScenarioCollectionDB : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::DateTime* _ReceiveDate_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_GET_RECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_SET_RECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOCOLLECTIONDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

