#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShaderPathID; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA072560)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETSHADERPATH_OFFSET UNITYSDK_OFFSET(0xA0729C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_ISLWSHADER_OFFSET UNITYSDK_OFFSET(0xA072D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETENUMFROMPATH_OFFSET UNITYSDK_OFFSET(0xA072DA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderUtils_TypeDefinitionIndex = 32751;

	class ShaderUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_ShaderPaths; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetShaderPath(::UnityEngine::Rendering::Universal::ShaderPathID* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Rendering::Universal::ShaderPathID*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETSHADERPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLWShader(::UnityEngine::Shader* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_ISLWSHADER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::ShaderPathID* GetEnumFromPath(::System::String* str)
		{
			return (return (::UnityEngine::Rendering::Universal::ShaderPathID*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS_GETENUMFROMPATH_OFFSET))(str, nullptr);
		}

	};
}

