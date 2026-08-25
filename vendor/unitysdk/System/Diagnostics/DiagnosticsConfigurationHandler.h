#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB51C0)
#define SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9AB51F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DiagnosticsConfigurationHandler_TypeDefinitionIndex = 30008;

	class DiagnosticsConfigurationHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Create(::System::Object* arg, ::System::Object* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

