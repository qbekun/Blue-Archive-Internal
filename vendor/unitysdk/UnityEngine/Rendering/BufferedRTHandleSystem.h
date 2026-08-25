#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { class RTHandleProperties; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x9FBFA60)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x9FBFA80)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FBFAA0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET UNITYSDK_OFFSET(0x9FBFAE0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET UNITYSDK_OFFSET(0x9FBFB80)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x9FBFE00)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FBFEE0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RESETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC02B0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETNUMFRAMESALLOCATED_OFFSET UNITYSDK_OFFSET(0x9FC0300)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_CALCULATERATIOAGAINSTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x9FC0380)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET UNITYSDK_OFFSET(0x9FBFF20)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FC0700)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FC0A90)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x9FC0760)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0AE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BufferedRTHandleSystem_TypeDefinitionIndex = 34019;

	class BufferedRTHandleSystem : public Il2CppObject
	{
	public:
		Il2CppObject* m_RTHandles; // 0x10
		::UnityEngine::Rendering::RTHandleSystem* m_RTHandleSystem; // 0x18
		::System::Boolean m_DisposedValue; // 0x20

		::System::Int32 get_maxWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_maxHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandleProperties* get_rtHandleProperties()
		{
			return (return (::UnityEngine::Rendering::RTHandleProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetFrameRT(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AllocBuffer(::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReleaseBuffer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void SwapAndSetReferenceSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetReferenceSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RESETREFERENCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNumFramesAllocated(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETNUMFRAMESALLOCATED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* CalculateRatioAgainstMaxSize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_CALCULATERATIOAGAINSTMAXSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Swap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ReleaseAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

