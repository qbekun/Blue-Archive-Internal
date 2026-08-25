#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_JSONASSETPROVIDER_CONVERT_OFFSET UNITYSDK_OFFSET(0xA0EB3B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_JSONASSETPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EB3C0)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int JsonAssetProvider_TypeDefinitionIndex = 36406;

	class JsonAssetProvider : public Il2CppObject
	{
	public:
		::System::Object* Convert(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_JSONASSETPROVIDER_CONVERT_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_JSONASSETPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

