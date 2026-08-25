#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A3A0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A440)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A490)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A4E0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A3F0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A4F0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPURL_OFFSET UNITYSDK_OFFSET(0x9B4A690)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPTOPIC_OFFSET UNITYSDK_OFFSET(0x9B4A6A0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9B4A6B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WarningException_TypeDefinitionIndex = 29471;

	class WarningException : public Il2CppObject
	{
	public:
		::System::String* _HelpUrl_k__BackingField; // 0x90
		::System::String* _HelpTopic_k__BackingField; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_HelpUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPURL_OFFSET))(nullptr);
		}

		::System::String* get_HelpTopic()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPTOPIC_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

