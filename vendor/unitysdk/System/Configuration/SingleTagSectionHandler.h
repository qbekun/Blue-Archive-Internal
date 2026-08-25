#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6EF0)
#define SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9AB6F20)

namespace System::Configuration
{
	inline static constexpr unsigned int SingleTagSectionHandler_TypeDefinitionIndex = 30049;

	class SingleTagSectionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Create(::System::Object* arg, ::System::Object* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

