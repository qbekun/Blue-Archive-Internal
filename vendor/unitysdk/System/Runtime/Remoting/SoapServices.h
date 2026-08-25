#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHASSEMBLY_OFFSET UNITYSDK_OFFSET(0x91D2F50)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNS_OFFSET UNITYSDK_OFFSET(0x91D2F80)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNSANDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x91D2FB0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CODEXMLNAMESPACEFORCLRTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x91D2FE0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETNAMEKEY_OFFSET UNITYSDK_OFFSET(0x91D3230)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x91D3290)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLELEMENTFORINTEROPTYPE_OFFSET UNITYSDK_OFFSET(0x91D33D0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODCALL_OFFSET UNITYSDK_OFFSET(0x91D34E0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODRESPONSE_OFFSET UNITYSDK_OFFSET(0x91D3570)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLTYPEFORINTEROPTYPE_OFFSET UNITYSDK_OFFSET(0x91D3600)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET UNITYSDK_OFFSET(0x91CD0B0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET UNITYSDK_OFFSET(0x91CCB00)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x91CC700)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLTYPE_OFFSET UNITYSDK_OFFSET(0x91CC900)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_ENCODENS_OFFSET UNITYSDK_OFFSET(0x91D3160)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91D36F0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SoapServices_TypeDefinitionIndex = 24453;

	class SoapServices : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _xmlTypes; // 0x0
		::System::Collections::Hashtable* _xmlElements; // 0x8
		::System::Collections::Hashtable* _soapActions; // 0x10
		::System::Collections::Hashtable* _soapActionsMethods; // 0x18
		::System::Collections::Hashtable* _typeInfos; // 0x20

		::System::String* get_XmlNsForClrTypeWithAssembly()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_XmlNsForClrTypeWithNs()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNS_OFFSET))(nullptr);
		}

		::System::String* get_XmlNsForClrTypeWithNsAndAssembly()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNSANDASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* CodeXmlNamespaceForClrTypeNamespace(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CODEXMLNAMESPACEFORCLRTYPENAMESPACE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetNameKey(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETNAMEKEY_OFFSET))(str, str, nullptr);
		}

		::System::String* GetAssemblyName(::System::Reflection::MethodBase* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETASSEMBLYNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetXmlElementForInteropType(::System::Type* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLELEMENTFORINTEROPTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODCALL_OFFSET))(arg, nullptr);
		}

		::System::String* GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetXmlTypeForInteropType(::System::Type* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLTYPEFORINTEROPTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PreLoad(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void PreLoad(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterInteropXmlElement(::System::String* str, ::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLELEMENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void RegisterInteropXmlType(::System::String* str, ::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLTYPE_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* EncodeNs(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_ENCODENS_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

