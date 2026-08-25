#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x92DB650)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92DB660)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x92DB680)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x92DB830)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x92DB8B0)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92DB920)
#define SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DB970)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ByteEqualityComparer_TypeDefinitionIndex = 25182;

	class ByteEqualityComparer : public ::MX::GameLogic::DBModel::CraftInfoDB
	{
	public:
		::System::Boolean Equals(::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Byte arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_INDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_LASTINDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BYTEEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

