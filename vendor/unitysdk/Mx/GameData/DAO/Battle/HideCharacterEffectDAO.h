#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HideCharacterEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x156AF20)
#define MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x156B260)
#define MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x156D430)
#define MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x156D3E0)
#define MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x156EA50)
#define MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x156AF30)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HideCharacterEffectDAO_TypeDefinitionIndex = 15270;

	class HideCharacterEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean IsDispellable; // 0x60

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HIDECHARACTEREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

