#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillCardCopyTargetEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SKILLCARDCOPYTARGETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1676AC0)
#define SKILLCARDCOPYTARGETEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1676B20)
#define SKILLCARDCOPYTARGETEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1676B60)

	inline static constexpr unsigned int SkillCardCopyTargetEffectDAOFormatter_TypeDefinitionIndex = 15353;

	class SkillCardCopyTargetEffectDAOFormatter : public ReadDelegate
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDCOPYTARGETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDCOPYTARGETEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDCOPYTARGETEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

