#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetSideConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1700830)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1700960)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1700D50)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1700D00)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1701180)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1701190)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetSideConditionalModifierDAO_TypeDefinitionIndex = 15472;

	class TargetSideConditionalModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSide; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSIDECONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

	};
}

