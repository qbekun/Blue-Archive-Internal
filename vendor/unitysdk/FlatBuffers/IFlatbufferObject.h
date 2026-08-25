#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLATBUFFERS_IFLATBUFFEROBJECT_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace FlatBuffers
{
	inline static constexpr unsigned int IFlatbufferObject_TypeDefinitionIndex = 38038;

	class IFlatbufferObject : public Il2CppObject
	{
	public:
		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_IFLATBUFFEROBJECT_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

	};
}

