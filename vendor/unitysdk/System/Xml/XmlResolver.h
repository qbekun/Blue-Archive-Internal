#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLRESOLVER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLRESOLVER_RESOLVEURI_OFFSET UNITYSDK_OFFSET(0x99CAB10)
#define SYSTEM_XML_XMLRESOLVER_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x99CACF0)
#define SYSTEM_XML_XMLRESOLVER_GETENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x99CAE10)
#define SYSTEM_XML_XMLRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CAE60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlResolver_TypeDefinitionIndex = 27838;

	class XmlResolver : public Il2CppObject
	{
	public:
		::System::Object* GetEntity(::System::Uri* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Uri*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_GETENTITY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Uri* ResolveUri(::System::Uri* arg, ::System::String* str)
		{
			return (return (::System::Uri*(*)(::System::Uri*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_RESOLVEURI_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SupportsType(::System::Uri* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_SUPPORTSTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEntityAsync(::System::Uri* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Uri*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_GETENTITYASYNC_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_.CTOR_OFFSET))(nullptr);
		}

	};
}

