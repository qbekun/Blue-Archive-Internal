#pragma once
#include "unitysdk.h"

#define UCBTTASKLOOKATNOISEMAKERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD810D0)
#define UCBTTASKLOOKATNOISEMAKERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD7CEA0)
#define UCBTTASKLOOKATNOISEMAKERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD81120)

	inline static constexpr unsigned int UCBTTaskLookAtNoiseMakerFormatter_TypeDefinitionIndex = 9680;

	class UCBTTaskLookAtNoiseMakerFormatter : public __StaticArrayInitTypeSize=1450
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKLOOKATNOISEMAKERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKLOOKATNOISEMAKERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskLookAtNoiseMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKLOOKATNOISEMAKERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

