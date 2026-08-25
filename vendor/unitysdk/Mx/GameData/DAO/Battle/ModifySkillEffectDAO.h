#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillProperty; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ModifySkillEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D4590)
#define MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15D6870)
#define MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D68C0)
#define MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15D7F40)
#define MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15D84B0)
#define MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15D7F50)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ModifySkillEffectDAO_TypeDefinitionIndex = 15292;

	class ModifySkillEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillProperty* TargetProperty; // 0x58
		::MX::Logic::Skills::LogicEffects::StatEvalType* EvalType; // 0x5C
		Il2CppObject* ApplySlots; // 0x60
		::System::Int64 Amount; // 0x68
		::System::Int32 Duration; // 0x70
		::System::Boolean Dispellable; // 0x74

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MODIFYSKILLEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

