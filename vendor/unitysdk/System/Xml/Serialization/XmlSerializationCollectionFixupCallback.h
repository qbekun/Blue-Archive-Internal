#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E6F10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x99E7020)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationCollectionFixupCallback_TypeDefinitionIndex = 27903;

	class XmlSerializationCollectionFixupCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

