#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99D5E70)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x99D2320)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x99D8680)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x99D93F0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x99D9440)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_FINDPRIMITIVETYPEDATA_OFFSET UNITYSDK_OFFSET(0x99D96A0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETARRAYNAME_OFFSET UNITYSDK_OFFSET(0x99D2DB0)
#define SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_PARSEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x99D97A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeTranslator_TypeDefinitionIndex = 27875;

	class TypeTranslator : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* nameCache; // 0x0
		::System::Collections::Hashtable* primitiveTypes; // 0x8
		::System::Collections::Hashtable* primitiveArrayTypes; // 0x10
		::System::Collections::Hashtable* nullableTypes; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::TypeData* GetTypeData(::System::Type* arg)
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::TypeData* GetTypeData(::System::Type* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETTYPEDATA_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(::System::String* str)
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET))(str, nullptr);
		}

		::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETPRIMITIVETYPEDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Xml::Serialization::TypeData* FindPrimitiveTypeData(::System::String* str)
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_FINDPRIMITIVETYPEDATA_OFFSET))(str, nullptr);
		}

		::System::String* GetArrayName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_GETARRAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void ParseArrayType(::System::String* str, ::System::String&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPETRANSLATOR_PARSEARRAYTYPE_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

