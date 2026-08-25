#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CanNotTargetObstacleEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1653DD0)
#define MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16553F0)
#define MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1657570)
#define MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16575C0)
#define MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1657620)
#define MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1657630)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CanNotTargetObstacleEffectDAO_TypeDefinitionIndex = 15342;

	class CanNotTargetObstacleEffectDAO : public Il2CppObject
	{
	public:
		::System::Boolean Dispellable; // 0x58
		::FlatData::EndCondition* EndCondition; // 0x5C
		::System::Int32 EndConditionArgument; // 0x60

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CANNOTTARGETOBSTACLEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

