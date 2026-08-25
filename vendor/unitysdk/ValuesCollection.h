#pragma once
#include "unitysdk.h"

#define VALUESCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E8130)
#define VALUESCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x98E8260)
#define VALUESCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x98E8270)
#define VALUESCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x98E8310)
#define VALUESCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x98E83B0)
#define VALUESCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98E84E0)

	inline static constexpr unsigned int ValuesCollection_TypeDefinitionIndex = 28184;

	class ValuesCollection : public Il2CppObject
	{
	public:
		Il2CppObject* entries; // 0x10
		::System::Int32 size; // 0x18

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLLECTION_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

	};

