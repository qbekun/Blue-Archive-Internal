#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_MONOLINQHELPER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::IO
{
	inline static constexpr unsigned int MonoLinqHelper_TypeDefinitionIndex = 25308;

	class MonoLinqHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ToArray(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOLINQHELPER_TOARRAY_OFFSET))(arg, nullptr);
		}

	};
}

