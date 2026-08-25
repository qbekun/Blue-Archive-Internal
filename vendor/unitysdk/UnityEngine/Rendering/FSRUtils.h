#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_FSRUTILS_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9FDB240)
#define UNITYENGINE_RENDERING_FSRUTILS_SETRCASCONSTANTSLINEAR_OFFSET UNITYSDK_OFFSET(0x9FDB260)
#define UNITYENGINE_RENDERING_FSRUTILS_SETRCASCONSTANTS_OFFSET UNITYSDK_OFFSET(0x9FDB280)
#define UNITYENGINE_RENDERING_FSRUTILS_SETEASUCONSTANTS_OFFSET UNITYSDK_OFFSET(0x9FDB380)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FSRUtils_TypeDefinitionIndex = 34063;

	class FSRUtils : public Il2CppObject
	{
	public:
		::System::Single kMaxSharpnessStops; // 0x0
		::System::Single kDefaultSharpnessStops; // 0x0
		::System::Single kDefaultSharpnessLinear; // 0x0

		::System::Boolean IsSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRUTILS_ISSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void SetRcasConstantsLinear(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRUTILS_SETRCASCONSTANTSLINEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRcasConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRUTILS_SETRCASCONSTANTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetEasuConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRUTILS_SETEASUCONSTANTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

