#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_RES_GETSTRING_OFFSET UNITYSDK_OFFSET(0x99BD190)
#define SYSTEM_XML_RES_GETSTRING_OFFSET UNITYSDK_OFFSET(0x99BA900)

namespace System::Xml
{
	inline static constexpr unsigned int Res_TypeDefinitionIndex = 27842;

	class Res : public Il2CppObject
	{
	public:
		::System::String* GetString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_RES_GETSTRING_OFFSET))(str, nullptr);
		}

		::System::String* GetString(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_RES_GETSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

