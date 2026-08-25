#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace UnityEngine { class GameObject; }

#define MXUNDERCOVER_UCRUNTIMECACHE_GET_COLLIDERMAP_OFFSET UNITYSDK_OFFSET(0xDB39F0)
#define MXUNDERCOVER_UCRUNTIMECACHE_SET_COLLIDERMAP_OFFSET UNITYSDK_OFFSET(0xDB3A00)
#define MXUNDERCOVER_UCRUNTIMECACHE_FINDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB3A10)
#define MXUNDERCOVER_UCRUNTIMECACHE_FINDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCRUNTIMECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0xDB3AC0)
#define MXUNDERCOVER_UCRUNTIMECACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB3B10)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCRuntimeCache_TypeDefinitionIndex = 9968;

	class UCRuntimeCache : public Il2CppObject
	{
	public:
		Il2CppObject* _colliderMap_k__BackingField; // 0x10

		Il2CppObject* get_colliderMap()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMECACHE_GET_COLLIDERMAP_OFFSET))(nullptr);
		}

		::System::Void set_colliderMap(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMECACHE_SET_COLLIDERMAP_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCEntity* FindEntityComponent(::UnityEngine::GameObject* arg)
		{
			return ((::MXUnderCover::UCEntity*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMECACHE_FINDENTITYCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindEntityComponent(::UnityEngine::GameObject* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMECACHE_FINDENTITYCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMECACHE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMECACHE_.CTOR_OFFSET))(nullptr);
		}

	};
}

