#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_ADDWITHBUFFERALLOCATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_TRYMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_ALLOCATEBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LargeArrayBuilder`1_TypeDefinitionIndex = 25154;

	class LargeArrayBuilder`1 : public Il2CppObject
	{
	public:
		::System::Int32 _maxCapacity; // 0x0
		::Il2CppArray<::System::Object*>* _first; // 0x0
		Il2CppObject* _buffers; // 0x0
		::Il2CppArray<::System::Object*>* _current; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _count; // 0x0

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddWithBufferAllocation(Il2CppObject* arg, ::System::Object[]&* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_ADDWITHBUFFERALLOCATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_COPYTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuffer(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_GETBUFFER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Boolean TryMove(::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_TRYMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void AllocateBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LARGEARRAYBUILDER`1_ALLOCATEBUFFER_OFFSET))(nullptr);
		}

	};
}

