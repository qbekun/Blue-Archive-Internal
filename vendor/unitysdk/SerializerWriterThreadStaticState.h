#pragma once
#include "unitysdk.h"

namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }
namespace MemoryPack { class MemoryPackWriterOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }

#define SERIALIZERWRITERTHREADSTATICSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x90667A0)
#define SERIALIZERWRITERTHREADSTATICSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x906A0F0)
#define SERIALIZERWRITERTHREADSTATICSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90666F0)

	inline static constexpr unsigned int SerializerWriterThreadStaticState_TypeDefinitionIndex = 35430;

	class SerializerWriterThreadStaticState : public Il2CppObject
	{
	public:
		::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* BufferWriter; // 0x10
		::MemoryPack::MemoryPackWriterOptionalState* OptionalState; // 0x18

		::System::Void Init(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZERWRITERTHREADSTATICSTATE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZERWRITERTHREADSTATICSTATE_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZERWRITERTHREADSTATICSTATE_.CTOR_OFFSET))(nullptr);
		}

	};

