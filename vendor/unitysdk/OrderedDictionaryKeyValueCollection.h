#pragma once
#include "unitysdk.h"

#define ORDEREDDICTIONARYKEYVALUECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B82E40)
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9B84560)
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B849C0)
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B849F0)
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B84A00)
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B84A30)

	inline static constexpr unsigned int OrderedDictionaryKeyValueCollection_TypeDefinitionIndex = 29568;

	class OrderedDictionaryKeyValueCollection : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _objects; // 0x10
		::System::Boolean _isKeys; // 0x18

		::System::Void .ctor(::System::Collections::ArrayList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYKEYVALUECOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

