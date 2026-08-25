#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FormIndexCheckModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FB700)
#define MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FB830)
#define MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16FB880)
#define MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FBBF0)
#define MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FBF90)
#define MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16FBFF0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FormIndexCheckModifierDAO_TypeDefinitionIndex = 15456;

	class FormIndexCheckModifierDAO : public Il2CppObject
	{
	public:
		::System::Int32 FormIndex; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMINDEXCHECKMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

