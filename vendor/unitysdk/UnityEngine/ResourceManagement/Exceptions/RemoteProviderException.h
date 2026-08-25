#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class UnityWebRequestResult; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E2F80)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_GET_WEBREQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xA0E31C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xA0E31D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E31F0)

namespace UnityEngine::ResourceManagement::Exceptions
{
	inline static constexpr unsigned int RemoteProviderException_TypeDefinitionIndex = 36363;

	class RemoteProviderException : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* _WebRequestResult_k__BackingField; // 0x98

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* get_WebRequestResult()
		{
			return (return (::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_GET_WEBREQUESTRESULT_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_REMOTEPROVIDEREXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

