#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_OPENEDHOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C4030)

namespace System::Xml
{
	inline static constexpr unsigned int OpenedHost_TypeDefinitionIndex = 27814;

	class OpenedHost : public Il2CppObject
	{
	public:
		::System::Int32 nonCachedConnectionsCount; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_OPENEDHOST_.CTOR_OFFSET))(nullptr);
		}

	};
}

