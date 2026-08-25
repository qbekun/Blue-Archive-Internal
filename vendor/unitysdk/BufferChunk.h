#pragma once
#include "unitysdk.h"

#define BUFFERCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0x997FBE0)

	inline static constexpr unsigned int BufferChunk_TypeDefinitionIndex = 27724;

	class BufferChunk : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffer; // 0x10
		::System::Int32 index; // 0x18
		::System::Int32 count; // 0x1C

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFERCHUNK_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

