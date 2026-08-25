#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCHARTYPE_GET_STATICLOCK_OFFSET UNITYSDK_OFFSET(0x99BA9E0)
#define SYSTEM_XML_XMLCHARTYPE_INITINSTANCE_OFFSET UNITYSDK_OFFSET(0x99BAA80)
#define SYSTEM_XML_XMLCHARTYPE_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x99BACD0)
#define SYSTEM_XML_XMLCHARTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99BAE50)
#define SYSTEM_XML_XMLCHARTYPE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x99BA000)
#define SYSTEM_XML_XMLCHARTYPE_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x99BAE60)
#define SYSTEM_XML_XMLCHARTYPE_ISNCNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x99B9FD0)
#define SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x99BA080)
#define SYSTEM_XML_XMLCHARTYPE_ISNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x99BAE90)
#define SYSTEM_XML_XMLCHARTYPE_ISCHARDATA_OFFSET UNITYSDK_OFFSET(0x99BAED0)
#define SYSTEM_XML_XMLCHARTYPE_ISPUBIDCHAR_OFFSET UNITYSDK_OFFSET(0x99BAF00)
#define SYSTEM_XML_XMLCHARTYPE_ISTEXTCHAR_OFFSET UNITYSDK_OFFSET(0x99BAF70)
#define SYSTEM_XML_XMLCHARTYPE_ISLETTER_OFFSET UNITYSDK_OFFSET(0x99BAFA0)
#define SYSTEM_XML_XMLCHARTYPE_ISNCNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x99BAFD0)
#define SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x99BB000)
#define SYSTEM_XML_XMLCHARTYPE_ISNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x99BB040)
#define SYSTEM_XML_XMLCHARTYPE_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x99BB080)
#define SYSTEM_XML_XMLCHARTYPE_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x99BB0A0)
#define SYSTEM_XML_XMLCHARTYPE_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x99BB0B0)
#define SYSTEM_XML_XMLCHARTYPE_ISSURROGATE_OFFSET UNITYSDK_OFFSET(0x99BB0C0)
#define SYSTEM_XML_XMLCHARTYPE_COMBINESURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x99BB0D0)
#define SYSTEM_XML_XMLCHARTYPE_SPLITSURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x99BB0F0)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACE_OFFSET UNITYSDK_OFFSET(0x99BB130)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACEWITHPOS_OFFSET UNITYSDK_OFFSET(0x99BB1B0)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYCHARDATA_OFFSET UNITYSDK_OFFSET(0x99BB230)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYDIGITS_OFFSET UNITYSDK_OFFSET(0x99BB300)
#define SYSTEM_XML_XMLCHARTYPE_ISPUBLICID_OFFSET UNITYSDK_OFFSET(0x99BB360)
#define SYSTEM_XML_XMLCHARTYPE_INRANGE_OFFSET UNITYSDK_OFFSET(0x99BB090)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCharType_TypeDefinitionIndex = 27806;

	class XmlCharType : public Il2CppObject
	{
	public:
		::System::Object* s_Lock; // 0x0
		::Il2CppArray<::System::Object*>* s_CharProperties; // 0x8
		::Il2CppArray<::System::Object*>* charProperties; // 0x10

		::System::Object* get_StaticLock()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_GET_STATICLOCK_OFFSET))(nullptr);
		}

		::System::Void InitInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_INITINSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetProperties(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Byte arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_SETPROPERTIES_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlCharType* get_Instance()
		{
			return (return (::System::Xml::XmlCharType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean IsWhiteSpace(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNCNameSingleChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNCNAMESINGLECHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStartNCNameSingleChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMESINGLECHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNameSingleChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNAMESINGLECHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCharData(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISCHARDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPubidChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISPUBIDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISTEXTCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLetter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISLETTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNCNameCharXml4e(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNCNAMECHARXML4E_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStartNCNameCharXml4e(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMECHARXML4E_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNameCharXml4e(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNAMECHARXML4E_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDigit(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHighSurrogate(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISHIGHSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLowSurrogate(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISLOWSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSurrogate(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CombineSurrogateChar(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_COMBINESURROGATECHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SplitSurrogateChar(::System::Int32 arg, wchar_t&* arg, wchar_t&* arg)
		{
			((::System::Void(*)(::System::Int32, wchar_t&*, wchar_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_SPLITSURROGATECHAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsOnlyWhitespace(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Int32 IsOnlyWhitespaceWithPos(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACEWITHPOS_OFFSET))(str, nullptr);
		}

		::System::Int32 IsOnlyCharData(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYCHARDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean IsOnlyDigits(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYDIGITS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 IsPublicId(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISPUBLICID_OFFSET))(str, nullptr);
		}

		::System::Boolean InRange(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_INRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

