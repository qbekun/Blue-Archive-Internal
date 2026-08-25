#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA042500)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0xA0426D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA041430)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA0428D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalCachedChunk_TypeDefinitionIndex = 32616;

	class DecalCachedChunk : public Il2CppObject
	{
	public:
		::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x28
		::System::Int32 passIndexDBuffer; // 0x30
		::System::Int32 passIndexEmissive; // 0x34
		::System::Int32 passIndexScreenSpace; // 0x38
		::System::Int32 passIndexGBuffer; // 0x3C
		::System::Int32 drawOrder; // 0x40
		::System::Boolean isCreated; // 0x44
		Il2CppObject* decalToWorlds; // 0x48
		Il2CppObject* normalToWorlds; // 0x58
		Il2CppObject* sizeOffsets; // 0x68
		Il2CppObject* drawDistances; // 0x78
		Il2CppObject* angleFades; // 0x88
		Il2CppObject* uvScaleBias; // 0x98
		Il2CppObject* layerMasks; // 0xA8
		Il2CppObject* sceneLayerMasks; // 0xB8
		Il2CppObject* fadeFactors; // 0xC8
		Il2CppObject* boundingSpheres; // 0xD8
		Il2CppObject* scaleModes; // 0xE8
		Il2CppObject* positions; // 0xF8
		Il2CppObject* rotation; // 0x108
		Il2CppObject* scales; // 0x118
		Il2CppObject* dirty; // 0x128
		::Il2CppArray<::System::Object*>* boundingSphereArray; // 0x138

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCACHEDCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, nullptr);
		}

	};
}

