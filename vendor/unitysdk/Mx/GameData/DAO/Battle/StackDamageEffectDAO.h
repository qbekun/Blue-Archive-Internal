#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StackDamageEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1612780)
#define MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16129E0)
#define MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1612A40)
#define MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1612A90)
#define MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1617B30)
#define MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x161B360)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StackDamageEffectDAO_TypeDefinitionIndex = 15318;

	class StackDamageEffectDAO : public Il2CppObject
	{
	public:
		::System::String* StackCountGroupId; // 0x58
		::System::Int32 ActuateStackCount; // 0x60
		::System::String* ActuateGroupId; // 0x68
		::System::String* ApplyLogicEffectGroupId01; // 0x70
		::System::Int32 MinApplyStackCount01; // 0x78
		::System::Int64 DefaultDistributeRate01; // 0x80
		::System::Int64 AddDistributeRatePerStackCount01; // 0x88
		::System::String* ApplyLogicEffectGroupId02; // 0x90
		::System::Int32 MinApplyStackCount02; // 0x98
		::System::Int64 DefaultDistributeRate02; // 0xA0
		::System::Int64 AddDistributeRatePerStackCount02; // 0xA8
		::System::String* ApplyLogicEffectGroupId03; // 0xB0
		::System::Int32 MinApplyStackCount03; // 0xB8
		::System::Int64 DefaultDistributeRate03; // 0xC0
		::System::Int64 AddDistributeRatePerStackCount03; // 0xC8
		::System::Int64 Duration; // 0xD0
		::System::Boolean Dispellable; // 0xD8

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STACKDAMAGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

