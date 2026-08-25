#pragma once
#include "../../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LISTEXTENSIONS_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LISTEXTENSIONS_HEAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LISTEXTENSIONS_TAIL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ListExtensions_TypeDefinitionIndex = 34489;

	class ListExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsEmpty(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LISTEXTENSIONS_ISEMPTY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Head(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LISTEXTENSIONS_HEAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Tail(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LISTEXTENSIONS_TAIL_OFFSET))(arg, nullptr);
		}

	};
}

