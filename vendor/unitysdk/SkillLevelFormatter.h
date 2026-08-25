#pragma once
#include "unitysdk.h"

#define SKILLLEVELFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C9A00)
#define SKILLLEVELFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C99B0)
#define SKILLLEVELFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C9A50)

	inline static constexpr unsigned int SkillLevelFormatter_TypeDefinitionIndex = 13357;

	class SkillLevelFormatter : public <>c
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SkillLevel&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SkillLevel&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SkillLevel&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SkillLevel&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

