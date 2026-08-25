#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class WriteEntityToBlackboardEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B90E0)
#define MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16BAD90)
#define MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16BADF0)
#define MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16BB1F0)
#define MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16BAE00)
#define MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16BB280)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int WriteEntityToBlackboardEffectDAO_TypeDefinitionIndex = 15378;

	class WriteEntityToBlackboardEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSideFilter; // 0x58
		::MX::Logic::Data::BlackboardKeyType* BlackboardKeyType; // 0x5C
		::System::String* BlackboardKeyToWrite; // 0x60

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WRITEENTITYTOBLACKBOARDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

