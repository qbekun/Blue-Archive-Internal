#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }
class UITexture;
namespace UnityEngine { class ComputeShader; }
class SourceType;
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Vector4; }

#define COMPUTEBLUR_ISSYSTEMINFOQUALIFIED_OFFSET UNITYSDK_OFFSET(0x2053750)
#define COMPUTEBLUR_INITTEXTUREBUFFER_OFFSET UNITYSDK_OFFSET(0x2053880)
#define COMPUTEBLUR_CALCWIDTHHEIGHT_OFFSET UNITYSDK_OFFSET(0x2053AE0)
#define COMPUTEBLUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2053F10)
#define COMPUTEBLUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2054300)
#define COMPUTEBLUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x2054320)
#define COMPUTEBLUR_CAPTURETORT_OFFSET UNITYSDK_OFFSET(0x2054560)
#define COMPUTEBLUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2054640)
#define COMPUTEBLUR_CALCSHADERPARAMS_OFFSET UNITYSDK_OFFSET(0x2054A40)
#define COMPUTEBLUR_RELEASE_OFFSET UNITYSDK_OFFSET(0x2054BD0)
#define COMPUTEBLUR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x2054210)
#define COMPUTEBLUR_CHANGETARGETLAYER_OFFSET UNITYSDK_OFFSET(0x2054140)
#define COMPUTEBLUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20548E0)
#define COMPUTEBLUR_CODISPATCH_OFFSET UNITYSDK_OFFSET(0x2054DD0)
#define COMPUTEBLUR_INITTARGETS_OFFSET UNITYSDK_OFFSET(0x20546F0)
#define COMPUTEBLUR_INITRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x2054E40)
#define COMPUTEBLUR_CHECKSAFEAREASCALE_OFFSET UNITYSDK_OFFSET(0x2054F50)
#define COMPUTEBLUR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2055060)
#define COMPUTEBLUR_INITSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20543D0)
#define COMPUTEBLUR_CALCTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x20544E0)

	inline static constexpr unsigned int ComputeBlur_TypeDefinitionIndex = 3337;

	class ComputeBlur : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* source; // 0x18
		UITexture* textureUI; // 0x20
		::UnityEngine::ComputeShader* computeShader; // 0x28
		SourceType* sourceType; // 0x30
		::System::Boolean blurPerFrame; // 0x34
		::System::Int32 iteration; // 0x38
		::Il2CppArray<::System::Object*>* targets; // 0x40
		::System::Boolean isSystemQualified; // 0x48
		::Il2CppArray<::System::Object*>* buffers; // 0x50
		::UnityEngine::RenderTexture* captureTexture; // 0x58
		::System::Boolean blurred; // 0x60
		Il2CppObject* blurKernelId; // 0x64
		::System::Int32 inputBufferId; // 0x6C
		::System::Int32 outputBufferId; // 0x70
		::System::Int32 sizeId; // 0x74
		::System::Int32 offsetId; // 0x78
		::System::Int32 kernelX; // 0x7C
		::System::Int32 kernelY; // 0x80
		::System::Int32 width; // 0x84
		::System::Int32 height; // 0x88
		::System::Single rcpNumBlurKernel; // 0x0
		::UnityEngine::Vector4* offset; // 0x8C
		::UnityEngine::Vector4* sizeRes; // 0x9C
		::System::Int32 cullingMask; // 0xAC
		::System::Int32 uiCameraCullingMask; // 0xB0
		::System::Int32 _lateUpdateFrameCounter; // 0xB4
		::System::Int32 CAPTURE_START_DELAY_FRAMES; // 0x0

		::System::Boolean IsSystemInfoQualified(::UnityEngine::ComputeShader* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ComputeShader*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_ISSYSTEMINFOQUALIFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitTextureBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_INITTEXTUREBUFFER_OFFSET))(nullptr);
		}

		::System::Void CalcWidthHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CALCWIDTHHEIGHT_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void CaptureToRT()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CAPTURETORT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CalcShaderParams()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CALCSHADERPARAMS_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Dispatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_DISPATCH_OFFSET))(nullptr);
		}

		::System::Void ChangeTargetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CHANGETARGETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDispatch()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CODISPATCH_OFFSET))(nullptr);
		}

		::System::Void InitTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_INITTARGETS_OFFSET))(nullptr);
		}

		::System::Void InitRenderTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_INITRENDERTEXTURE_OFFSET))(nullptr);
		}

		::System::Void CheckSafeAreaScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CHECKSAFEAREASCALE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void InitShaderProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_INITSHADERPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void CalcTextureSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTEBLUR_CALCTEXTURESIZE_OFFSET))(nullptr);
		}

	};

