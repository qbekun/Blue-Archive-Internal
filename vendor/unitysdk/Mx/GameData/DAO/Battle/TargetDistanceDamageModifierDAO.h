#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetDistanceDamageModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FF550)
#define MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FF5A0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FF6F0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16FF750)
#define MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16FF760)
#define MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FFA20)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetDistanceDamageModifierDAO_TypeDefinitionIndex = 15468;

	class TargetDistanceDamageModifierDAO : public Il2CppObject
	{
	public:
		::System::Int32 MinDistance; // 0x18
		::System::Int32 MaxDistance; // 0x1C
		::System::Int64 MinMultiplier; // 0x20
		::System::Int64 MaxMultiplier; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETDISTANCEDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

