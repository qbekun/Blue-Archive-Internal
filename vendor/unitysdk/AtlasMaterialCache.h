#pragma once
#include "unitysdk.h"

namespace Spine { class AtlasPage; }
namespace UnityEngine { class Material; }
namespace Spine { class AtlasRegion; }

#define ATLASMATERIALCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x961DE00)
#define ATLASMATERIALCACHE_GETATLASPAGEWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x961DF20)
#define ATLASMATERIALCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x961E170)
#define ATLASMATERIALCACHE_CLONEATLASREGIONWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x961DE80)

	inline static constexpr unsigned int AtlasMaterialCache_TypeDefinitionIndex = 35362;

	class AtlasMaterialCache : public Il2CppObject
	{
	public:
		Il2CppObject* cache; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASMATERIALCACHE_.CTOR_OFFSET))(nullptr);
		}

		::Spine::AtlasPage* GetAtlasPageWithMaterial(::Spine::AtlasPage* arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasPage*(*)(::Spine::AtlasPage*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASMATERIALCACHE_GETATLASPAGEWITHMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASMATERIALCACHE_DISPOSE_OFFSET))(nullptr);
		}

		::Spine::AtlasRegion* CloneAtlasRegionWithMaterial(::Spine::AtlasRegion* arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::Spine::AtlasRegion*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASMATERIALCACHE_CLONEATLASREGIONWITHMATERIAL_OFFSET))(arg, arg, nullptr);
		}

	};

