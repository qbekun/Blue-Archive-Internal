#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class RenderTextureSubElement; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GraphicsBuffer; }
namespace UnityEngine::Rendering { class LocalKeywordSpace; }
namespace UnityEngine::Rendering { class LocalKeyword; }
namespace UnityEngine::Rendering { class LocalKeyword&; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering { class LocalKeywordSpace&; }

#define UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET UNITYSDK_OFFSET(0xA2378C0)
#define UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET UNITYSDK_OFFSET(0xA237900)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA237940)
#define UNITYENGINE_COMPUTESHADER_SETINT_OFFSET UNITYSDK_OFFSET(0xA237990)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0xA2379E0)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0xA237A80)
#define UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA237B20)
#define UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET UNITYSDK_OFFSET(0xA237B70)
#define UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA237BC0)
#define UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA237C10)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA237C60)
#define UNITYENGINE_COMPUTESHADER_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA237CB0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET UNITYSDK_OFFSET(0xA237D00)
#define UNITYENGINE_COMPUTESHADER_INTERNAL_SETBUFFER_OFFSET UNITYSDK_OFFSET(0xA237D50)
#define UNITYENGINE_COMPUTESHADER_INTERNAL_SETGRAPHICSBUFFER_OFFSET UNITYSDK_OFFSET(0xA237DA0)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0xA237DF0)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0xA237E40)
#define UNITYENGINE_COMPUTESHADER_SETCONSTANTCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0xA237E90)
#define UNITYENGINE_COMPUTESHADER_SETCONSTANTGRAPHICSBUFFER_OFFSET UNITYSDK_OFFSET(0xA237EE0)
#define UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET UNITYSDK_OFFSET(0xA237F30)
#define UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET UNITYSDK_OFFSET(0xA237F80)
#define UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0xA237FD0)
#define UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECTGRAPHICSBUFFER_OFFSET UNITYSDK_OFFSET(0xA238020)
#define UNITYENGINE_COMPUTESHADER_GET_KEYWORDSPACE_OFFSET UNITYSDK_OFFSET(0xA238070)
#define UNITYENGINE_COMPUTESHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA238100)
#define UNITYENGINE_COMPUTESHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA238140)
#define UNITYENGINE_COMPUTESHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0xA238180)
#define UNITYENGINE_COMPUTESHADER_ENABLELOCALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA2381C0)
#define UNITYENGINE_COMPUTESHADER_DISABLELOCALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA238240)
#define UNITYENGINE_COMPUTESHADER_SETLOCALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA2382C0)
#define UNITYENGINE_COMPUTESHADER_ISLOCALKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0xA238360)
#define UNITYENGINE_COMPUTESHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA2383E0)
#define UNITYENGINE_COMPUTESHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA238430)
#define UNITYENGINE_COMPUTESHADER_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0xA238480)
#define UNITYENGINE_COMPUTESHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0xA2384E0)
#define UNITYENGINE_COMPUTESHADER_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA238530)
#define UNITYENGINE_COMPUTESHADER_GETSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA238570)
#define UNITYENGINE_COMPUTESHADER_SETSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA2385B0)
#define UNITYENGINE_COMPUTESHADER_GET_SHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA2385F0)
#define UNITYENGINE_COMPUTESHADER_SET_SHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA238630)
#define UNITYENGINE_COMPUTESHADER_GETENABLEDKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA238670)
#define UNITYENGINE_COMPUTESHADER_SETENABLEDKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA2386B0)
#define UNITYENGINE_COMPUTESHADER_GET_ENABLEDKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA2386F0)
#define UNITYENGINE_COMPUTESHADER_SET_ENABLEDKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA238730)
#define UNITYENGINE_COMPUTESHADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA238770)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA2387C0)
#define UNITYENGINE_COMPUTESHADER_SETINT_OFFSET UNITYSDK_OFFSET(0xA238820)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0xA238870)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0xA2388D0)
#define UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA238940)
#define UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA238990)
#define UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET UNITYSDK_OFFSET(0xA2389E0)
#define UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET UNITYSDK_OFFSET(0xA238A30)
#define UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET UNITYSDK_OFFSET(0xA238A80)
#define UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET UNITYSDK_OFFSET(0xA238AD0)
#define UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET UNITYSDK_OFFSET(0xA238B20)
#define UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET UNITYSDK_OFFSET(0xA238BA0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA238C00)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA238C60)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA238CC0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA238D20)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA238D70)
#define UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET UNITYSDK_OFFSET(0xA238DD0)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0xA238E40)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0xA238EA0)
#define UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA238F00)
#define UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA238F50)
#define UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA238FB0)
#define UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA239000)
#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0xA239060)
#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0xA239180)
#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0xA2391A0)
#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0xA2392C0)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA237A30)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA237AD0)
#define UNITYENGINE_COMPUTESHADER_GET_KEYWORDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2380C0)
#define UNITYENGINE_COMPUTESHADER_ENABLELOCALKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA238200)
#define UNITYENGINE_COMPUTESHADER_DISABLELOCALKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA238280)
#define UNITYENGINE_COMPUTESHADER_SETLOCALKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA238310)
#define UNITYENGINE_COMPUTESHADER_ISLOCALKEYWORDENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2383A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShader_TypeDefinitionIndex = 31194;

