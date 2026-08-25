#pragma once
#include "unitysdk.h"

#define VALIDATIONEVENTHANDLING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9976100)
#define VALIDATIONEVENTHANDLING_SYSTEM.XML.IVALIDATIONEVENTHANDLING.GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x99777F0)
#define VALIDATIONEVENTHANDLING_SYSTEM.XML.IVALIDATIONEVENTHANDLING.SENDEVENT_OFFSET UNITYSDK_OFFSET(0x9977800)
#define VALIDATIONEVENTHANDLING_ADDHANDLER_OFFSET UNITYSDK_OFFSET(0x9976130)

	inline static constexpr unsigned int ValidationEventHandling_TypeDefinitionIndex = 27712;

	class ValidationEventHandling : public Il2CppObject
	{
	public:
		::System::Xml::XmlValidatingReaderImpl* reader; // 0x10
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x18

		::System::Void .ctor(::System::Xml::XmlValidatingReaderImpl* arg)
		{
			((::System::Void(*)(::System::Xml::XmlValidatingReaderImpl*, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATIONEVENTHANDLING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Xml.IValidationEventHandling.get_EventHandler()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALIDATIONEVENTHANDLING_SYSTEM.XML.IVALIDATIONEVENTHANDLING.GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void System.Xml.IValidationEventHandling.SendEvent(::System::Exception* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATIONEVENTHANDLING_SYSTEM.XML.IVALIDATIONEVENTHANDLING.SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHandler(::System::Xml::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATIONEVENTHANDLING_ADDHANDLER_OFFSET))(arg, nullptr);
		}

	};

