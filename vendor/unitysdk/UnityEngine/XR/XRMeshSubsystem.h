#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class MeshGenerationResult; }

#define UNITYENGINE_XR_XRMESHSUBSYSTEM_INVOKEMESHREADYDELEGATE_OFFSET UNITYSDK_OFFSET(0xA4AD120)
#define UNITYENGINE_XR_XRMESHSUBSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AD180)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRMeshSubsystem_TypeDefinitionIndex = 37615;

	class XRMeshSubsystem : public <OnState>d__4
	{
	public:
		::System::Void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::XR::MeshGenerationResult*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEM_INVOKEMESHREADYDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

