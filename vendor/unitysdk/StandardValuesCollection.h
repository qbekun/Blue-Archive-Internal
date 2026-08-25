#pragma once
#include "unitysdk.h"

#define STANDARDVALUESCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B65330)
#define STANDARDVALUESCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B653F0)
#define STANDARDVALUESCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B654B0)
#define STANDARDVALUESCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B656A0)
#define STANDARDVALUESCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B65750)
#define STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B657F0)
#define STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B65800)
#define STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B65810)
#define STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9B65820)
#define STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B658D0)

	inline static constexpr unsigned int StandardValuesCollection_TypeDefinitionIndex = 29511;

	class StandardValuesCollection : public Il2CppObject
	{
	public:
		::System::Collections::ICollection* values; // 0x10
		::System::Array* valueArray; // 0x18

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDARDVALUESCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

