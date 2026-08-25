#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class ConstantBufferBase; }

#define UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSHGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSHGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x9FA73B0)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_REGISTER_OFFSET UNITYSDK_OFFSET(0x9FA75A0)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7690)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FA76A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ConstantBuffer_TypeDefinitionIndex = 33887;

	class ConstantBuffer : public Il2CppObject
	{
	public:
		Il2CppObject* m_RegisteredConstantBuffers; // 0x0

		::System::Void PushGlobal(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSHGLOBAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PushGlobal(Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSHGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg, ::UnityEngine::ComputeShader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::UnityEngine::ComputeShader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Push(Il2CppObject&* arg, ::UnityEngine::ComputeShader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::UnityEngine::ComputeShader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Push(Il2CppObject&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_PUSH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateData(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_UPDATEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateData(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_UPDATEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobal(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_SETGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_SETGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::ComputeShader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Set(::UnityEngine::ComputeShader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_RELEASEALL_OFFSET))(nullptr);
		}

		::System::Void Register(::UnityEngine::Rendering::ConstantBufferBase* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ConstantBufferBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

