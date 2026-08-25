#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RemoveVisualEffectsEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16804D0)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1680530)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16807C0)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1682460)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1680540)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1684BE0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RemoveVisualEffectsEffectDAO_TypeDefinitionIndex = 15360;

	class RemoveVisualEffectsEffectDAO : public Il2CppObject
	{
	public:
		::System::String* TargetEffectPrefabName; // 0x58

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RemoveVisualEffectsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEVISUALEFFECTSEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

