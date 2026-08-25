#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class XRPass; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Rect; }

#define CUSTOMMIRRORVIEW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA093BE0)
#define CUSTOMMIRRORVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA093BF0)
#define CUSTOMMIRRORVIEW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA093D00)
#define CUSTOMMIRRORVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0xA093DA0)

	inline static constexpr unsigned int CustomMirrorView_TypeDefinitionIndex = 32814;

	class CustomMirrorView : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMMIRRORVIEW_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMMIRRORVIEW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::XRPass* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rect* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Rendering::Universal::XRPass*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rect*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMMIRRORVIEW_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Rendering::Universal::XRPass* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRPass*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMMIRRORVIEW_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

