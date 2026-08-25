#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class RenderTextureSubElement; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8120)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8160)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINTIMPL_OFFSET UNITYSDK_OFFSET(0xA1F81A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0xA1F81F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8240)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0xA1F82E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8380)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8420)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8470)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1F84C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8510)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0xA1F8560)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0xA1F85B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET UNITYSDK_OFFSET(0xA1F85F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F8630)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F8670)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1F86B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1F87D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1F88F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F8A10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1F8A50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1F8B10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET UNITYSDK_OFFSET(0xA1F8BD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET UNITYSDK_OFFSET(0xA1F8C90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1F8CE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1F8D50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINTEGER_OFFSET UNITYSDK_OFFSET(0xA1F8DA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET UNITYSDK_OFFSET(0xA1F8DF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET UNITYSDK_OFFSET(0xA1F8E70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F8EC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F8F10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F8FA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F9010)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F9080)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F90D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1F9120)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1F9180)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA1F91E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA1F9200)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1F9260)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1F92A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F8290)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F8330)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F83D0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlock_TypeDefinitionIndex = 31010;

	class MaterialPropertyBlock : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Single GetFloatImpl(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* GetTextureImpl(::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void SetIntImpl(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINTIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFloatImpl(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVectorImpl(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColorImpl(::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrixImpl(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTextureImpl(::System::Int32 arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRenderTextureImpl(::System::Int32 arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetFloatArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetVectorArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetMatrixArrayImpl(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CreateImpl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET))(nullptr);
		}

		::System::Void DestroyImpl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SetFloatArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetVectorArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetMatrixArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetInt(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInteger(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVector(::System::String* str, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetVector(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrix(::System::String* str, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetMatrix(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::String* str, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetFloatArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetVectorArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetVectorArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrixArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* GetTexture(::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetVectorImpl_Injected(::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColorImpl_Injected(::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrixImpl_Injected(::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

