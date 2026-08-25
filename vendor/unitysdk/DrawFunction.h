#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class DrawingSettings&; }
namespace UnityEngine::Rendering { class FilteringSettings&; }
namespace UnityEngine::Rendering { class RenderStateBlock&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define DRAWFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA038FE0)
#define DRAWFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA039020)
#define DRAWFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA039050)
#define DRAWFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA039120)

	inline static constexpr unsigned int DrawFunction_TypeDefinitionIndex = 32585;

	class DrawFunction : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::RenderStateBlock&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::RenderStateBlock&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DRAWFUNCTION_ENDINVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::RenderStateBlock&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::RenderStateBlock&*, ::PVOID))((::PBYTE)hIl2Cpp + DRAWFUNCTION_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DRAWFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::RenderStateBlock&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::RenderStateBlock&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DRAWFUNCTION_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

