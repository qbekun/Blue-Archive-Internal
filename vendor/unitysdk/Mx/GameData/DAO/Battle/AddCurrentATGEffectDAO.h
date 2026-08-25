#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14A35D0)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14A3860)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14A35E0)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A3900)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A4F10)
#define MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14A6F10)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AddCurrentATGEffectDAO_TypeDefinitionIndex = 15192;

	class AddCurrentATGEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDCURRENTATGEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

