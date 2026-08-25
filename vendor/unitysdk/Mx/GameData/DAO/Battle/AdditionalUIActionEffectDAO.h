#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AdditionalUIActionEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1698140)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16983D0)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1698150)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1698460)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x169B4E0)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x169B540)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AdditionalUIActionEffectDAO_TypeDefinitionIndex = 15368;

	class AdditionalUIActionEffectDAO : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x58
		::System::String* ActionKeyList; // 0x60
		::System::String* DecoKeyList; // 0x68
		::System::String* DecoValList; // 0x70

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUIACTIONEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

