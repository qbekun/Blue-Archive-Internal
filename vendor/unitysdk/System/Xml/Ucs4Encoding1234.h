#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4ENCODING1234_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C6200)
#define SYSTEM_XML_UCS4ENCODING1234_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x99C6520)
#define SYSTEM_XML_UCS4ENCODING1234_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x99C6550)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding1234_TypeDefinitionIndex = 27820;

	class Ucs4Encoding1234 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING1234_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_EncodingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING1234_GET_ENCODINGNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING1234_GETPREAMBLE_OFFSET))(nullptr);
		}

	};
}

