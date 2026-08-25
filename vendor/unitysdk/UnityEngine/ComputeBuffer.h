#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ComputeBufferType; }
namespace UnityEngine { class ComputeBufferMode; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA237010)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2371A0)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2370D0)
#define UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0xA2372C0)
#define UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET UNITYSDK_OFFSET(0xA237280)
#define UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA237310)
#define UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA237520)
#define UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA237540)
#define UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA237330)
#define UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA2375A0)
#define UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA2375B0)
#define UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET UNITYSDK_OFFSET(0xA2375F0)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0xA237630)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA2377F0)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET UNITYSDK_OFFSET(0xA2377A0)
#define UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA237840)
#define UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET UNITYSDK_OFFSET(0xA237880)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBuffer_TypeDefinitionIndex = 31193;

	class ComputeBuffer : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 InitBuffer(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBufferType* arg, ::UnityEngine::ComputeBufferMode* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType*, ::UnityEngine::ComputeBufferMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DestroyBuffer(::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBufferType* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBufferType* arg, ::UnityEngine::ComputeBufferMode* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType*, ::UnityEngine::ComputeBufferMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBufferType* arg, ::UnityEngine::ComputeBufferMode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType*, ::UnityEngine::ComputeBufferMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET))(nullptr);
		}

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_stride()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Array* arg)
		{
			((::System::Void(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InternalSetNativeData(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InternalSetData(::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void SetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET))(str, nullptr);
		}

	};
}

