#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillCardSizeAppendEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLCARDSIZEAPPENDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x160F570)
#define SKILLCARDSIZEAPPENDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16126E0)
#define SKILLCARDSIZEAPPENDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1612730)

	inline static constexpr unsigned int SkillCardSizeAppendEffectDAOFormatter_TypeDefinitionIndex = 15315;

	class SkillCardSizeAppendEffectDAOFormatter : public WriteDelegate
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

