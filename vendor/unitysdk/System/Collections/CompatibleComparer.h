#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C9C30)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x92C9C80)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x92C9C90)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x92C9CA0)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x92C9CC0)
#define SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92C9E80)

namespace System::Collections
{
	inline static constexpr unsigned int CompatibleComparer_TypeDefinitionIndex = 25067;

	class CompatibleComparer : public Il2CppObject
	{
	public:
		::System::Collections::IHashCodeProvider* _hcp; // 0x10
		::System::Collections::IComparer* _comparer; // 0x18

		::System::Void .ctor(::System::Collections::IHashCodeProvider* arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IHashCodeProvider* get_HashCodeProvider()
		{
			return (return (::System::Collections::IHashCodeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET))(nullptr);
		}

		::System::Collections::IComparer* get_Comparer()
		{
			return (return (::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GET_COMPARER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPATIBLECOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

