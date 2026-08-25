#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_FLAGTEST_OFFSET UNITYSDK_OFFSET(0x9205BC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITESTRINGWITHCODE_OFFSET UNITYSDK_OFFSET(0x9205BD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITEWITHCODE_OFFSET UNITYSDK_OFFSET(0x9205C60)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int IOUtil_TypeDefinitionIndex = 24632;

	class IOUtil : public Il2CppObject
	{
	public:
		::System::Boolean FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum* arg, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::MessageEnum*, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_FLAGTEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteStringWithCode(::System::String* str, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITESTRINGWITHCODE_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteWithCode(::System::Type* arg, ::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITEWITHCODE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

