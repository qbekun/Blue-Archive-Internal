#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CB2E0)
#define SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CB510)
#define SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CB340)
#define SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CB520)
#define SYSTEM_COLLECTIONS_QUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92CB7B0)
#define SYSTEM_COLLECTIONS_QUEUE_CLONE_OFFSET UNITYSDK_OFFSET(0x92CB7C0)
#define SYSTEM_COLLECTIONS_QUEUE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92CB890)
#define SYSTEM_COLLECTIONS_QUEUE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92CB8A0)
#define SYSTEM_COLLECTIONS_QUEUE_COPYTO_OFFSET UNITYSDK_OFFSET(0x92CB920)
#define SYSTEM_COLLECTIONS_QUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x92CBB30)
#define SYSTEM_COLLECTIONS_QUEUE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92CBD10)
#define SYSTEM_COLLECTIONS_QUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x92CBE30)
#define SYSTEM_COLLECTIONS_QUEUE_PEEK_OFFSET UNITYSDK_OFFSET(0x92CBF00)
#define SYSTEM_COLLECTIONS_QUEUE_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x92CBFA0)
#define SYSTEM_COLLECTIONS_QUEUE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x92CBC10)

namespace System::Collections
{
	inline static constexpr unsigned int Queue_TypeDefinitionIndex = 25073;

	class Queue : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x10
		::System::Int32 _head; // 0x18
		::System::Int32 _tail; // 0x1C
		::System::Int32 _size; // 0x20
		::System::Int32 _growFactor; // 0x24
		::System::Int32 _version; // 0x28
		::System::Object* _syncRoot; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Enqueue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* Dequeue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_DEQUEUE_OFFSET))(nullptr);
		}

		::System::Object* Peek()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_PEEK_OFFSET))(nullptr);
		}

		::System::Object* GetElement(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_GETELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_QUEUE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

