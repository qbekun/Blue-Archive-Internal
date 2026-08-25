#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace MX::GameLogic::DBModel { class CraftPresetNodeDB; }

#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_NODETIER_OFFSET UNITYSDK_OFFSET(0xFF5960)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_NODETIER_OFFSET UNITYSDK_OFFSET(0xFF5970)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xFF5980)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xFF5990)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_PRIORITYNODEIDS_OFFSET UNITYSDK_OFFSET(0xFF59A0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_PRIORITYNODEIDS_OFFSET UNITYSDK_OFFSET(0xFF59B0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_COSTPARCELS_OFFSET UNITYSDK_OFFSET(0xFF59C0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_COSTPARCELS_OFFSET UNITYSDK_OFFSET(0xFF59D0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF59E0)
#define MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF5B60)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftPresetNodeDB_TypeDefinitionIndex = 12574;

	class CraftPresetNodeDB : public Il2CppObject
	{
	public:
		::FlatData::CraftNodeTier* _NodeTier_k__BackingField; // 0x10
		::System::Boolean _IsActivated_k__BackingField; // 0x14
		Il2CppObject* _PriorityNodeIds_k__BackingField; // 0x18
		Il2CppObject* _CostParcels_k__BackingField; // 0x20

		::FlatData::CraftNodeTier* get_NodeTier()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_NODETIER_OFFSET))(nullptr);
		}

		::System::Void set_NodeTier(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_NODETIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_ISACTIVATED_OFFSET))(nullptr);
		}

		::System::Void set_IsActivated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_ISACTIVATED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PriorityNodeIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_PRIORITYNODEIDS_OFFSET))(nullptr);
		}

		::System::Void set_PriorityNodeIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_PRIORITYNODEIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CostParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_GET_COSTPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_CostParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_SET_COSTPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CraftPresetNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTPRESETNODEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

