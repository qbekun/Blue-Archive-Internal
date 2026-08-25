#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ReviveEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15E91B0)
#define MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15E9210)
#define MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E94D0)
#define MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15EAAE0)
#define MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15ECBB0)
#define MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ECB60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ReviveEffectDAO_TypeDefinitionIndex = 15302;

	class ReviveEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 HPRecoverRate; // 0x58
		::System::Boolean ResetCoolTime; // 0x60

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ReviveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ReviveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ReviveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ReviveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REVIVEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

