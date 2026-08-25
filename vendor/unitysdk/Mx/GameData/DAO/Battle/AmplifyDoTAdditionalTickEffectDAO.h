#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class AmplifyDoTRemoveCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14CF560)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14CF8A0)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14CF570)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14CF930)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14D2D00)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14D50C0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AmplifyDoTAdditionalTickEffectDAO_TypeDefinitionIndex = 15212;

	class AmplifyDoTAdditionalTickEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::FlatData::AmplifyDoTRemoveCondition* RemoveCondition; // 0x60
		::System::String* RemoveConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x70
		::System::String* TargetLogicEffectTemplateId; // 0x78
		::System::Int32 AdditionalTickDamageApplyCount; // 0x80
		::System::Int64 AdditionalTickDamageRate; // 0x88
		::System::Int32 AdditionalTickInterval; // 0x90

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTADDITIONALTICKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

