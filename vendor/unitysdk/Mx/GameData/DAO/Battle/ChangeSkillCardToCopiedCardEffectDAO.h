#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeSkillCardCostBaseType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeSkillCardToCopiedCardEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1676BC0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1676F30)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1676F40)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1678560)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x167A730)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x167A780)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeSkillCardToCopiedCardEffectDAO_TypeDefinitionIndex = 15356;

	class ChangeSkillCardToCopiedCardEffectDAO : public Il2CppObject
	{
	public:
		::System::Boolean Dispellable; // 0x58
		::MX::Logic::Data::ChangeSkillCardCostBaseType* CopiedCardCostRefer; // 0x5C
		::System::Int64 CopiedCardCostModifyByRatio; // 0x60
		::System::Int32 CopiedCardCostModifyByAmount; // 0x68

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESKILLCARDTOCOPIEDCARDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

