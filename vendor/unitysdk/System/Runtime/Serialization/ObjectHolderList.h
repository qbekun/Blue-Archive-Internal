#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x91FC0B0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9201010)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x9201070)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GETFIXUPENUMERATOR_OFFSET UNITYSDK_OFFSET(0x91FFC20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x9201180)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9201250)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9201260)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolderList_TypeDefinitionIndex = 24598;

	class ObjectHolderList : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Runtime::Serialization::ObjectHolder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator()
		{
			return (return (::System::Runtime::Serialization::ObjectHolderListEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GETFIXUPENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void EnlargeArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_ENLARGEARRAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLIST_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

