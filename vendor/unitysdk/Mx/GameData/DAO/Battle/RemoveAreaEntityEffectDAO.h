#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetingType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class RemoveAreaEntityEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C3150)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16C5940)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C5990)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16C7670)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16C76D0)
#define MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16C76E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RemoveAreaEntityEffectDAO_TypeDefinitionIndex = 15382;

	class RemoveAreaEntityEffectDAO : public Il2CppObject
	{
	public:
		::System::String* TargetAreaEntityName; // 0x58
		::MX::Logic::Skills::TargetingType* RemoveAreaType; // 0x60

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RemoveAreaEntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_REMOVEAREAENTITYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

