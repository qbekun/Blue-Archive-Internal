#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }
namespace MX::GameData::DAO::Battle { class BeamEntityDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChainBeamDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D65F0)
#define MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D6770)
#define MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D6A00)
#define MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D6780)
#define MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D6A50)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChainBeamDAO_TypeDefinitionIndex = 15586;

	class ChainBeamDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::System::Int32 CheckTargetRadiusToSpawn; // 0x14
		::System::Boolean AllowParentTargetDupilication; // 0x18
		::System::Int32 MaxBranchCount; // 0x1C
		::MX::GameData::DAO::Battle::BeamEntityDAO* BeamEntityData; // 0x20

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChainBeamDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChainBeamDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChainBeamDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChainBeamDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHAINBEAMDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

