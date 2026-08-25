#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCREATERANDOMNUMBERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CFE80)
#define GROUNDCOMMANDCREATERANDOMNUMBERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CFED0)
#define GROUNDCOMMANDCREATERANDOMNUMBERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12CD970)

	inline static constexpr unsigned int GroundCommandCreateRandomNumberFormatter_TypeDefinitionIndex = 14153;

	class GroundCommandCreateRandomNumberFormatter : public HashtableDebugView
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATERANDOMNUMBERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCreateRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATERANDOMNUMBERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATERANDOMNUMBERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

