#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SummonGroupDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17CE110)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CE3D0)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CECE0)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CF900)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17CF910)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SummonGroupDAO_TypeDefinitionIndex = 15577;

	class SummonGroupDAO : public Il2CppObject
	{
	public:
		::System::String* GroupName; // 0x10
		::System::Int64 Rate; // 0x18
		Il2CppObject* SummonEntities; // 0x20

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonGroupDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonGroupDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonGroupDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonGroupDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

