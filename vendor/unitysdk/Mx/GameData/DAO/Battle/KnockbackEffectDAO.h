#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class KnockbackDirection; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class KnockbackEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C8270)
#define MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15C9890)
#define MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15C98E0)
#define MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15C9C20)
#define MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15C98F0)
#define MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C9CC0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int KnockbackEffectDAO_TypeDefinitionIndex = 15286;

	class KnockbackEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 MoveDuration; // 0x58
		::System::Int64 MoveDistance; // 0x60
		::FlatData::KnockbackDirection* KnockbackDirection; // 0x68

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_KNOCKBACKEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

