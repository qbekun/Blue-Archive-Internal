#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_BINDTONAME_OFFSET UNITYSDK_OFFSET(0x91F7CB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7CE0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationBinder_TypeDefinitionIndex = 24582;

	class SerializationBinder : public Il2CppObject
	{
	public:
		::System::Void BindToName(::System::Type* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_BINDTONAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* BindToType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_BINDTOTYPE_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

