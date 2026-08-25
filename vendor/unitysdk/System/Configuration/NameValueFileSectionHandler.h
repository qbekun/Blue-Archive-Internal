#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB67E0)
#define SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9AB6810)

namespace System::Configuration
{
	inline static constexpr unsigned int NameValueFileSectionHandler_TypeDefinitionIndex = 30034;

	class NameValueFileSectionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Create(::System::Object* arg, ::System::Object* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