	class ComputeShader : public Il2CppObject
	{
	public:
		::System::Int32 FindKernel(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET))(str, nullptr);
		}

		::System::Boolean HasKernel(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET))(str, nullptr);
		}

		::System::Void SetFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInt(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVector(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrix(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFloatArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetIntArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVectorArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrixArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTexture(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTexture* arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETRENDERTEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetTextureFromGlobal(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_SetBuffer(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_INTERNAL_SETBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_SetGraphicsBuffer(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_INTERNAL_SETGRAPHICSBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetBuffer(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetBuffer(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetConstantComputeBuffer(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETCONSTANTCOMPUTEBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetConstantGraphicsBuffer(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETCONSTANTGRAPHICSBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetKernelThreadGroupSizes(::System::Int32 arg, uint32_t&* arg, uint32_t&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, uint32_t&*, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispatch(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DispatchIndirect(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_DispatchIndirectGraphicsBuffer(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECTGRAPHICSBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::LocalKeywordSpace* get_keywordSpace()
		{
			return (return (::UnityEngine::Rendering::LocalKeywordSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GET_KEYWORDSPACE_OFFSET))(nullptr);
		}

		::System::Void EnableKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ENABLEKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Void DisableKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISABLEKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Boolean IsKeywordEnabled(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ISKEYWORDENABLED_OFFSET))(str, nullptr);
		}

		::System::Void EnableLocalKeyword(::UnityEngine::Rendering::LocalKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ENABLELOCALKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void DisableLocalKeyword(::UnityEngine::Rendering::LocalKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISABLELOCALKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalKeyword(::UnityEngine::Rendering::LocalKeyword* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETLOCALKEYWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLocalKeywordEnabled(::UnityEngine::Rendering::LocalKeyword* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LocalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ISLOCALKEYWORDENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void EnableKeyword(::UnityEngine::Rendering::LocalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ENABLEKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void DisableKeyword(::UnityEngine::Rendering::LocalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISABLEKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeyword(::UnityEngine::Rendering::LocalKeyword&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETKEYWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsKeywordEnabled(::UnityEngine::Rendering::LocalKeyword&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LocalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ISKEYWORDENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSupported(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ISSUPPORTED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetShaderKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GETSHADERKEYWORDS_OFFSET))(nullptr);
		}

		::System::Void SetShaderKeywords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETSHADERKEYWORDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_shaderKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GET_SHADERKEYWORDS_OFFSET))(nullptr);
		}

		::System::Void set_shaderKeywords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SET_SHADERKEYWORDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEnabledKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GETENABLEDKEYWORDS_OFFSET))(nullptr);
		}

		::System::Void SetEnabledKeywords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETENABLEDKEYWORDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_enabledKeywords()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GET_ENABLEDKEYWORDS_OFFSET))(nullptr);
		}

		::System::Void set_enabledKeywords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SET_ENABLEDKEYWORDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetVector(::System::String* str, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetMatrix(::System::String* str, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetVectorArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetMatrixArray(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloats(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloats(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInts(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetInts(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBool(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetBool(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::System::String* str, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::System::String* str, ::UnityEngine::Texture* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::Texture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTexture* arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetTexture(::System::Int32 arg, ::System::String* str, ::UnityEngine::RenderTexture* arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void SetTextureFromGlobal(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void SetBuffer(::System::Int32 arg, ::System::String* str, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetBuffer(::System::Int32 arg, ::System::String* str, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetConstantBuffer(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetConstantBuffer(::System::String* str, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SetConstantBuffer(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetConstantBuffer(::System::String* str, ::UnityEngine::GraphicsBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::GraphicsBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETCONSTANTBUFFER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void DispatchIndirect(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DispatchIndirect(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DispatchIndirect(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DispatchIndirect(::System::Int32 arg, ::UnityEngine::GraphicsBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GraphicsBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVector_Injected(::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMatrix_Injected(::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void get_keywordSpace_Injected(::UnityEngine::Rendering::LocalKeywordSpace&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeywordSpace&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GET_KEYWORDSPACE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void EnableLocalKeyword_Injected(::UnityEngine::Rendering::LocalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ENABLELOCALKEYWORD_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void DisableLocalKeyword_Injected(::UnityEngine::Rendering::LocalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISABLELOCALKEYWORD_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalKeyword_Injected(::UnityEngine::Rendering::LocalKeyword&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LocalKeyword&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETLOCALKEYWORD_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLocalKeywordEnabled_Injected(::UnityEngine::Rendering::LocalKeyword&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LocalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_ISLOCALKEYWORDENABLED_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

