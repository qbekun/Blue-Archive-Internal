#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D13B0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x99D14C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementEventHandler_TypeDefinitionIndex = 27859;

	class XmlElementEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Xml::Serialization::XmlElementEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::XmlElementEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

