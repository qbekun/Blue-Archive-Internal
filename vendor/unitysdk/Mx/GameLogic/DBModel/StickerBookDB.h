#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_GET_UNUSEDSTICKERDBS_OFFSET UNITYSDK_OFFSET(0x100F220)
#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x100F230)
#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x100F240)
#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_SET_USEDSTICKERDBS_OFFSET UNITYSDK_OFFSET(0x100F250)
#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F260)
#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_SET_UNUSEDSTICKERDBS_OFFSET UNITYSDK_OFFSET(0x100F270)
#define MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_GET_USEDSTICKERDBS_OFFSET UNITYSDK_OFFSET(0x100F280)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int StickerBookDB_TypeDefinitionIndex = 12732;

	class StickerBookDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		Il2CppObject* _UnusedStickerDBs_k__BackingField; // 0x18
		Il2CppObject* _UsedStickerDBs_k__BackingField; // 0x20

		Il2CppObject* get_UnusedStickerDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_GET_UNUSEDSTICKERDBS_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UsedStickerDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_SET_USEDSTICKERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UnusedStickerDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_SET_UNUSEDSTICKERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UsedStickerDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STICKERBOOKDB_GET_USEDSTICKERDBS_OFFSET))(nullptr);
		}

	};
}

