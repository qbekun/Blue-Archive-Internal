#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_BITARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D0FA0)
#define SYSTEM_COLLECTIONS_BITARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D0FB0)
#define SYSTEM_COLLECTIONS_BITARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D1120)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D1220)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D1320)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET UNITYSDK_OFFSET(0x92D1230)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET UNITYSDK_OFFSET(0x92D1330)
#define SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET UNITYSDK_OFFSET(0x92D1470)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x92D14E0)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x92D14F0)
#define SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D16A0)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92D1C00)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92D1C10)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D1C80)
#define SYSTEM_COLLECTIONS_BITARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x92D1C90)
#define SYSTEM_COLLECTIONS_BITARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D1CF0)
#define SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x92D1100)

namespace System::Collections
{
	inline static constexpr unsigned int BitArray_TypeDefinitionIndex = 25085;

	class BitArray : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_array; // 0x10
		::System::Int32 m_length; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _syncRoot; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Item(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Get(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_Length(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_CLONE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 GetArrayLength(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET))(arg, arg, nullptr);
		}

	};
}

