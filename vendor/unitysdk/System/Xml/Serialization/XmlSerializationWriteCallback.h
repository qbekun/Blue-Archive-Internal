#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99F2ED0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x99F2FE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriteCallback_TypeDefinitionIndex = 27915;

	class XmlSerializationWriteCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITECALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

