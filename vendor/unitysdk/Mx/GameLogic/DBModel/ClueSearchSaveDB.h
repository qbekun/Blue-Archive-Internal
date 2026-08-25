#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClueSearchSaveDB; }

#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xFEDFE0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEDFF0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEE000)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_NEXTROUND_OFFSET UNITYSDK_OFFSET(0xFEE010)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEE090)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_GET_SLOTDBS_OFFSET UNITYSDK_OFFSET(0xFEE0A0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xFEE0B0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_SET_SLOTDBS_OFFSET UNITYSDK_OFFSET(0xFEE0C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClueSearchSaveDB_TypeDefinitionIndex = 12533;

	class ClueSearchSaveDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x18
		Il2CppObject* _SlotDBs_k__BackingField; // 0x20

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClueSearchSaveDB* NextRound()
		{
			return ((::MX::GameLogic::DBModel::ClueSearchSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_NEXTROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_SlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_GET_SLOTDBS_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSAVEDB_SET_SLOTDBS_OFFSET))(arg, nullptr);
		}

	};
}

