#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCALNAMESPACES_OFFSET UNITYSDK_OFFSET(0x9955EE0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETINSCOPENAMESPACES_OFFSET UNITYSDK_OFFSET(0x9955F60)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99559E0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9955A80)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTCHILD_OFFSET UNITYSDK_OFFSET(0x99564D0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTSIBLING_OFFSET UNITYSDK_OFFSET(0x9956370)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETPARENT_OFFSET UNITYSDK_OFFSET(0x99566A0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x9958120)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETELEMENTCHILD_OFFSET UNITYSDK_OFFSET(0x9956A00)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETELEMENTSIBLING_OFFSET UNITYSDK_OFFSET(0x9956C10)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTCHILD_OFFSET UNITYSDK_OFFSET(0x9956E10)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTSIBLING_OFFSET UNITYSDK_OFFSET(0x9956FA0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9955BE0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETELEMENTFOLLOWING_OFFSET UNITYSDK_OFFSET(0x9957310)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTFOLLOWING_OFFSET UNITYSDK_OFFSET(0x9957A00)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETTEXTFOLLOWING_OFFSET UNITYSDK_OFFSET(0x9955260)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNONDESCENDANT_OFFSET UNITYSDK_OFFSET(0x9955180)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCHILD_OFFSET UNITYSDK_OFFSET(0x99585B0)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeHelper_TypeDefinitionIndex = 28329;

	class XPathNodeHelper : public Il2CppObject
	{
	public:
		::System::Int32 GetLocalNamespaces(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCALNAMESPACES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetInScopeNamespaces(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETINSCOPENAMESPACES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetFirstAttribute(::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETFIRSTATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetNextAttribute(::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNEXTATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetContentChild(::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTCHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetContentSibling(::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTSIBLING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetParent(::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLocation(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetElementChild(::System::Object[]&* arg, int32_t&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETELEMENTCHILD_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Boolean GetElementSibling(::System::Object[]&* arg, int32_t&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETELEMENTSIBLING_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Boolean GetContentChild(::System::Object[]&* arg, int32_t&* arg, ::System::Xml::XPath::XPathNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTCHILD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetContentSibling(::System::Object[]&* arg, int32_t&* arg, ::System::Xml::XPath::XPathNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTSIBLING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetAttribute(::System::Object[]&* arg, int32_t&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETATTRIBUTE_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Boolean GetElementFollowing(::System::Object[]&* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETELEMENTFOLLOWING_OFFSET))(arg, arg, arg, arg, str, str, nullptr);
		}

		::System::Boolean GetContentFollowing(::System::Object[]&* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Xml::XPath::XPathNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCONTENTFOLLOWING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetTextFollowing(::System::Object[]&* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETTEXTFOLLOWING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetNonDescendant(::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNONDESCENDANT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetChild(::System::Object[]&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETCHILD_OFFSET))(arg, arg, nullptr);
		}

	};
}

