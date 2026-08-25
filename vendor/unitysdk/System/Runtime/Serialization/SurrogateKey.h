#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9204280)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92044F0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateKey_TypeDefinitionIndex = 24614;

	class SurrogateKey : public Il2CppObject
	{
	public:
		::System::Type* m_type; // 0x10
		::System::Runtime::Serialization::StreamingContext* m_context; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

