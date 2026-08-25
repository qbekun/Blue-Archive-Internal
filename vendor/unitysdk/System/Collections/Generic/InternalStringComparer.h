#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92DB9B0)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x92DB9E0)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x92DBA10)
#define SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DBA90)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int InternalStringComparer_TypeDefinitionIndex = 25187;

	class InternalStringComparer : public ::MX::GameLogic::DBModel::ShiftingCraftInfoDB
	{
	public:
		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_INDEXOF_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTERNALSTRINGCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

