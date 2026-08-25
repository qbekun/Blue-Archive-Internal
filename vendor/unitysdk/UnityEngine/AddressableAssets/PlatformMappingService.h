#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesPlatform; }
namespace UnityEngine { class RuntimePlatform; }

#define UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETPLATFORMPATHSUBFOLDER_OFFSET UNITYSDK_OFFSET(0x9E03370)
#define UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETADDRESSABLESPLATFORMINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E0F930)
#define UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0x9E0FA20)
#define UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0FA70)
#define UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E0FA80)
#define UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETADDRESSABLESPLATFORMPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E0F7F0)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int PlatformMappingService_TypeDefinitionIndex = 36210;

	class PlatformMappingService : public Il2CppObject
	{
	public:
		Il2CppObject* s_RuntimeTargetMapping; // 0x0

		::System::String* GetPlatformPathSubFolder()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETPLATFORMPATHSUBFOLDER_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AddressablesPlatform* GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform* arg)
		{
			return (return (::UnityEngine::AddressableAssets::AddressablesPlatform*(*)(::UnityEngine::RuntimePlatform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETADDRESSABLESPLATFORMINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AddressableAssets::AddressablesPlatform* GetPlatform()
		{
			return (return (::UnityEngine::AddressableAssets::AddressablesPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETPLATFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::RuntimePlatform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_PLATFORMMAPPINGSERVICE_GETADDRESSABLESPLATFORMPATHINTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

