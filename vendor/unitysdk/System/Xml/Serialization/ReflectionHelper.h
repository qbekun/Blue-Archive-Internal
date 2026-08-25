#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x99D1BE0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x99D1C90)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERCLRTYPE_OFFSET UNITYSDK_OFFSET(0x99D1D50)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDCLRTYPE_OFFSET UNITYSDK_OFFSET(0x99D1E80)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_CHECKSERIALIZABLETYPE_OFFSET UNITYSDK_OFFSET(0x99D1FC0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D2380)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99D2420)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ReflectionHelper_TypeDefinitionIndex = 27868;

	class ReflectionHelper : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _clrTypes; // 0x10
		::System::Collections::Hashtable* _schemaTypes; // 0x18
		::Il2CppArray<::System::Object*>* empty_modifiers; // 0x0

		::System::Void RegisterSchemaType(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERSCHEMATYPE_OFFSET))(arg, str, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRegisteredSchemaType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDSCHEMATYPE_OFFSET))(str, str, nullptr);
		}

		::System::Void RegisterClrType(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERCLRTYPE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRegisteredClrType(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDCLRTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckSerializableType(::System::Type* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_CHECKSERIALIZABLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

