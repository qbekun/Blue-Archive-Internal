#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCACHEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C40D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCachedStream_TypeDefinitionIndex = 27816;

	class XmlCachedStream : public Il2CppObject
	{
	public:
		::System::Uri* uri; // 0x50

		::System::Void .ctor(::System::Uri* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCACHEDSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

