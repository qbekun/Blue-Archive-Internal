#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine { class Shader; }

#define MATERIALLIBRARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0CA800)
#define MATERIALLIBRARY_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA0CAAF0)
#define MATERIALLIBRARY_LOAD_OFFSET UNITYSDK_OFFSET(0xA0D9190)

	inline static constexpr unsigned int MaterialLibrary_TypeDefinitionIndex = 32882;

	class MaterialLibrary : public Il2CppObject
	{
	public:
		::UnityEngine::Material* stopNaN; // 0x10
		::UnityEngine::Material* subpixelMorphologicalAntialiasing; // 0x18
		::UnityEngine::Material* gaussianDepthOfField; // 0x20
		::UnityEngine::Material* bokehDepthOfField; // 0x28
		::UnityEngine::Material* cameraMotionBlur; // 0x30
		::UnityEngine::Material* paniniProjection; // 0x38
		::UnityEngine::Material* bloom; // 0x40
		::UnityEngine::Material* scalingSetup; // 0x48
		::UnityEngine::Material* easu; // 0x50
		::UnityEngine::Material* uber; // 0x58
		::UnityEngine::Material* finalPass; // 0x60
		::UnityEngine::Material* lensFlareDataDriven; // 0x68
		::UnityEngine::Material* mxBlurEffect; // 0x70
		::UnityEngine::Material* mxGlitch; // 0x78
		::UnityEngine::Material* mxUberPost; // 0x80
		::UnityEngine::Material* mxSpeedline; // 0x88

		::System::Void .ctor(::UnityEngine::Rendering::Universal::PostProcessData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALLIBRARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALLIBRARY_CLEANUP_OFFSET))(nullptr);
		}

		::UnityEngine::Material* Load(::UnityEngine::Shader* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALLIBRARY_LOAD_OFFSET))(arg, nullptr);
		}

	};

