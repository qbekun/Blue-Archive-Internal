#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_SECURITYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x917C510)
#define SYSTEM_SECURITY_SECURITYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x917E5C0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x917E960)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x917E970)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x917E7F0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x917C520)
#define SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x917C6F0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET UNITYSDK_OFFSET(0x917F100)
#define SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x917E9F0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x917F2C0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x917F330)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET UNITYSDK_OFFSET(0x917E780)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET UNITYSDK_OFFSET(0x917E980)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET UNITYSDK_OFFSET(0x917F3A0)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFTAG_OFFSET UNITYSDK_OFFSET(0x917F4C0)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x917F5F0)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET UNITYSDK_OFFSET(0x917F670)
#define SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x917EB70)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_M_STRTEXT_OFFSET UNITYSDK_OFFSET(0x917FD70)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET UNITYSDK_OFFSET(0x917FD80)
#define SYSTEM_SECURITY_SECURITYELEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x917FFE0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityElement_TypeDefinitionIndex = 24281;

	class SecurityElement : public Il2CppObject
	{
	public:
		::System::String* text; // 0x10
		::System::String* tag; // 0x18
		::System::Collections::ArrayList* attributes; // 0x20
		::System::Collections::ArrayList* children; // 0x28
		::Il2CppArray<::System::Object*>* invalid_tag_chars; // 0x0
		::Il2CppArray<::System::Object*>* invalid_text_chars; // 0x8
		::Il2CppArray<::System::Object*>* invalid_attr_name_chars; // 0x10
		::Il2CppArray<::System::Object*>* invalid_attr_value_chars; // 0x18
		::Il2CppArray<::System::Object*>* invalid_chars; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Collections::ArrayList* get_Children()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::String* get_Tag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void AddAttribute(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::Void AddChild(::System::Security::SecurityElement* arg)
		{
			((::System::Void(*)(::System::Security::SecurityElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::String* Escape(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET))(str, nullptr);
		}

		::System::String* Unescape(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsValidAttributeName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsValidAttributeValue(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsValidTag(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET))(str, nullptr);
		}

		::System::Boolean IsValidText(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET))(str, nullptr);
		}

		::System::Security::SecurityElement* SearchForChildByTag(::System::String* str)
		{
			return (return (::System::Security::SecurityElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET))(str, nullptr);
		}

		::System::String* SearchForTextOfTag(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFTAG_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void ToXml(::System::Text::StringBuilder&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET))(arg, arg, nullptr);
		}

		SecurityAttribute* GetAttribute(::System::String* str)
		{
			return (return (SecurityAttribute*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void set_m_strText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SET_M_STRTEXT_OFFSET))(str, nullptr);
		}

		::System::String* SearchForTextOfLocalName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

