#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D11E0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x99D12F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeEventHandler_TypeDefinitionIndex = 27857;

	class XmlAttributeEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Xml::Serialization::XmlAttributeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::XmlAttributeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

