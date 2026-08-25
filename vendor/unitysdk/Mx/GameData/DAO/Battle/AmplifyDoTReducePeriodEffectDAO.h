#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class AmplifyDoTRemoveCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C9A80)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14CBE10)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14CC180)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14CC1E0)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14CC230)
#define MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14CC240)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AmplifyDoTReducePeriodEffectDAO_TypeDefinitionIndex = 15210;

	class AmplifyDoTReducePeriodEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::FlatData::AmplifyDoTRemoveCondition* RemoveCondition; // 0x60
		::System::String* RemoveConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x70
		::System::Int64 PeriodReduceRate; // 0x78
		::System::String* TargetLogicEffectTemplateId; // 0x80

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AMPLIFYDOTREDUCEPERIODEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

