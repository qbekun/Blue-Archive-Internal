#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4ENCODING2143_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C6300)
#define SYSTEM_XML_UCS4ENCODING2143_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x99C6700)
#define SYSTEM_XML_UCS4ENCODING2143_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x99C6730)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding2143_TypeDefinitionIndex = 27822;

	class Ucs4Encoding2143 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING2143_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_EncodingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING2143_GET_ENCODINGNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING2143_GETPREAMBLE_OFFSET))(nullptr);
		}

	};
}

