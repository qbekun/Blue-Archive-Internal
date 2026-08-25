#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_LISTBUFFER`1_GET_BUFFERPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_GETUNCHECKED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_TRYCOPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_TRYCOPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LISTBUFFER`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ListBuffer`1_TypeDefinitionIndex = 33912;

	class ListBuffer`1 : public Il2CppObject
	{
	public:
		::System::Object** m_BufferPtr; // 0x0
		::System::Int32 m_Capacity; // 0x0
		::System::Object** m_CountPtr; // 0x0

		::System::Object** get_BufferPtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_GET_BUFFERPTR_OFFSET))(nullptr);
		}

		Il2CppObject&* get_Item(int32_t&* arg)
		{
			return (return (Il2CppObject&*(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryAdd(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_TRYADD_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_COPYTO_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject&* GetUnchecked(int32_t&* arg)
		{
			return (return (Il2CppObject&*(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_GETUNCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryCopyFrom(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_TRYCOPYFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryCopyTo(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_TRYCOPYTO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFER`1_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

