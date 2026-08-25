#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DeferredShaderData; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_DISPOSENATIVEARRAYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_ALIGN_OFFSET UNITYSDK_OFFSET(0xA046950)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GETORUPDATEBUFFER_OFFSET UNITYSDK_OFFSET(0xA046970)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA046D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GETORUPDATENATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA046E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GETPRETILES_OFFSET UNITYSDK_OFFSET(0xA046EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_DISPOSEBUFFERS_OFFSET UNITYSDK_OFFSET(0xA046F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_RESERVEBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_ISLESSCIRCULAR_OFFSET UNITYSDK_OFFSET(0xA046D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA047030)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_RESETBUFFERS_OFFSET UNITYSDK_OFFSET(0xA0470F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DeferredShaderData_TypeDefinitionIndex = 32627;

	class DeferredShaderData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DeferredShaderData* m_Instance; // 0x0
		::Il2CppArray<::System::Object*>* m_PreTiles; // 0x10
		::Il2CppArray<::System::Object*>* m_Buffers; // 0x18
		::Il2CppArray<::System::Object*>* m_BufferInfos; // 0x20
		::System::Int32 m_BufferCount; // 0x28
		::System::Int32 m_CachedBufferIndex; // 0x2C
		::System::UInt32 m_FrameIndex; // 0x30

		::System::Void DisposeNativeArrays(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_DISPOSENATIVEARRAYS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Align(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_ALIGN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ComputeBuffer* GetOrUpdateBuffer(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GETORUPDATEBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrUpdateNativeArray(::System::Object[]&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object[]&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GETORUPDATENATIVEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DeferredShaderData* get_instance()
		{
			return (return (::UnityEngine::Rendering::Universal::DeferredShaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GET_INSTANCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetPreTiles(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_GETPRETILES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisposeBuffers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_DISPOSEBUFFERS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ComputeBuffer* ReserveBuffer(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_RESERVEBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLessCircular(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_ISLESSCIRCULAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ResetBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDSHADERDATA_RESETBUFFERS_OFFSET))(nullptr);
		}

	};
}

