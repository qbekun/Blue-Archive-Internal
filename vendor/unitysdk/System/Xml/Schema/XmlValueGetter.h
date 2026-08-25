#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLVALUEGETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4C30)
#define SYSTEM_XML_SCHEMA_XMLVALUEGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x98F4CF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlValueGetter_TypeDefinitionIndex = 28207;

	class XmlValueGetter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUEGETTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUEGETTER_INVOKE_OFFSET))(nullptr);
		}

	};
}

