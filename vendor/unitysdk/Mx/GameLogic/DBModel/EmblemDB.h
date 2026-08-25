#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFFBB60)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFFBB70)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFFBB80)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0xFFBB90)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_SET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0xFFBBA0)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFFBBB0)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFBCA0)
#define MX_GAMELOGIC_DBMODEL_EMBLEMDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFBCB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EmblemDB_TypeDefinitionIndex = 12593;

	class EmblemDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::DateTime* _ReceiveDate_k__BackingField; // 0x18

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_RECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_SET_RECEIVEDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::DateTime* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EMBLEMDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

