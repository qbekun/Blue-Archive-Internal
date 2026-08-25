#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_PROVIDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2EF0)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_PROVIDEREXCEPTION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xA0E2F70)

namespace UnityEngine::ResourceManagement::Exceptions
{
	inline static constexpr unsigned int ProviderException_TypeDefinitionIndex = 36362;

	class ProviderException : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField; // 0x90

		::System::Void .ctor(::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_PROVIDEREXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_PROVIDEREXCEPTION_GET_LOCATION_OFFSET))(nullptr);
		}

	};
}

