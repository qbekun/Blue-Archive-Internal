#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_GET_CLUEID_OFFSET UNITYSDK_OFFSET(0xFEE0D0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_SET_CLUEID_OFFSET UNITYSDK_OFFSET(0xFEE0E0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEE0F0)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEE100)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEE110)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_GET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0xFEE120)
#define MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_SET_ISSUBMITTED_OFFSET UNITYSDK_OFFSET(0xFEE130)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClueSearchSlotDB_TypeDefinitionIndex = 12534;

	class ClueSearchSlotDB : public Il2CppObject
	{
	public:
		::System::Int32 _SlotNumber_k__BackingField; // 0x10
		::System::Int64 _ClueId_k__BackingField; // 0x18
		::System::Boolean _IsSubmitted_k__BackingField; // 0x20

		::System::Int64 get_ClueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_GET_CLUEID_OFFSET))(nullptr);
		}

		::System::Void set_ClueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_SET_CLUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_GET_ISSUBMITTED_OFFSET))(nullptr);
		}

		::System::Void set_IsSubmitted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLUESEARCHSLOTDB_SET_ISSUBMITTED_OFFSET))(arg, nullptr);
		}

	};
}

