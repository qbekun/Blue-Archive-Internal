#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2780)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E27D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2830)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2890)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E2900)

namespace UnityEngine::ResourceManagement::Exceptions
{
	inline static constexpr unsigned int ResourceManagerException_TypeDefinitionIndex = 36359;

	class ResourceManagerException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_RESOURCEMANAGEREXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

