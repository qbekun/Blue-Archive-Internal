#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET UNITYSDK_OFFSET(0xA27B400)
#define UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET UNITYSDK_OFFSET(0xA27C940)
#define UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET UNITYSDK_OFFSET(0xA27C980)
#define UNITYENGINE_GUICLIP_GETMATRIX_OFFSET UNITYSDK_OFFSET(0xA2787E0)
#define UNITYENGINE_GUICLIP_SETMATRIX_OFFSET UNITYSDK_OFFSET(0xA2788C0)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET UNITYSDK_OFFSET(0xA27CA40)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET UNITYSDK_OFFSET(0xA27CAE0)
#define UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET UNITYSDK_OFFSET(0xA27CB80)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA27C900)
#define UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA27C9C0)
#define UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA27CA00)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA27CB30)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_TypeDefinitionIndex = 36534;

	class GUIClip : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* get_visibleRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET))(nullptr);
		}

		::System::Void Internal_Pop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET))(nullptr);
		}

		::System::Int32 Internal_GetCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* GetMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_OFFSET))(nullptr);
		}

		::System::Void SetMatrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_PushParentClip(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_PushParentClip(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_PopParentClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET))(nullptr);
		}

		::System::Void get_visibleRect_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetMatrix_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetMatrix_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_PushParentClip_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

