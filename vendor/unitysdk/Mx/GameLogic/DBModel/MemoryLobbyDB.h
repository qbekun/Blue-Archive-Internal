#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x100F050)
#define MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x100F060)
#define MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_SET_MEMORYLOBBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100F150)
#define MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F160)
#define MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_GET_MEMORYLOBBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100F170)
#define MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x100F180)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MemoryLobbyDB_TypeDefinitionIndex = 12731;

	class MemoryLobbyDB : public Il2CppObject
	{
	public:
		::System::Int64 _MemoryLobbyUniqueId_k__BackingField; // 0x10

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_MemoryLobbyUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_SET_MEMORYLOBBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_MemoryLobbyUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_GET_MEMORYLOBBYUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MEMORYLOBBYDB_TOSTRING_OFFSET))(nullptr);
		}

	};
}

