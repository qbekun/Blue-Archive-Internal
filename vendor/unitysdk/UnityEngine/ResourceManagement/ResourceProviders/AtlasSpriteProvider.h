#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ATLASSPRITEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9560)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ATLASSPRITEPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0xA0E9570)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int AtlasSpriteProvider_TypeDefinitionIndex = 36393;

	class AtlasSpriteProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ATLASSPRITEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ATLASSPRITEPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

	};
}

