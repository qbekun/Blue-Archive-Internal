#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ForceMoveType; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ForceMoveEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1543B90)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1543BE0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1543C40)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1545E10)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1547430)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1547440)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ForceMoveEffectDAO_TypeDefinitionIndex = 15254;

	class ForceMoveEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Int64 Distance; // 0x60
		::MX::Logic::Data::ForceMoveType* DirectionType; // 0x68
		::MX::Core::Math::TransitionType* Transition; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

