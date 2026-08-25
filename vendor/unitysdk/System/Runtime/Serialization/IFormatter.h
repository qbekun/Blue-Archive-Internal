#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int IFormatter_TypeDefinitionIndex = 24591;

	class IFormatter : public Il2CppObject
	{
	public:
		::System::Object* Deserialize(::System::IO::Stream* arg)
		{
			return (return (::System::Object*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

