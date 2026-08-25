#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class UseExclusiveHPBarEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x165D180)
#define MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x165FAB0)
#define MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1661790)
#define MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1661B00)
#define MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1661B10)
#define MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x165FA60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int UseExclusiveHPBarEffectDAO_TypeDefinitionIndex = 15346;

	class UseExclusiveHPBarEffectDAO : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x58
		::FlatData::EndCondition* EndCondition; // 0x60
		::System::Int32 EndConditionArgument; // 0x64
		::System::Boolean Dispellable; // 0x68

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_USEEXCLUSIVEHPBAREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

