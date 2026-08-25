#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A1BF0)
#define GROUNDCOMMANDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A1B30)
#define GROUNDCOMMANDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A4190)
#define GROUNDCOMMANDFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12A4C10)

	inline static constexpr unsigned int GroundCommandFormatter_TypeDefinitionIndex = 14108;

	class GroundCommandFormatter : public ValueList
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommand&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommand&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

