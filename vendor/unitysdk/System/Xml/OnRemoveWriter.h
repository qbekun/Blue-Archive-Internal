#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_ONREMOVEWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9958DE0)
#define SYSTEM_XML_ONREMOVEWRITER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9958EF0)

namespace System::Xml
{
	inline static constexpr unsigned int OnRemoveWriter_TypeDefinitionIndex = 27646;

	class OnRemoveWriter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::XmlRawWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlRawWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

