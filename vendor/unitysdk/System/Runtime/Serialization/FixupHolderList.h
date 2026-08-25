#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9200AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9200D30)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x9200D90)
#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x9200EA0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FixupHolderList_TypeDefinitionIndex = 24596;

	class FixupHolderList : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Runtime::Serialization::FixupHolder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::FixupHolder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void EnlargeArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDERLIST_ENLARGEARRAY_OFFSET))(nullptr);
		}

	};
}

