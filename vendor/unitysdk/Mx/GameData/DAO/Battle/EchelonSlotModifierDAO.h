#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class EchelonSlotModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1701CF0)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_SHOULDSERIALIZEECHELONSLOTINFOS_OFFSET UNITYSDK_OFFSET(0x17020F0)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1702140)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1702580)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x17026F0)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1701D00)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1702530)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int EchelonSlotModifierDAO_TypeDefinitionIndex = 15476;

	class EchelonSlotModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		Il2CppObject* EchelonSlotInfos; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeEchelonSlotInfos()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_SHOULDSERIALIZEECHELONSLOTINFOS_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONSLOTMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

