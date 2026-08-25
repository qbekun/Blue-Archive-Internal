#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class TextureFormat; }

#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_PREPAREMETADATA_OFFSET UNITYSDK_OFFSET(0xA245630)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITEINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA245810)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITESTRINGTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA245880)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_FINALIZESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA245910)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_SAVESCREENSHOTTODISK_OFFSET UNITYSDK_OFFSET(0xA245990)

namespace UnityEngine::Profiling::Memory::Experimental
{
	inline static constexpr unsigned int MemoryProfiler_TypeDefinitionIndex = 31239;

	class MemoryProfiler : public Il2CppObject
	{
	public:
		Il2CppObject* m_SnapshotFinished; // 0x0
		Il2CppObject* m_SaveScreenshotToDisk; // 0x8
		Il2CppObject* createMetaData; // 0x10

		::Il2CppArray<::System::Object*>* PrepareMetadata()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_PREPAREMETADATA_OFFSET))(nullptr);
		}

		::System::Int32 WriteIntToByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITEINTTOBYTEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WriteStringToByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITESTRINGTOBYTEARRAY_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void FinalizeSnapshot(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_FINALIZESNAPSHOT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SaveScreenshotToDisk(::System::String* str, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_SAVESCREENSHOTTODISK_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

