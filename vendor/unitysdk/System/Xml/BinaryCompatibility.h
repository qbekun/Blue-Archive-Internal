#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BINARYCOMPATIBILITY_GET_TARGETSATLEAST_DESKTOP_V4_5_2_OFFSET UNITYSDK_OFFSET(0x99CB6A0)

namespace System::Xml
{
	inline static constexpr unsigned int BinaryCompatibility_TypeDefinitionIndex = 27841;

	class BinaryCompatibility : public Il2CppObject
	{
	public:
		::System::Boolean get_TargetsAtLeast_Desktop_V4_5_2()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINARYCOMPATIBILITY_GET_TARGETSATLEAST_DESKTOP_V4_5_2_OFFSET))(nullptr);
		}

	};
}

