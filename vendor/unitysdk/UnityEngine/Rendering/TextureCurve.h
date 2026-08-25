#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Keyframe; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class Keyframe&; }

#define UNITYENGINE_RENDERING_TEXTURECURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9FDDF40)
#define UNITYENGINE_RENDERING_TEXTURECURVE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9FDDF50)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FDDF60)
#define UNITYENGINE_RENDERING_TEXTURECURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDDF90)
#define UNITYENGINE_RENDERING_TEXTURECURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDDFF0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9FDE100)
#define UNITYENGINE_RENDERING_TEXTURECURVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FDE110)
#define UNITYENGINE_RENDERING_TEXTURECURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FDE120)
#define UNITYENGINE_RENDERING_TEXTURECURVE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x9FDE230)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x9FDE240)
#define UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FDE290)
#define UNITYENGINE_RENDERING_TEXTURECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9FDE4D0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0x9FDE750)
#define UNITYENGINE_RENDERING_TEXTURECURVE_MOVEKEY_OFFSET UNITYSDK_OFFSET(0x9FDE7A0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x9FDE7F0)
#define UNITYENGINE_RENDERING_TEXTURECURVE_SMOOTHTANGENTS_OFFSET UNITYSDK_OFFSET(0x9FDE820)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureCurve_TypeDefinitionIndex = 34077;

	class TextureCurve : public Il2CppObject
	{
	public:
		::System::Int32 k_Precision; // 0x0
		::System::Single k_Step; // 0x0
		::System::Int32 _length_k__BackingField; // 0x10
		::System::Boolean m_Loop; // 0x14
		::System::Single m_ZeroValue; // 0x18
		::System::Single m_Range; // 0x1C
		::UnityEngine::AnimationCurve* m_Curve; // 0x20
		::UnityEngine::AnimationCurve* m_LoopingCurve; // 0x28
		::UnityEngine::Texture2D* m_Texture; // 0x30
		::System::Boolean m_IsCurveDirty; // 0x38
		::System::Boolean m_IsTextureDirty; // 0x39

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_length(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Keyframe* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::Keyframe*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::AnimationCurve* arg, ::System::Single arg, ::System::Boolean arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Boolean arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_SETDIRTY_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetTextureFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTUREFORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* GetTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_GETTEXTURE_OFFSET))(nullptr);
		}

		::System::Single Evaluate(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddKey(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 MoveKey(::System::Int32 arg, ::UnityEngine::Keyframe&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::Keyframe&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_MOVEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveKey(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_REMOVEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SmoothTangents(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVE_SMOOTHTANGENTS_OFFSET))(arg, arg, nullptr);
		}

	};
}

