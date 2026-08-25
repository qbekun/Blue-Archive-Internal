#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AdditionalUISetEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x168FB20)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x168FDB0)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x168FE10)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1693540)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1698010)
#define MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x168FB30)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AdditionalUISetEffectDAO_TypeDefinitionIndex = 15366;

	class AdditionalUISetEffectDAO : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x58
		::System::String* DataKeyList; // 0x60
		::System::String* DataValList; // 0x68
		::System::String* DecoKeyList; // 0x70
		::System::String* DecoValList; // 0x78

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDITIONALUISETEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

