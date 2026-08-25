#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeGaugeUITypeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x151D3C0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x151E9D0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x151EA20)
#define MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x151ECB0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x151EA30)
#define MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1520CB0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeGaugeUITypeEffectDAO_TypeDefinitionIndex = 15240;

	class ChangeGaugeUITypeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 UITypeToChange; // 0x58

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGEGAUGEUITYPEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

