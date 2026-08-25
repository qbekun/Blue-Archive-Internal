#pragma once
#include "unitysdk.h"

class AnimatableFloat;
class AnimatableColor;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Color; }

#define SHADERINSTANCECONTROLLERBASE_GET_ISMATINSTANCE_OFFSET UNITYSDK_OFFSET(0x20C3920)
#define SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLECOLOR0_OFFSET UNITYSDK_OFFSET(0x20C39C0)
#define SHADERINSTANCECONTROLLERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C3650)
#define SHADERINSTANCECONTROLLERBASE_UPDATEANIMATABLECOLOR_OFFSET UNITYSDK_OFFSET(0x20C39D0)
#define SHADERINSTANCECONTROLLERBASE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x20C3B20)
#define SHADERINSTANCECONTROLLERBASE_INITANIMATABLEFLOAT_OFFSET UNITYSDK_OFFSET(0x20C3B70)
#define SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLECOLOR1_OFFSET UNITYSDK_OFFSET(0x20C3C10)
#define SHADERINSTANCECONTROLLERBASE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x20C3A50)
#define SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLEFLOAT0_OFFSET UNITYSDK_OFFSET(0x20C3C20)
#define SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLECOLOR1_OFFSET UNITYSDK_OFFSET(0x20C3C30)
#define SHADERINSTANCECONTROLLERBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20C3510)
#define SHADERINSTANCECONTROLLERBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20C3CB0)
#define SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLEFLOAT0_OFFSET UNITYSDK_OFFSET(0x20C4060)
#define SHADERINSTANCECONTROLLERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20C4070)
#define SHADERINSTANCECONTROLLERBASE_UPDATEANIMATABLEFLOAT_OFFSET UNITYSDK_OFFSET(0x20C4230)
#define SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLEFLOAT1_OFFSET UNITYSDK_OFFSET(0x20C42A0)
#define SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLECOLOR0_OFFSET UNITYSDK_OFFSET(0x20C42B0)
#define SHADERINSTANCECONTROLLERBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20C42C0)
#define SHADERINSTANCECONTROLLERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20C4440)
#define SHADERINSTANCECONTROLLERBASE_INITANIMATABLECOLOR_OFFSET UNITYSDK_OFFSET(0x20C3C40)
#define SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLEFLOAT1_OFFSET UNITYSDK_OFFSET(0x20C46A0)

	inline static constexpr unsigned int ShaderInstanceControllerBase_TypeDefinitionIndex = 3658;

	class ShaderInstanceControllerBase : public Il2CppObject
	{
	public:
		AnimatableFloat* AnimateFloat0; // 0x18
		AnimatableFloat* AnimateFloat1; // 0x30
		AnimatableColor* AnimateColor0; // 0x48
		AnimatableColor* AnimateColor1; // 0x78
		::UnityEngine::Renderer* Rend; // 0xA8
		::UnityEngine::Material* OriginalMat; // 0xB0
		::UnityEngine::Material* Mat; // 0xB8
		::System::Boolean IsPlayingAndSRPBatcherAvailable; // 0xC0
		::UnityEngine::MaterialPropertyBlock* PropBlock; // 0xC8

		::System::Boolean get_IsMatInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_GET_ISMATINSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_AnimatableColor0()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLECOLOR0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean UpdateAnimatableColor(AnimatableColor&* arg)
		{
			return ((::System::Boolean(*)(AnimatableColor&*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_UPDATEANIMATABLECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetFloat(::System::Int32 arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_SETFLOAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean InitAnimatableFloat(AnimatableFloat&* arg)
		{
			return ((::System::Boolean(*)(AnimatableFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_INITANIMATABLEFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void set_AnimatableColor1(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLECOLOR1_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetColor(::System::Int32 arg, ::UnityEngine::Color* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_SETCOLOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_AnimatableFloat0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLEFLOAT0_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_AnimatableColor1()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLECOLOR1_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_AnimatableFloat0(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLEFLOAT0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean UpdateAnimatableFloat(AnimatableFloat&* arg)
		{
			return ((::System::Boolean(*)(AnimatableFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_UPDATEANIMATABLEFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_AnimatableFloat1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_GET_ANIMATABLEFLOAT1_OFFSET))(nullptr);
		}

		::System::Void set_AnimatableColor0(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLECOLOR0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean InitAnimatableColor(AnimatableColor&* arg)
		{
			return ((::System::Boolean(*)(AnimatableColor&*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_INITANIMATABLECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AnimatableFloat1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERINSTANCECONTROLLERBASE_SET_ANIMATABLEFLOAT1_OFFSET))(arg, nullptr);
		}

	};

