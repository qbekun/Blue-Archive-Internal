#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x9211840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_ASSEMBLYSTRING_OFFSET UNITYSDK_OFFSET(0x9211850)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_HASTYPEFORWARDEDFROM_OFFSET UNITYSDK_OFFSET(0x9211860)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9211870)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int TypeInformation_TypeDefinitionIndex = 24661;

	class TypeInformation : public Il2CppObject
	{
	public:
		::System::String* fullTypeName; // 0x10
		::System::String* assemblyString; // 0x18
		::System::Boolean hasTypeForwardedFrom; // 0x20

		::System::String* get_FullTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_FULLTYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_AssemblyString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_ASSEMBLYSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasTypeForwardedFrom()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_HASTYPEFORWARDEDFROM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

	};
}

