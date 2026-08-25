#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14C5FD0)
#define MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C6030)
#define MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14C8100)
#define MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C83C0)
#define MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14C80B0)
#define MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14C99D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CostRegenBanEffectDAO_TypeDefinitionIndex = 15208;

	class CostRegenBanEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::System::Boolean Dispellable; // 0x60

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTREGENBANEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

