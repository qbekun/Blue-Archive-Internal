#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AddCurrentAmmoEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15E57C0)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15E5810)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15E5AD0)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E5B30)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15E7AF0)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E7B00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AddCurrentAmmoEffectDAO_TypeDefinitionIndex = 15300;

	class AddCurrentAmmoEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 AmmoCountToAdd; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTAMMOEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

