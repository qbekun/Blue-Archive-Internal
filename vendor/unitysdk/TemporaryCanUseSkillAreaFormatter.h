#pragma once
#include "unitysdk.h"

#define TEMPORARYCANUSESKILLAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D0840)
#define TEMPORARYCANUSESKILLAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11D1F50)
#define TEMPORARYCANUSESKILLAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11D1FA0)

	inline static constexpr unsigned int TemporaryCanUseSkillAreaFormatter_TypeDefinitionIndex = 13369;

	class TemporaryCanUseSkillAreaFormatter : public __StaticArrayInitTypeSize=212
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPORARYCANUSESKILLAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + TEMPORARYCANUSESKILLAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + TEMPORARYCANUSESKILLAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

