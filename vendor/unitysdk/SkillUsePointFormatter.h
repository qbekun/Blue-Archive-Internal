#pragma once
#include "unitysdk.h"

#define SKILLUSEPOINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C9160)
#define SKILLUSEPOINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C9120)
#define SKILLUSEPOINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C91B0)

	inline static constexpr unsigned int SkillUsePointFormatter_TypeDefinitionIndex = 13355;

	class SkillUsePointFormatter : public ::System::IO::UnexceptionalStreamWriter
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SkillUsePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SkillUsePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SkillUsePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SkillUsePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

