#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class CullingGroup; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA044340)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA0443D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA041440)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0xA044450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalCulledChunk_TypeDefinitionIndex = 32620;

	class DecalCulledChunk : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* cameraPosition; // 0x28
		::System::UInt64 sceneCullingMask; // 0x38
		::System::Int32 cullingMask; // 0x40
		::UnityEngine::CullingGroup* cullingGroups; // 0x48
		::Il2CppArray<::System::Object*>* visibleDecalIndexArray; // 0x50
		Il2CppObject* visibleDecalIndices; // 0x58
		::System::Int32 visibleDecalCount; // 0x68

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCULLEDCHUNK_SETCAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

