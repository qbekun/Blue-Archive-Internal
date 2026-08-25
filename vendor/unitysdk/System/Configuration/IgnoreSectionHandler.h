#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6510)
#define SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9AB6540)

namespace System::Configuration
{
	inline static constexpr unsigned int IgnoreSectionHandler_TypeDefinitionIndex = 30029;

	class IgnoreSectionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Create(::System::Object* arg, ::System::Object* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

