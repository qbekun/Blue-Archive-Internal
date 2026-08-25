#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class MaxHPCapGaugeValueEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15D0BA0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D0C00)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2C10)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15D2C20)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2EE0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15D2BC0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int MaxHPCapGaugeValueEffectDAO_TypeDefinitionIndex = 15290;

	class MaxHPCapGaugeValueEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 MaxHPCapGaugeValue; // 0x58

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEVALUEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

