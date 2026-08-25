#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6390)
#define SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_GET_KEYATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x9AB63C0)
#define SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_GET_VALUEATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x9AB63F0)
#define SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9AB6420)

namespace System::Configuration
{
	inline static constexpr unsigned int DictionarySectionHandler_TypeDefinitionIndex = 30026;

	class DictionarySectionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_KeyAttributeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_GET_KEYATTRIBUTENAME_OFFSET))(nullptr);
		}

		::System::String* get_ValueAttributeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_GET_VALUEATTRIBUTENAME_OFFSET))(nullptr);
		}

		::System::Object* Create(::System::Object* arg, ::System::Object* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DICTIONARYSECTIONHANDLER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

