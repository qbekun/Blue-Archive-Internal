#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Collections { class Allocator; }
namespace Unity::Collections { class NativeArrayOptions; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0AD070)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0AD0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_ISSET_OFFSET UNITYSDK_OFFSET(0xA0AD0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0AD100)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_SET_OFFSET UNITYSDK_OFFSET(0xA0AD180)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BitArray_TypeDefinitionIndex = 32854;

	class BitArray : public Il2CppObject
	{
	public:
		Il2CppObject* m_Mem; // 0x10
		::System::Int32 m_BitCount; // 0x20
		::System::Int32 m_IntCount; // 0x24

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean IsSet(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_ISSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Unity::Collections::Allocator* arg, ::Unity::Collections::NativeArrayOptions* arg)
		{
			((::System::Void(*)(::System::Int32, ::Unity::Collections::Allocator*, ::Unity::Collections::NativeArrayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BITARRAY_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

