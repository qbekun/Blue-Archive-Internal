#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D5C10)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99D5C60)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x99D5CB0)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x99D5D70)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99D5E10)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeMember_TypeDefinitionIndex = 27874;

	class TypeMember : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		::System::String* member; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Xml::Serialization::TypeMember* arg, ::System::Xml::Serialization::TypeMember* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Serialization::TypeMember*, ::System::Xml::Serialization::TypeMember*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

