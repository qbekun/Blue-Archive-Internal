#pragma once
#include "../../../unitysdk.h"

namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine::Jobs { class TransformAccessArray&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA03CB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xA03CBA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xA03CBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xA03CBC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_GET_CURRENTJOBHANDLE_OFFSET UNITYSDK_OFFSET(0xA03CBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SET_CURRENTJOBHANDLE_OFFSET UNITYSDK_OFFSET(0xA03CBE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_PUSH_OFFSET UNITYSDK_OFFSET(0xA03CBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA03CC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_RESIZENATIVEARRAY_OFFSET UNITYSDK_OFFSET(0xA03CC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03CCE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalChunk_TypeDefinitionIndex = 32602;

	class DecalChunk : public Il2CppObject
	{
	public:
		::System::Int32 _count_k__BackingField; // 0x10
		::System::Int32 _capacity_k__BackingField; // 0x14
		::Unity::Jobs::JobHandle* _currentJobHandle_k__BackingField; // 0x18

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::Unity::Jobs::JobHandle* get_currentJobHandle()
		{
			return (return (::Unity::Jobs::JobHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_GET_CURRENTJOBHANDLE_OFFSET))(nullptr);
		}

		::System::Void set_currentJobHandle(::Unity::Jobs::JobHandle* arg)
		{
			((::System::Void(*)(::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SET_CURRENTJOBHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void Push()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_PUSH_OFFSET))(nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ResizeNativeArray(::UnityEngine::Jobs::TransformAccessArray&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccessArray&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_RESIZENATIVEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveAtSwapBack(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Object[]&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCHUNK_.CTOR_OFFSET))(nullptr);
		}

	};
}

