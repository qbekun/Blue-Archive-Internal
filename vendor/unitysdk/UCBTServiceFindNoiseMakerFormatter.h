#pragma once
#include "unitysdk.h"

#define UCBTSERVICEFINDNOISEMAKERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD69400)
#define UCBTSERVICEFINDNOISEMAKERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD6CE70)
#define UCBTSERVICEFINDNOISEMAKERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD6CEC0)

	inline static constexpr unsigned int UCBTServiceFindNoiseMakerFormatter_TypeDefinitionIndex = 9668;

	class UCBTServiceFindNoiseMakerFormatter : public __StaticArrayInitTypeSize=998
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTSERVICEFINDNOISEMAKERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTServiceFindNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTServiceFindNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTSERVICEFINDNOISEMAKERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTServiceFindNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTServiceFindNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTSERVICEFINDNOISEMAKERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

