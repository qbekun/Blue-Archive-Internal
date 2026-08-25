#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_PUSHGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_PUSHGLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFER`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ConstantBuffer`1_TypeDefinitionIndex = 33889;

	class ConstantBuffer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_GlobalBindings; // 0x0
		::Il2CppArray<::System::Object*>* m_Data; // 0x0
		::UnityEngine::ComputeBuffer* m_GPUConstantBuffer; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateData(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_UPDATEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateData(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_UPDATEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobal(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SETGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SETGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::ComputeShader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Set(::UnityEngine::ComputeShader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PushGlobal(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_PUSHGLOBAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PushGlobal(Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_PUSHGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFER`1_RELEASE_OFFSET))(nullptr);
		}

	};
}

