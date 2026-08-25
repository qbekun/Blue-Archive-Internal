#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92064F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9206520)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9206570)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryAssemblyInfo_TypeDefinitionIndex = 24633;

	class BinaryAssemblyInfo : public Il2CppObject
	{
	public:
		::System::String* assemblyString; // 0x10
		::System::Reflection::Assembly* assembly; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Reflection::Assembly* GetAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET))(nullptr);
		}

	};
}

