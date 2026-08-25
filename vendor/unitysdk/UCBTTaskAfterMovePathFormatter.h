#pragma once
#include "unitysdk.h"

#define UCBTTASKAFTERMOVEPATHFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD6D990)
#define UCBTTASKAFTERMOVEPATHFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD70B60)
#define UCBTTASKAFTERMOVEPATHFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD70BB0)

	inline static constexpr unsigned int UCBTTaskAfterMovePathFormatter_TypeDefinitionIndex = 9670;

	class UCBTTaskAfterMovePathFormatter : public __StaticArrayInitTypeSize=1018
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKAFTERMOVEPATHFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskAfterMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskAfterMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKAFTERMOVEPATHFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskAfterMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskAfterMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKAFTERMOVEPATHFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

