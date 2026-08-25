#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XDECLARATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98581B0)
#define SYSTEM_XML_LINQ_XDECLARATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9858210)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x98582C0)
#define SYSTEM_XML_LINQ_XDECLARATION_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x98582D0)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x98582E0)
#define SYSTEM_XML_LINQ_XDECLARATION_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x98582F0)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9858300)
#define SYSTEM_XML_LINQ_XDECLARATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9858310)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDeclaration_TypeDefinitionIndex = 37293;

	class XDeclaration : public Il2CppObject
	{
	public:
		::System::String* _version; // 0x10
		::System::String* _encoding; // 0x18
		::System::String* _standalone; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XDeclaration* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDeclaration*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Encoding()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Encoding(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_SET_ENCODING_OFFSET))(str, nullptr);
		}

		::System::String* get_Standalone()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_GET_STANDALONE_OFFSET))(nullptr);
		}

		::System::Void set_Standalone(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_SET_STANDALONE_OFFSET))(str, nullptr);
		}

		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

