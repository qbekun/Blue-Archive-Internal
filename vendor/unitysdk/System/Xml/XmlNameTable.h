#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLNAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLNAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLNAMETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C8D60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNameTable_TypeDefinitionIndex = 27830;

	class XmlNameTable : public Il2CppObject
	{
	public:
		::System::String* Get(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE_GET_OFFSET))(str, nullptr);
		}

		::System::String* Add(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Add(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE_ADD_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMETABLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

