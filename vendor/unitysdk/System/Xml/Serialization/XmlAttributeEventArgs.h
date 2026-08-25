#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D1300)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeEventArgs_TypeDefinitionIndex = 27858;

	class XmlAttributeEventArgs : public Il2CppObject
	{
	public:
		::System::Object* o; // 0x10
		::System::Xml::XmlAttribute* attr; // 0x18
		::System::String* qnames; // 0x20
		::System::Int32 lineNumber; // 0x28
		::System::Int32 linePosition; // 0x2C

		::System::Void .ctor(::System::Xml::XmlAttribute* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlAttribute*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

	};
}

