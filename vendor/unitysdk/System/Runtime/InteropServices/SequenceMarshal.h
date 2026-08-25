#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x9221F60)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SequenceMarshal_TypeDefinitionIndex = 24682;

	class SequenceMarshal : public Il2CppObject
	{
	public:
		::System::Boolean TryGetString(Il2CppObject* arg, ::System::String&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

