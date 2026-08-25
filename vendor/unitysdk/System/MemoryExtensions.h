#pragma once
#include "../unitysdk.h"

#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINAL_OFFSET UNITYSDK_OFFSET(0x935CBB0)
#define SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x935CD00)
#define SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x935CDA0)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x935CE10)
#define SYSTEM_MEMORYEXTENSIONS_TOUPPERINVARIANT_OFFSET UNITYSDK_OFFSET(0x935D0C0)
#define SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x935D290)
#define SYSTEM_MEMORYEXTENSIONS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x935D5A0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x935D8B0)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x935D910)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x935D9A0)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x935DA40)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x935DAB0)
#define SYSTEM_MEMORYEXTENSIONS_TRIM_OFFSET UNITYSDK_OFFSET(0x9351C30)
#define SYSTEM_MEMORYEXTENSIONS_TRIMSTART_OFFSET UNITYSDK_OFFSET(0x935DB50)
#define SYSTEM_MEMORYEXTENSIONS_TRIMEND_OFFSET UNITYSDK_OFFSET(0x935DC50)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_INDEXOFANY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORYEXTENSIONS_ISTYPECOMPARABLEASBYTES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int MemoryExtensions_TypeDefinitionIndex = 23798;

	class MemoryExtensions : public Il2CppObject
	{
	public:
		::System::Boolean EqualsOrdinal(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EqualsOrdinalIgnoreCase(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_EQUALSORDINALIGNORECASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, Il2CppObject* arg, ::System::StringComparison* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ToUpperInvariant(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TOUPPERINVARIANT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EndsWith(Il2CppObject* arg, Il2CppObject* arg, ::System::StringComparison* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean StartsWith(Il2CppObject* arg, Il2CppObject* arg, ::System::StringComparison* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_STARTSWITH_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* AsSpan(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AsSpan(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(str, nullptr);
		}

		Il2CppObject* AsSpan(::System::String* str, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* AsSpan(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* AsMemory(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(str, nullptr);
		}

		Il2CppObject* AsMemory(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* Trim(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TrimStart(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIMSTART_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TrimEnd(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_TRIMEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOfAny(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_INDEXOFANY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SequenceEqual(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_SEQUENCEEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean StartsWith(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_STARTSWITH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EndsWith(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ENDSWITH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AsSpan(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsSpan(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* AsSpan(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASSPAN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AsMemory(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AsMemory(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* AsMemory(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ASMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsTypeComparableAsBytes(uint64_t&* arg)
		{
			return (return (::System::Boolean(*)(uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORYEXTENSIONS_ISTYPECOMPARABLEASBYTES_OFFSET))(arg, nullptr);
		}

	};
}

