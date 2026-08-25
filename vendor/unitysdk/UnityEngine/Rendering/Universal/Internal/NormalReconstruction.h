#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NORMALRECONSTRUCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0B9FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NORMALRECONSTRUCTION_SETUPPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA0BA040)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NormalReconstruction_TypeDefinitionIndex = 32865;

	class NormalReconstruction : public Il2CppObject
	{
	public:
		::System::Int32 s_NormalReconstructionMatrixID; // 0x0
		::Il2CppArray<::System::Object*>* s_NormalReconstructionMatrix; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NORMALRECONSTRUCTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetupProperties(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NORMALRECONSTRUCTION_SETUPPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

