#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4ENCODING3412_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C6400)
#define SYSTEM_XML_UCS4ENCODING3412_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x99C67F0)
#define SYSTEM_XML_UCS4ENCODING3412_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x99C6820)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding3412_TypeDefinitionIndex = 27823;

	class Ucs4Encoding3412 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING3412_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_EncodingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING3412_GET_ENCODINGNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING3412_GETPREAMBLE_OFFSET))(nullptr);
		}

	};
}

