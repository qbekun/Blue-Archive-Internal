#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D1580)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x99D1690)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventHandler_TypeDefinitionIndex = 27861;

	class XmlNodeEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Xml::Serialization::XmlNodeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::XmlNodeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

