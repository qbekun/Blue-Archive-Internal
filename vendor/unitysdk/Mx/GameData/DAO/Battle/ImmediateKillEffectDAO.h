#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmediateKillEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x156EB90)
#define MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x156EBE0)
#define MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x156EEA0)
#define MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x156EEB0)
#define MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1570F00)
#define MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1570F60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmediateKillEffectDAO_TypeDefinitionIndex = 15272;

	class ImmediateKillEffectDAO : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreImmortal; // 0x58
		::System::Boolean IgnoreAppliedCheat; // 0x59

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMEDIATEKILLEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

