#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETSTATUSIMMUNEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1319430)
#define GROUNDCOMMANDSETSTATUSIMMUNEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1317AB0)
#define GROUNDCOMMANDSETSTATUSIMMUNEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1319480)

	inline static constexpr unsigned int GroundCommandSetStatusImmuneFormatter_TypeDefinitionIndex = 14233;

	class GroundCommandSetStatusImmuneFormatter : public ::System::Collections::Generic::IComparer`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetStatusImmune&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetStatusImmune&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSIMMUNEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSIMMUNEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetStatusImmune&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetStatusImmune&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSIMMUNEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

