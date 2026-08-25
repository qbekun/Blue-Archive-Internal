#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_FUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9941380)
#define MS_INTERNAL_XML_XPATH_FUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9941410)
#define MS_INTERNAL_XML_XPATH_FUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99414D0)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99415D0)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x99415E0)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_TYPEOFFUNCTION_OFFSET UNITYSDK_OFFSET(0x9941670)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_ARGUMENTLIST_OFFSET UNITYSDK_OFFSET(0x9941680)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9941690)
#define MS_INTERNAL_XML_XPATH_FUNCTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99416A0)
#define MS_INTERNAL_XML_XPATH_FUNCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99416B0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Function_TypeDefinitionIndex = 28274;

	class Function : public WorldUpType
	{
	public:
		FunctionType* _functionType; // 0x10
		Il2CppObject* _argumentList; // 0x18
		::System::String* _name; // 0x20
		::System::String* _prefix; // 0x28
		::Il2CppArray<::System::Object*>* ReturnTypes; // 0x0

		::System::Void .ctor(FunctionType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(FunctionType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(FunctionType* arg, ::MS::Internal::Xml::XPath::AstNode* arg)
		{
			((::System::Void(*)(FunctionType*, ::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		FunctionType* get_TypeOfFunction()
		{
			return (return (FunctionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_TYPEOFFUNCTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_ArgumentList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_ARGUMENTLIST_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

