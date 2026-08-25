#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillCardSizeAppendEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x160AF10)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x160B250)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160B2A0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x160AF20)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x160F5B0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1612680)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillCardSizeAppendEffectDAO_TypeDefinitionIndex = 15316;

	class SkillCardSizeAppendEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean IsDispellable; // 0x60
		::System::String* ThemeUIPath; // 0x68
		::System::Int32 AppendSize; // 0x70
		::System::String* AppendThumbnailPathList; // 0x78
		::System::String* DataKeyList; // 0x80
		::System::String* DataValList; // 0x88

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDSIZEAPPENDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

