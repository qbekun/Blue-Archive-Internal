#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9211760)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92117B0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerObjectInfoCache_TypeDefinitionIndex = 24660;

	class SerObjectInfoCache : public Il2CppObject
	{
	public:
		::System::String* fullTypeName; // 0x10
		::System::String* assemblyString; // 0x18
		::System::Boolean hasTypeForwardedFrom; // 0x20
		::Il2CppArray<::System::Object*>* memberInfos; // 0x28
		::Il2CppArray<::System::Object*>* memberNames; // 0x30
		::Il2CppArray<::System::Object*>* memberTypes; // 0x38

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

