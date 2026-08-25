#pragma once
#include "../unitysdk.h"

#define SPINE_HASHSETEXTENSIONS_ADDALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int HashSetExtensions_TypeDefinitionIndex = 35002;

	class HashSetExtensions : public Il2CppObject
	{
	public:
		::System::Boolean AddAll(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_HASHSETEXTENSIONS_ADDALL_OFFSET))(arg, arg, nullptr);
		}

	};
}

