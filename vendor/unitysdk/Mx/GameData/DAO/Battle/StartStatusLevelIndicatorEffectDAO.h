#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StartStatusLevelIndicatorEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1684D10)
#define MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1687090)
#define MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16870F0)
#define MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1687460)
#define MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x168A6E0)
#define MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x168A690)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StartStatusLevelIndicatorEffectDAO_TypeDefinitionIndex = 15362;

	class StartStatusLevelIndicatorEffectDAO : public Il2CppObject
	{
	public:
		::System::String* LogicEffectTemplateForApplyStatusLevel; // 0x58
		::System::String* UIPath; // 0x60
		::System::Int32 MaxStatusLevel; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::Int32 EndConditionArgument; // 0x70
		::System::Boolean Dispellable; // 0x74

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STARTSTATUSLEVELINDICATOREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

