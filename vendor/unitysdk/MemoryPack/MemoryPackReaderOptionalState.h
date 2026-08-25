#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackSerializerOptions; }

#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x9061840)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9061960)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x90619B0)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90617B0)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_ADDOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x90619C0)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_GETOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x9061A90)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x9061B70)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x90615E0)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackReaderOptionalState_TypeDefinitionIndex = 35426;

	class MemoryPackReaderOptionalState : public Il2CppObject
	{
	public:
		Il2CppObject* refToObject; // 0x10
		::MemoryPack::MemoryPackSerializerOptions* _Options_k__BackingField; // 0x18

		::System::Void Init(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_Options(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddObjectReference(::System::UInt32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_ADDOBJECTREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetObjectReference(::System::UInt32 arg)
		{
			return (return (::System::Object*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_GETOBJECTREFERENCE_OFFSET))(arg, nullptr);
		}

		::MemoryPack::MemoryPackSerializerOptions* get_Options()
		{
			return (return (::MemoryPack::MemoryPackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATE_RESET_OFFSET))(nullptr);
		}

	};
}

