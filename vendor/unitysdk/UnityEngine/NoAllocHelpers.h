#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_NOALLOCHELPERS_RESIZELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NOALLOCHELPERS_ENSURELISTELEMCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET UNITYSDK_OFFSET(0xA231CC0)
#define UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLISTT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET UNITYSDK_OFFSET(0xA231CD0)
#define UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET UNITYSDK_OFFSET(0xA231D10)

namespace UnityEngine
{
	inline static constexpr unsigned int NoAllocHelpers_TypeDefinitionIndex = 31158;

	class NoAllocHelpers : public Il2CppObject
	{
	public:
		::System::Void ResizeList(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_RESIZELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureListElemCount(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_ENSURELISTELEMCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SafeLength(::System::Array* arg)
		{
			return (return (::System::Int32(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 SafeLength(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExtractArrayFromListT(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLISTT_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_ResizeList(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Array* ExtractArrayFromList(::System::Object* arg)
		{
			return (return (::System::Array*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET))(arg, nullptr);
		}

	};
}

