#pragma once
#include "unitysdk.h"

#define XMLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x996A9A0)
#define XMLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x996AA30)

	inline static constexpr unsigned int XmlContext_TypeDefinitionIndex = 27693;

	class XmlContext : public Il2CppObject
	{
	public:
		::System::Xml::XmlSpace* xmlSpace; // 0x10
		::System::String* xmlLang; // 0x18
		::System::String* defaultNamespace; // 0x20
		XmlContext* previousContext; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLCONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(XmlContext* arg)
		{
			((::System::Void(*)(XmlContext*, ::PVOID))((::PBYTE)hIl2Cpp + XMLCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

