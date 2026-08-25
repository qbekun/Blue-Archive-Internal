#pragma once
#include "unitysdk.h"

#define DELEGATEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATEENUMERATOR_TRANSFORMENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATEENUMERATOR_SHOULDRECURSEINTOENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATEENUMERATOR_SHOULDINCLUDEENTRY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DelegateEnumerator_TypeDefinitionIndex = 25313;

	class DelegateEnumerator : public ::MX::Logic::Actions::MoveAction
	{
	public:
		Il2CppObject* _enumerable; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TransformEntry(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEENUMERATOR_TRANSFORMENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldRecurseIntoEntry(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEENUMERATOR_SHOULDRECURSEINTOENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldIncludeEntry(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEENUMERATOR_SHOULDINCLUDEENTRY_OFFSET))(arg, nullptr);
		}

	};

