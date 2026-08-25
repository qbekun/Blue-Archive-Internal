#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_SET_SELECTIONID_OFFSET UNITYSDK_OFFSET(0x100B0E0)
#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B0F0)
#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x100B100)
#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_GET_SELECTIONID_OFFSET UNITYSDK_OFFSET(0x100B110)
#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_SET_SLOTGROUPID_OFFSET UNITYSDK_OFFSET(0x100B120)
#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x100B130)
#define MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_GET_SLOTGROUPID_OFFSET UNITYSDK_OFFSET(0x100B140)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopCashProductSelectionDB_TypeDefinitionIndex = 12722;

	class ShopCashProductSelectionDB : public Il2CppObject
	{
	public:
		::System::Int64 _SlotGroupId_k__BackingField; // 0x10
		::System::Int64 _SlotIndex_k__BackingField; // 0x18
		::System::Int64 _SelectionId_k__BackingField; // 0x20

		::System::Void set_SelectionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_SET_SELECTIONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_GET_SELECTIONID_OFFSET))(nullptr);
		}

		::System::Void set_SlotGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_SET_SLOTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SlotIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPCASHPRODUCTSELECTIONDB_GET_SLOTGROUPID_OFFSET))(nullptr);
		}

	};
}

