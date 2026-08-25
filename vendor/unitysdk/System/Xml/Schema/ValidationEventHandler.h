#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE1D0)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x98CE2E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationEventHandler_TypeDefinitionIndex = 28104;

	class ValidationEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Xml::Schema::ValidationEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Schema::ValidationEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

