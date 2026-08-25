#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace FlatData { class StageTopography; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class OverrideStageTopographyEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15DC350)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15DF5B0)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15E1930)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15DF560)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15E1990)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15E19A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int OverrideStageTopographyEffectDAO_TypeDefinitionIndex = 15296;

	class OverrideStageTopographyEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::String* EndConditionArgumentFirst; // 0x60
		::System::String* EndConditionArgumentSecond; // 0x68
		::FlatData::StageTopography* StageTopography; // 0x70

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::OverrideStageTopographyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDESTAGETOPOGRAPHYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

