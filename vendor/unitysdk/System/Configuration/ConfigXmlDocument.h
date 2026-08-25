#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6230)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x9AB6260)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9AB6290)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM.CONFIGURATION.INTERNAL.ICONFIGERRORINFO.GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x9AB62C0)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM.CONFIGURATION.INTERNAL.ICONFIGERRORINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9AB62F0)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_LOADSINGLEELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB6320)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigXmlDocument_TypeDefinitionIndex = 30024;

	class ConfigXmlDocument : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Filename()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::String* System.Configuration.Internal.IConfigErrorInfo.get_Filename()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM.CONFIGURATION.INTERNAL.ICONFIGERRORINFO.GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Int32 System.Configuration.Internal.IConfigErrorInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM.CONFIGURATION.INTERNAL.ICONFIGERRORINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Void LoadSingleElement(::System::String* str, ::System::Xml::XmlTextReader* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlTextReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_LOADSINGLEELEMENT_OFFSET))(str, arg, nullptr);
		}

	};
}

