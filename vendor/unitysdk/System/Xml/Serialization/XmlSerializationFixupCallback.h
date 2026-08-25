#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E7030)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x99E7140)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationFixupCallback_TypeDefinitionIndex = 27904;

	class XmlSerializationFixupCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONFIXUPCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

