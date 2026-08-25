#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int IObjectReference_TypeDefinitionIndex = 24571;

	class IObjectReference : public Il2CppObject
	{
	public:
		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

