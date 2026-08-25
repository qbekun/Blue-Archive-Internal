#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA0E2990)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA0E29A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DE200)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E29C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2A10)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2A70)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2AD0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xA0E2B40)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E2DE0)

namespace UnityEngine::ResourceManagement::Exceptions
{
	inline static constexpr unsigned int UnknownResourceProviderException_TypeDefinitionIndex = 36360;

	class UnknownResourceProviderException : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField; // 0x90

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_UNKNOWNRESOURCEPROVIDEREXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

