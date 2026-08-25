#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.EQUALS_OFFSET UNITYSDK_OFFSET(0x99CFE10)
#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99CFEE0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CFE00)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNavigatorKeyComparer_TypeDefinitionIndex = 27851;

	class XPathNavigatorKeyComparer : public Il2CppObject
	{
	public:
		::System::Boolean System.Collections.IEqualityComparer.Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IEqualityComparer.GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

