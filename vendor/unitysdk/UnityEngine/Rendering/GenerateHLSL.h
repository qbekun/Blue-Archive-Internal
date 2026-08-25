#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class PackingRules; }

#define UNITYENGINE_RENDERING_GENERATEHLSL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBEDB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GenerateHLSL_TypeDefinitionIndex = 34005;

	class GenerateHLSL : public ::UnityEngine::AudioClip
	{
	public:
		::UnityEngine::Rendering::PackingRules* packingRules; // 0x10
		::System::Boolean containsPackedFields; // 0x14
		::System::Boolean needAccessors; // 0x15
		::System::Boolean needSetters; // 0x16
		::System::Boolean needParamDebug; // 0x17
		::System::Int32 paramDefinesStart; // 0x18
		::System::Boolean omitStructDeclaration; // 0x1C
		::System::Boolean generateCBuffer; // 0x1D
		::System::Int32 constantRegister; // 0x20
		::System::String* sourcePath; // 0x28

		::System::Void .ctor(::UnityEngine::Rendering::PackingRules* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Rendering::PackingRules*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GENERATEHLSL_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

	};
}

