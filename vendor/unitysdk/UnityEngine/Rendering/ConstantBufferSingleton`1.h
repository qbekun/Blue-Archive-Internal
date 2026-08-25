#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ConstantBufferSingleton`1_TypeDefinitionIndex = 33890;

	class ConstantBufferSingleton`1 : public ::Mx::Timeline::AnimationWithParticlesPlayableAsset
	{
	public:
		Il2CppObject* s_Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_instance(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_SET_INSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_RELEASE_OFFSET))(nullptr);
		}

		Il2CppObject* get_instance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFERSINGLETON`1_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

