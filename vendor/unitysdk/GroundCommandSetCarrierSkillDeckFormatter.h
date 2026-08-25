#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETCARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FC450)
#define GROUNDCOMMANDSETCARRIERSKILLDECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12FB460)
#define GROUNDCOMMANDSETCARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FC4A0)

	inline static constexpr unsigned int GroundCommandSetCarrierSkillDeckFormatter_TypeDefinitionIndex = 14206;

	class GroundCommandSetCarrierSkillDeckFormatter : public Enumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

