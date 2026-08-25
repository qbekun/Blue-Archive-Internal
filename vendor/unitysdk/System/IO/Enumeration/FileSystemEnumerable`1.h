#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_GET_SHOULDINCLUDEPREDICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_SET_SHOULDINCLUDEPREDICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_GET_SHOULDRECURSEPREDICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::IO::Enumeration
{
	inline static constexpr unsigned int FileSystemEnumerable`1_TypeDefinitionIndex = 25314;

	class FileSystemEnumerable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _enumerator; // 0x0
		Il2CppObject* _transform; // 0x0
		::System::IO::EnumerationOptions* _options; // 0x0
		::System::String* _directory; // 0x0
		Il2CppObject* _ShouldIncludePredicate_k__BackingField; // 0x0
		Il2CppObject* _ShouldRecursePredicate_k__BackingField; // 0x0

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::IO::EnumerationOptions* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* get_ShouldIncludePredicate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_GET_SHOULDINCLUDEPREDICATE_OFFSET))(nullptr);
		}

		::System::Void set_ShouldIncludePredicate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_SET_SHOULDINCLUDEPREDICATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShouldRecursePredicate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_GET_SHOULDRECURSEPREDICATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

