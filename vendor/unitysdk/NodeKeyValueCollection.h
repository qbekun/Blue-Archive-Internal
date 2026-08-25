#pragma once
#include "unitysdk.h"

#define NODEKEYVALUECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B804A0)
#define NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9B81250)
#define NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B813C0)
#define NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B81400)
#define NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B81410)
#define NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B81490)

	inline static constexpr unsigned int NodeKeyValueCollection_TypeDefinitionIndex = 29563;

	class NodeKeyValueCollection : public Il2CppObject
	{
	public:
		::System::Collections::Specialized::ListDictionary* _list; // 0x10
		::System::Boolean _isKeys; // 0x18

		::System::Void .ctor(::System::Collections::Specialized::ListDictionary* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::ListDictionary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUECOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEKEYVALUECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

