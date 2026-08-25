#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9204080)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_ADDSURROGATE_OFFSET UNITYSDK_OFFSET(0x9204110)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x92042D0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateSelector_TypeDefinitionIndex = 24613;

	class SurrogateSelector : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::SurrogateHashtable* m_surrogates; // 0x10
		::System::Runtime::Serialization::ISurrogateSelector* m_nextSelector; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddSurrogate(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISerializationSurrogate* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISerializationSurrogate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_ADDSURROGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISurrogateSelector&* arg)
		{
			return (return (::System::Runtime::Serialization::ISerializationSurrogate*(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_GETSURROGATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

