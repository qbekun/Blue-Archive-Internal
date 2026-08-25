#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ReloadAmmoEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E1E70)
#define MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15E3DF0)
#define MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15E3DA0)
#define MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15E3E50)
#define MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E4110)
#define MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15E5710)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ReloadAmmoEffectDAO_TypeDefinitionIndex = 15298;

	class ReloadAmmoEffectDAO : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RELOADAMMOEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

