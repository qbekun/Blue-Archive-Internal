#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9201200)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91FFD00)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91FFCA0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectHolderListEnumerator_TypeDefinitionIndex = 24599;

	class ObjectHolderListEnumerator : public Il2CppObject
	{
	public:
		::System::Boolean m_isFixupEnumerator; // 0x10
		::System::Runtime::Serialization::ObjectHolderList* m_list; // 0x18
		::System::Int32 m_startingVersion; // 0x20
		::System::Int32 m_currPos; // 0x24

		::System::Void .ctor(::System::Runtime::Serialization::ObjectHolderList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ObjectHolderList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::ObjectHolder* get_Current()
		{
			return (return (::System::Runtime::Serialization::ObjectHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTHOLDERLISTENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

