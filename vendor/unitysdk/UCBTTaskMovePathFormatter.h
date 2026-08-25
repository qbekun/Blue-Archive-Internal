#pragma once
#include "unitysdk.h"

#define UCBTTASKMOVEPATHFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD85070)
#define UCBTTASKMOVEPATHFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD850C0)
#define UCBTTASKMOVEPATHFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD848C0)

	inline static constexpr unsigned int UCBTTaskMovePathFormatter_TypeDefinitionIndex = 9682;

	class UCBTTaskMovePathFormatter : public __StaticArrayInitTypeSize=1472
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKMOVEPATHFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKMOVEPATHFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKMOVEPATHFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

