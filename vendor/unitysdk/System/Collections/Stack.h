#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_STACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D04A0)
#define SYSTEM_COLLECTIONS_STACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D0500)
#define SYSTEM_COLLECTIONS_STACK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92D05D0)
#define SYSTEM_COLLECTIONS_STACK_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D05E0)
#define SYSTEM_COLLECTIONS_STACK_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92D05F0)
#define SYSTEM_COLLECTIONS_STACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x92D0660)
#define SYSTEM_COLLECTIONS_STACK_CLONE_OFFSET UNITYSDK_OFFSET(0x92D0690)
#define SYSTEM_COLLECTIONS_STACK_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D0720)
#define SYSTEM_COLLECTIONS_STACK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D09E0)
#define SYSTEM_COLLECTIONS_STACK_PEEK_OFFSET UNITYSDK_OFFSET(0x92D0AD0)
#define SYSTEM_COLLECTIONS_STACK_POP_OFFSET UNITYSDK_OFFSET(0x92D0B60)
#define SYSTEM_COLLECTIONS_STACK_PUSH_OFFSET UNITYSDK_OFFSET(0x92D0C10)

namespace System::Collections
{
	inline static constexpr unsigned int Stack_TypeDefinitionIndex = 25083;

	class Stack : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x10
		::System::Int32 _size; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _syncRoot; // 0x20
		::System::Int32 _defaultCapacity; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_CLONE_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* Peek()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_PEEK_OFFSET))(nullptr);
		}

		::System::Object* Pop()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_POP_OFFSET))(nullptr);
		}

		::System::Void Push(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_PUSH_OFFSET))(arg, nullptr);
		}

	};
}

