#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture; }
class UITexture;
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Camera; }

#define FXCOMPUTEBLUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20B5DE0)
#define FXCOMPUTEBLUR_CALCSHADERPARAMS_OFFSET UNITYSDK_OFFSET(0x20B6AA0)
#define FXCOMPUTEBLUR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B6BF0)
#define FXCOMPUTEBLUR_RELEASE_OFFSET UNITYSDK_OFFSET(0x20B6CC0)
#define FXCOMPUTEBLUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B6DE0)
#define FXCOMPUTEBLUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B6E10)
#define FXCOMPUTEBLUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B6E20)
#define FXCOMPUTEBLUR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x20B6500)
#define FXCOMPUTEBLUR_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x20B61C0)
#define FXCOMPUTEBLUR_INITTEXTUREBUFFER_OFFSET UNITYSDK_OFFSET(0x20B6300)
#define FXCOMPUTEBLUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x20B6EB0)

	inline static constexpr unsigned int FxComputeBlur_TypeDefinitionIndex = 3601;

	class FxComputeBlur : public Il2CppObject
	{
	public:
		::UnityEngine::ComputeShader* shader; // 0x18
		::System::Boolean blurPerFrame; // 0x20
		::System::Int32 iteration; // 0x24
		::System::Boolean isSystemQualified; // 0x28
		::System::Int32 sourceId; // 0x2C
		::UnityEngine::Texture* source; // 0x30
		UITexture* texture; // 0x38
		::Il2CppArray<::System::Object*>* buffers; // 0x40
		::System::Boolean blurred; // 0x48
		Il2CppObject* kernelId; // 0x4C
		::System::Int32 inputBufferId; // 0x54
		::System::Int32 outputBufferId; // 0x58
		::System::Int32 sizeId; // 0x5C
		::System::Int32 offsetId; // 0x60
		::System::Int32 kernelX; // 0x64
		::System::Int32 kernelY; // 0x68
		::System::Int32 width; // 0x6C
		::System::Int32 height; // 0x70
		::System::Single rcpNumBlurKernel; // 0x0
		::UnityEngine::Vector4* offset; // 0x74
		::UnityEngine::Vector4* sizeRes; // 0x84

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void CalcShaderParams()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_CALCSHADERPARAMS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_RELEASE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Dispatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_DISPATCH_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_GETCAMERA_OFFSET))(nullptr);
		}

		::System::Void InitTextureBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_INITTEXTUREBUFFER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCOMPUTEBLUR_AWAKE_OFFSET))(nullptr);
		}

	};

