#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class Difficulty; }

#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_SET_RANKCOUNT_OFFSET UNITYSDK_OFFSET(0x1009AC0)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1009AD0)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_GET_RANKCOUNT_OFFSET UNITYSDK_OFFSET(0x1009AE0)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_GET_BOSSGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1009AF0)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_SET_BOSSGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1009B00)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1009B10)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009B20)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidRankBracket_TypeDefinitionIndex = 12702;

	class RaidRankBracket : public Il2CppObject
	{
	public:
		::FlatData::Difficulty* _Difficulty_k__BackingField; // 0x10
		Il2CppObject* _BossGroupIndex_k__BackingField; // 0x14
		::System::Int64 _RankCount_k__BackingField; // 0x20

		::System::Void set_RankCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_SET_RANKCOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return ((::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_RankCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_GET_RANKCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_BossGroupIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_GET_BOSSGROUPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_BossGroupIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_SET_BOSSGROUPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKBRACKET_.CTOR_OFFSET))(nullptr);
		}

	};
}

