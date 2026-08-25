#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TargetSlotExSkillCostOverrideEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x167A880)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x167A8D0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x167AD90)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x167DFE0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x167E040)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x167A8E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetSlotExSkillCostOverrideEffectDAO_TypeDefinitionIndex = 15358;

	class TargetSlotExSkillCostOverrideEffectDAO : public Il2CppObject
	{
	public:
		::System::Boolean Dispellable; // 0x58
		::Il2CppArray<::System::Object*>* TargetExSkillSlot; // 0x60
		::System::Int32 BaseAmount; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::String* EndConditionArgumentFirst; // 0x70
		::System::String* EndConditionArgumentSecond; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

