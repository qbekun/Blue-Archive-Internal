#pragma once
#include "../unitysdk.h"

#define FLATBUFFERS_VECTOROFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x28A2120)

namespace FlatBuffers
{
	inline static constexpr unsigned int VectorOffset_TypeDefinitionIndex = 38041;

	class VectorOffset : public Il2CppObject
	{
	public:
		::System::Int32 Value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_VECTOROFFSET_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

