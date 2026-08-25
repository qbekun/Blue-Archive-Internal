#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DispelEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1510740)
#define MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1510790)
#define MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1510A50)
#define MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1512AE0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15140F0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1514150)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DispelEffectDAO_TypeDefinitionIndex = 15234;

	class DispelEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* DispelTarget; // 0x58
		::System::Int32 DispelCount; // 0x5C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DispelEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DispelEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DispelEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DispelEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

