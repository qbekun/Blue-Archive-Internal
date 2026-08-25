#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriterOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }

#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x906CE90)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x906CEA0)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9067AC0)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x906CEB0)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x9067C00)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x906A630)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_GETORADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x906CF40)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x906D030)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x906D080)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackWriterOptionalState_TypeDefinitionIndex = 35440;

	class MemoryPackWriterOptionalState : public Il2CppObject
	{
	public:
		::MemoryPack::MemoryPackWriterOptionalState* NullState; // 0x0
		::System::UInt32 nextId; // 0x10
		Il2CppObject* objectToRef; // 0x18
		::MemoryPack::MemoryPackSerializerOptions* _Options_k__BackingField; // 0x20

		::MemoryPack::MemoryPackSerializerOptions* get_Options()
		{
			return (return (::MemoryPack::MemoryPackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_RESET_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrAddReference(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_GETORADDREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

