#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BlackBoardSetEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16B44F0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16B4540)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B4880)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B72B0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16B8FA0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16B4550)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BlackBoardSetEffectDAO_TypeDefinitionIndex = 15376;

	class BlackBoardSetEffectDAO : public Il2CppObject
	{
	public:
		::System::String* BlackBoardKey; // 0x58
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x60
		::System::Int64 SetValue; // 0x68
		::System::Int64 SetMin; // 0x70
		::System::Int64 SetMax; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSETEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

