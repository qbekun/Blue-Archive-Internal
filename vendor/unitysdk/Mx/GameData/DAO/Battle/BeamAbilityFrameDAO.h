#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BeamAbilityFrameDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D52B0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D55F0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D52C0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D5640)
#define MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D59E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BeamAbilityFrameDAO_TypeDefinitionIndex = 15582;

	class BeamAbilityFrameDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::System::Int32 Frame; // 0x14
		Il2CppObject* Abilities; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BeamAbilityFrameDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMABILITYFRAMEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

