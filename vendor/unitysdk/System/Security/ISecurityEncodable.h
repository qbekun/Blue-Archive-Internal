#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_ISECURITYENCODABLE_TOXML_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security
{
	inline static constexpr unsigned int ISecurityEncodable_TypeDefinitionIndex = 24272;

	class ISecurityEncodable : public Il2CppObject
	{
	public:
		::System::Security::SecurityElement* ToXml()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ISECURITYENCODABLE_TOXML_OFFSET))(nullptr);
		}

	};
}

