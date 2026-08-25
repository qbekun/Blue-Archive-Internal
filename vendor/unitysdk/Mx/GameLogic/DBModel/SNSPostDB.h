#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class SNSPostDB; }

#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x100EE20)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_SNSID_OFFSET UNITYSDK_OFFSET(0x100EE30)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_SNSID_OFFSET UNITYSDK_OFFSET(0x100EE40)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_POSTID_OFFSET UNITYSDK_OFFSET(0x100EE50)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_POSTID_OFFSET UNITYSDK_OFFSET(0x100EE60)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x100EE70)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x100EE80)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_READDATE_OFFSET UNITYSDK_OFFSET(0x100EE90)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_READDATE_OFFSET UNITYSDK_OFFSET(0x100EEA0)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x100EEB0)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x100EF90)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x100EFB0)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x100F020)
#define MX_GAMELOGIC_DBMODEL_SNSPOSTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F040)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SNSPostDB_TypeDefinitionIndex = 12730;

	class SNSPostDB : public Il2CppObject
	{
	public:
		::System::Int64 _SNSId_k__BackingField; // 0x10
		::System::Int64 _PostId_k__BackingField; // 0x18
		::System::DateTime* _ReceiveDate_k__BackingField; // 0x20
		Il2CppObject* _ReadDate_k__BackingField; // 0x28

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SNSId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_SNSID_OFFSET))(nullptr);
		}

		::System::Void set_SNSId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_SNSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_POSTID_OFFSET))(nullptr);
		}

		::System::Void set_PostId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_POSTID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_RECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_RECEIVEDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReadDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_READDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReadDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_SET_READDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::SNSPostDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::SNSPostDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SNSPOSTDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

