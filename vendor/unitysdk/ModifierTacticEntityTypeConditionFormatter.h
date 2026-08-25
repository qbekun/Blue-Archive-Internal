#pragma once
#include "unitysdk.h"

#define MODIFIERTACTICENTITYTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1228CE0)
#define MODIFIERTACTICENTITYTYPECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1228D30)
#define MODIFIERTACTICENTITYTYPECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1228950)

	inline static constexpr unsigned int ModifierTacticEntityTypeConditionFormatter_TypeDefinitionIndex = 13772;

	class ModifierTacticEntityTypeConditionFormatter : public ::System::IO::FileShare
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFIERTACTICENTITYTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::ModifierTacticEntityTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFIERTACTICENTITYTYPECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFIERTACTICENTITYTYPECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

