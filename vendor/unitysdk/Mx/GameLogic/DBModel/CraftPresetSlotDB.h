#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace FlatData { class CraftNodeTier; }

#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_MAKEPARCELCOST_OFFSET UNITYSDK_OFFSET(0xFF4FB0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xFF5370)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GET_PRESETNODEDBS_OFFSET UNITYSDK_OFFSET(0xFF5380)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xFF5390)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_SET_PRESETNODEDBS_OFFSET UNITYSDK_OFFSET(0xFF53A0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GETMAXNODETIER_OFFSET UNITYSDK_OFFSET(0xFF53B0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_EQUALS_OFFSET UNITYSDK_OFFSET(0xFF55E0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF57D0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFF57E0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0xFF5850)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_SET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0xFF5860)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftPresetSlotDB_TypeDefinitionIndex = 12573;

	class CraftPresetSlotDB : public Il2CppObject
	{
	public:
		::System::Int32 _PresetIndex_k__BackingField; // 0x10
		Il2CppObject* _PresetNodeDBs_k__BackingField; // 0x18
		::System::String* _PresetName_k__BackingField; // 0x20

		::MX::GameLogic::Parcel::ParcelCost* MakeParcelCost(::System::Int64 arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_MAKEPARCELCOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_PresetNodeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GET_PRESETNODEDBS_OFFSET))(nullptr);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::System::Void set_PresetNodeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_SET_PRESETNODEDBS_OFFSET))(arg, nullptr);
		}

		::FlatData::CraftNodeTier* GetMaxNodeTier()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GETMAXNODETIER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 get_PresetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_GET_PRESETINDEX_OFFSET))(nullptr);
		}

		::System::Void set_PresetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETSLOTDB_SET_PRESETINDEX_OFFSET))(arg, nullptr);
		}

	};
}

