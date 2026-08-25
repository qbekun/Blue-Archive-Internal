#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ISURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ISurrogateSelector_TypeDefinitionIndex = 24580;

	class ISurrogateSelector : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISurrogateSelector&* arg)
		{
			return (return (::System::Runtime::Serialization::ISerializationSurrogate*(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ISURROGATESELECTOR_GETSURROGATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

