#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET UNITYSDK_OFFSET(0x99B9640)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET UNITYSDK_OFFSET(0x99B96F0)
#define SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x99B97B0)
#define SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x99B98F0)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET UNITYSDK_OFFSET(0x99B9960)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET UNITYSDK_OFFSET(0x99B9A80)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET UNITYSDK_OFFSET(0x99B9AD0)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET UNITYSDK_OFFSET(0x99B9B90)
#define SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET UNITYSDK_OFFSET(0x99B9CA0)
#define SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x99BA1A0)
#define SYSTEM_XML_VALIDATENAMES_SPLITQNAME_OFFSET UNITYSDK_OFFSET(0x99BA440)
#define SYSTEM_XML_VALIDATENAMES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99BA920)

namespace System::Xml
{
	inline static constexpr unsigned int ValidateNames_TypeDefinitionIndex = 27805;

	class ValidateNames : public Il2CppObject
	{
	public:
		::System::Xml::XmlCharType* xmlCharType; // 0x0

		::System::Int32 ParseNmtoken(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 ParseNmtokenNoNamespaces(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 ParseNameNoNamespaces(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsNameNoNamespaces(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET))(str, nullptr);
		}

		::System::Int32 ParseNCName(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 ParseNCName(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 ParseQName(::System::String* str, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ParseQNameThrow(::System::String* str, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ThrowInvalidName(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Exception* GetInvalidNameException(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SplitQName(::System::String* str, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_SPLITQNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

