#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class TextNativeSettings; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::UIElements { class TextNativeSettings&; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xA450130)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_COMPUTETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xA4502D0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_COMPUTETEXTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA450410)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0xA450550)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETOFFSET_OFFSET UNITYSDK_OFFSET(0xA4507B0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_COMPUTETEXTSCALING_OFFSET UNITYSDK_OFFSET(0xA450940)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xA4503D0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA450510)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xA450270)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0xA450760)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETOFFSET_OFFSET UNITYSDK_OFFSET(0xA4508F0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA450A90)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTHEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA450AD0)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETCURSORPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA450B10)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETVERTICES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA450B60)
#define UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA450BB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextNative_TypeDefinitionIndex = 37367;

	class TextNative : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* GetCursorPosition(::UnityEngine::UIElements::TextNativeSettings* arg, ::UnityEngine::Rect* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::TextNativeSettings*, ::UnityEngine::Rect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETCURSORPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ComputeTextWidth(::UnityEngine::UIElements::TextNativeSettings* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::TextNativeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_COMPUTETEXTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single ComputeTextHeight(::UnityEngine::UIElements::TextNativeSettings* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::TextNativeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_COMPUTETEXTHEIGHT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVertices(::UnityEngine::UIElements::TextNativeSettings* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::TextNativeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETVERTICES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetOffset(::UnityEngine::UIElements::TextNativeSettings* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::TextNativeSettings*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeTextScaling(::UnityEngine::Matrix4x4* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Matrix4x4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_COMPUTETEXTSCALING_OFFSET))(arg, arg, nullptr);
		}

		::System::Single DoComputeTextWidth(::UnityEngine::UIElements::TextNativeSettings* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::TextNativeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single DoComputeTextHeight(::UnityEngine::UIElements::TextNativeSettings* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::TextNativeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTHEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* DoGetCursorPosition(::UnityEngine::UIElements::TextNativeSettings* arg, ::UnityEngine::Rect* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::TextNativeSettings*, ::UnityEngine::Rect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETCURSORPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetVertices(::UnityEngine::UIElements::TextNativeSettings* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextNativeSettings*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETVERTICES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* DoGetOffset(::UnityEngine::UIElements::TextNativeSettings* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::TextNativeSettings*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Single DoComputeTextWidth_Injected(::UnityEngine::UIElements::TextNativeSettings&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::TextNativeSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTWIDTH_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Single DoComputeTextHeight_Injected(::UnityEngine::UIElements::TextNativeSettings&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::TextNativeSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOCOMPUTETEXTHEIGHT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void DoGetCursorPosition_Injected(::UnityEngine::UIElements::TextNativeSettings&* arg, ::UnityEngine::Rect&* arg, ::System::Int32 arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextNativeSettings&*, ::UnityEngine::Rect&*, ::System::Int32, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETCURSORPOSITION_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetVertices_Injected(::UnityEngine::UIElements::TextNativeSettings&* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextNativeSettings&*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_GETVERTICES_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DoGetOffset_Injected(::UnityEngine::UIElements::TextNativeSettings&* arg, ::UnityEngine::Rect&* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextNativeSettings&*, ::UnityEngine::Rect&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTNATIVE_DOGETOFFSET_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

