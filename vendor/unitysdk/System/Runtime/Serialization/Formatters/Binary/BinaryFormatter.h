#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_ASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x920BBB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_SURROGATESELECTOR_OFFSET UNITYSDK_OFFSET(0x920BBC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x920BBD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x920BC40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x920BCA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x920BCE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x920BCC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x920BF70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x920BF90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x920BFB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_GETTYPEINFORMATION_OFFSET UNITYSDK_OFFSET(0x920C2A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x920C570)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryFormatter_TypeDefinitionIndex = 24654;

	class BinaryFormatter : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x10
		::System::Runtime::Serialization::StreamingContext* m_context; // 0x18
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x28
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle* m_typeFormat; // 0x30
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* m_assemblyFormat; // 0x34
		::System::Runtime::Serialization::Formatters::TypeFilterLevel* m_securityLevel; // 0x38
		::Il2CppArray<::System::Object*>* m_crossAppDomainArray; // 0x40
		Il2CppObject* typeNameCache; // 0x0

		::System::Void set_AssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_ASSEMBLYFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ISurrogateSelector*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SET_SURROGATESELECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Deserialize(::System::IO::Stream* arg)
		{
			return (return (::System::Object*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Object* Deserialize(::System::IO::Stream* arg, ::System::Runtime::Remoting::Messaging::HeaderHandler* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Deserialize(::System::IO::Stream* arg, ::System::Runtime::Remoting::Messaging::HeaderHandler* arg)
		{
			return (return (::System::Object*(*)(::System::IO::Stream*, ::System::Runtime::Remoting::Messaging::HeaderHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::Stream* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::Stream* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::Stream* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_SERIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::TypeInformation*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_GETTYPEINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

