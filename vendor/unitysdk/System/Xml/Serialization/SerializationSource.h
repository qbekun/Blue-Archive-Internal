#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D2490)
#define SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE_BASEEQUALS_OFFSET UNITYSDK_OFFSET(0x99D24E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int SerializationSource_TypeDefinitionIndex = 27870;

	class SerializationSource : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* includedTypes; // 0x10
		::System::String* namspace; // 0x18
		::System::Boolean canBeGenerated; // 0x20

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean BaseEquals(::System::Xml::Serialization::SerializationSource* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Serialization::SerializationSource*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_SERIALIZATIONSOURCE_BASEEQUALS_OFFSET))(arg, nullptr);
		}

	};
}

