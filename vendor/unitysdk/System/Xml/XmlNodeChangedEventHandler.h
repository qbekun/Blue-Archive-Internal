#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A5900)
#define SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x99A5A10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedEventHandler_TypeDefinitionIndex = 27776;

	class XmlNodeChangedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Xml::XmlNodeChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::XmlNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

