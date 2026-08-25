#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4ENCODING4321_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C6100)
#define SYSTEM_XML_UCS4ENCODING4321_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x99C6610)
#define SYSTEM_XML_UCS4ENCODING4321_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x99C6640)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding4321_TypeDefinitionIndex = 27821;

	class Ucs4Encoding4321 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING4321_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_EncodingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING4321_GET_ENCODINGNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING4321_GETPREAMBLE_OFFSET))(nullptr);
		}

	};
}

