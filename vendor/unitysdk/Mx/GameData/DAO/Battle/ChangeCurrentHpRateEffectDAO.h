#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeCurrentHpRateEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16CB850)
#define MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CB8A0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16CCEB0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD170)
#define MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CD180)
#define MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16CF180)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeCurrentHpRateEffectDAO_TypeDefinitionIndex = 15386;

	class ChangeCurrentHpRateEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 HpRateChange; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGECURRENTHPRATEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

