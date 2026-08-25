#pragma once
#include "unitysdk.h"

class ChunkType;
class Chunk;

#define CHUNK_ASNEWLINE_OFFSET UNITYSDK_OFFSET(0xC192E0)
#define CHUNK_ASTEXT_OFFSET UNITYSDK_OFFSET(0xC19490)
#define CHUNK_ASSPRITE_OFFSET UNITYSDK_OFFSET(0xC19340)
#define CHUNK_ASURL_OFFSET UNITYSDK_OFFSET(0xC193B0)
#define CHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC19530)

	inline static constexpr unsigned int Chunk_TypeDefinitionIndex = 8846;

	class Chunk : public Il2CppObject
	{
	public:
		ChunkType* Type; // 0x10
		::System::String* Text; // 0x18
		::System::String* SpriteName; // 0x20
		::System::String* UrlValue; // 0x28

		Chunk* AsNewLine()
		{
			return ((Chunk*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHUNK_ASNEWLINE_OFFSET))(nullptr);
		}

		Chunk* AsText(::System::String* str)
		{
			return ((Chunk*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHUNK_ASTEXT_OFFSET))(str, nullptr);
		}

		Chunk* AsSprite(::System::String* str)
		{
			return ((Chunk*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHUNK_ASSPRITE_OFFSET))(str, nullptr);
		}

		Chunk* AsUrl(::System::String* str, ::System::String* str2)
		{
			return ((Chunk*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHUNK_ASURL_OFFSET))(str, str2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHUNK_.CTOR_OFFSET))(nullptr);
		}

	};

