#pragma once
#include "unitysdk.h"

#define GPUBUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define GPUBUFFER`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GPUBUFFER`1_UPDATERANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define GPUBUFFER`1_GET_ELEMENTSTRIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GPUBUFFER`1_GET_BUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int GPUBuffer`1_TypeDefinitionIndex = 37372;

	class GPUBuffer`1 : public Il2CppObject
	{
	public:
		::System::Int32 buffer; // 0x0
		::System::Int32 elemCount; // 0x0
		::System::Int32 elemStride; // 0x0

		::System::Void .ctor(::System::Int32 arg, GPUBufferType* arg)
		{
			((::System::Void(*)(::System::Int32, GPUBufferType*, ::PVOID))((::PBYTE)hIl2Cpp + GPUBUFFER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBUFFER`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void UpdateRanges(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GPUBUFFER`1_UPDATERANGES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_ElementStride()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBUFFER`1_GET_ELEMENTSTRIDE_OFFSET))(nullptr);
		}

		::System::Int32 get_BufferPointer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBUFFER`1_GET_BUFFERPOINTER_OFFSET))(nullptr);
		}

	};

