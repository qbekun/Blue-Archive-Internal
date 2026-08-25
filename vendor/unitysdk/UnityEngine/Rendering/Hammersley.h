#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class ComputeShader; }

#define UNITYENGINE_RENDERING_HAMMERSLEY_BINDCONSTANTS_OFFSET UNITYSDK_OFFSET(0x9FBF2F0)
#define UNITYENGINE_RENDERING_HAMMERSLEY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FBF420)
#define UNITYENGINE_RENDERING_HAMMERSLEY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FBF820)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Hammersley_TypeDefinitionIndex = 34018;

	class Hammersley : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* k_Hammersley2dSeq16; // 0x0
		::Il2CppArray<::System::Object*>* k_Hammersley2dSeq32; // 0x8
		::Il2CppArray<::System::Object*>* k_Hammersley2dSeq64; // 0x10
		::Il2CppArray<::System::Object*>* k_Hammersley2dSeq256; // 0x18
		::System::Int32 s_hammersley2DSeq16Id; // 0x20
		::System::Int32 s_hammersley2DSeq32Id; // 0x24
		::System::Int32 s_hammersley2DSeq64Id; // 0x28
		::System::Int32 s_hammersley2DSeq256Id; // 0x2C

		::System::Void BindConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::ComputeShader* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HAMMERSLEY_BINDCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HAMMERSLEY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HAMMERSLEY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

