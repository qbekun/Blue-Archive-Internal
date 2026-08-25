#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Rect&; }

#define UNITYENGINE_GL_VERTEX3_OFFSET UNITYSDK_OFFSET(0xA1F3CD0)
#define UNITYENGINE_GL_TEXCOORD3_OFFSET UNITYSDK_OFFSET(0xA1F3D30)
#define UNITYENGINE_GL_TEXCOORD2_OFFSET UNITYSDK_OFFSET(0xA1F3D90)
#define UNITYENGINE_GL_IMMEDIATECOLOR_OFFSET UNITYSDK_OFFSET(0xA1F3DE0)
#define UNITYENGINE_GL_COLOR_OFFSET UNITYSDK_OFFSET(0xA1F3E60)
#define UNITYENGINE_GL_GET_WIREFRAME_OFFSET UNITYSDK_OFFSET(0xA1F3EE0)
#define UNITYENGINE_GL_SET_WIREFRAME_OFFSET UNITYSDK_OFFSET(0xA1F3F20)
#define UNITYENGINE_GL_SET_INVERTCULLING_OFFSET UNITYSDK_OFFSET(0xA1F3F60)
#define UNITYENGINE_GL_SETVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F3FA0)
#define UNITYENGINE_GL_SET_MODELVIEW_OFFSET UNITYSDK_OFFSET(0xA1F4020)
#define UNITYENGINE_GL_PUSHMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F4080)
#define UNITYENGINE_GL_POPMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F40C0)
#define UNITYENGINE_GL_LOADORTHO_OFFSET UNITYSDK_OFFSET(0xA1F4100)
#define UNITYENGINE_GL_LOADPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F4140)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F41C0)
#define UNITYENGINE_GL_GLLOADPIXELMATRIXSCRIPT_OFFSET UNITYSDK_OFFSET(0xA1F4290)
#define UNITYENGINE_GL_LOADPIXELMATRIX_OFFSET UNITYSDK_OFFSET(0xA1F4310)
#define UNITYENGINE_GL_BEGIN_OFFSET UNITYSDK_OFFSET(0xA1F4390)
#define UNITYENGINE_GL_END_OFFSET UNITYSDK_OFFSET(0xA1F43D0)
#define UNITYENGINE_GL_GLCLEAR_OFFSET UNITYSDK_OFFSET(0xA1F4410)
#define UNITYENGINE_GL_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F44D0)
#define UNITYENGINE_GL_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F4530)
#define UNITYENGINE_GL_VIEWPORT_OFFSET UNITYSDK_OFFSET(0xA1F4580)
#define UNITYENGINE_GL_SETVIEWMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F3FE0)
#define UNITYENGINE_GL_LOADPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F4180)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F4240)
#define UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F4470)
#define UNITYENGINE_GL_VIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F45C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GL_TypeDefinitionIndex = 30997;

	class GL : public Il2CppObject
	{
	public:
		::System::Void Vertex3(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_VERTEX3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TexCoord3(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_TEXCOORD3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TexCoord2(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_TEXCOORD2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImmediateColor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_IMMEDIATECOLOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_wireframe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GET_WIREFRAME_OFFSET))(nullptr);
		}

		::System::Void set_wireframe(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SET_WIREFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_invertCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SET_INVERTCULLING_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewMatrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SETVIEWMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void set_modelview(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SET_MODELVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void PushMatrix()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_PUSHMATRIX_OFFSET))(nullptr);
		}

		::System::Void PopMatrix()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_POPMATRIX_OFFSET))(nullptr);
		}

		::System::Void LoadOrtho()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADORTHO_OFFSET))(nullptr);
		}

		::System::Void LoadProjectionMatrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADPROJECTIONMATRIX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetGPUProjectionMatrix(::UnityEngine::Matrix4x4* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GLLoadPixelMatrixScript(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLLOADPIXELMATRIXSCRIPT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void LoadPixelMatrix(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADPIXELMATRIX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Begin(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_BEGIN_OFFSET))(arg, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_END_OFFSET))(nullptr);
		}

		::System::Void GLClear(::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_CLEAR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_CLEAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Viewport(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_VIEWPORT_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewMatrix_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SETVIEWMATRIX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void LoadProjectionMatrix_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADPROJECTIONMATRIX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetGPUProjectionMatrix_Injected(::UnityEngine::Matrix4x4&* arg, ::System::Boolean arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::System::Boolean, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GLClear_Injected(::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Color&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Viewport_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_VIEWPORT_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

