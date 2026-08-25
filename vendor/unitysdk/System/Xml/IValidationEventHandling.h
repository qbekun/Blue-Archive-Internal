#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IVALIDATIONEVENTHANDLING_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IVALIDATIONEVENTHANDLING_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IValidationEventHandling_TypeDefinitionIndex = 27647;

	class IValidationEventHandling : public Il2CppObject
	{
	public:
		::System::Object* get_EventHandler()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IVALIDATIONEVENTHANDLING_GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void SendEvent(::System::Exception* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IVALIDATIONEVENTHANDLING_SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

