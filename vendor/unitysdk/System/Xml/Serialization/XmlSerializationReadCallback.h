#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E7160)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x99E7220)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReadCallback_TypeDefinitionIndex = 27906;

	class XmlSerializationReadCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADCALLBACK_INVOKE_OFFSET))(nullptr);
		}

	};
}

