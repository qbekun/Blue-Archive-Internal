#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D16A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventArgs_TypeDefinitionIndex = 27862;

	class XmlNodeEventArgs : public Il2CppObject
	{
	public:
		::System::Object* o; // 0x10
		::System::Xml::XmlNode* xmlNode; // 0x18
		::System::Int32 lineNumber; // 0x20
		::System::Int32 linePosition; // 0x24

		::System::Void .ctor(::System::Xml::XmlNode* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::System::Int32, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

