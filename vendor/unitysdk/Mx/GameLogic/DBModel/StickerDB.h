#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class StickerDB; }

#define MX_GAMELOGIC_DBMODEL_STICKERDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x100F290)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_GET_STICKERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100F2A0)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_SET_STICKERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100F2B0)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x100F2C0)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x100F3A0)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x100F3C0)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x100F430)
#define MX_GAMELOGIC_DBMODEL_STICKERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F450)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int StickerDB_TypeDefinitionIndex = 12733;

	class StickerDB : public Il2CppObject
	{
	public:
		::System::Int64 _StickerUniqueId_k__BackingField; // 0x10

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_GET_STICKERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StickerUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_SET_STICKERUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::StickerDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::StickerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

