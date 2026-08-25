#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define POSTBLITPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0x9FF5F70)
#define POSTBLITPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF5F30)
#define POSTBLITPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x9FF60B0)
#define POSTBLITPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x9FF5D60)
#define POSTBLITPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF6130)

	inline static constexpr unsigned int PostBlitPass_TypeDefinitionIndex = 32416;

	class PostBlitPass : public Il2CppObject
	{
	public:
		::System::String* _profilerTag; // 0xD8
		::UnityEngine::Material* _mat; // 0xE0
		::System::Int32 _passIndex; // 0xE8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _tempHandle; // 0xF0
		::UnityEngine::Rendering::RenderTargetIdentifier* _cameraColor; // 0x120

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + POSTBLITPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + POSTBLITPASS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + POSTBLITPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(Settings* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(Settings*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + POSTBLITPASS_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + POSTBLITPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};

