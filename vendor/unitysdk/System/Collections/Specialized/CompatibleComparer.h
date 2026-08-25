#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B87540)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B87F00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B88110)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x9B88220)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9B88230)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTCOMPARER_OFFSET UNITYSDK_OFFSET(0x9B86CA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTHASHCODEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9B86BB0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int CompatibleComparer_TypeDefinitionIndex = 29579;

	class CompatibleComparer : public Il2CppObject
	{
	public:
		::System::Collections::IComparer* _comparer; // 0x10
		::System::Collections::IComparer* defaultComparer; // 0x0
		::System::Collections::IHashCodeProvider* _hcp; // 0x18
		::System::Collections::IHashCodeProvider* defaultHashProvider; // 0x8

		::System::Void .ctor(::System::Collections::IComparer* arg, ::System::Collections::IHashCodeProvider* arg)
		{
			((::System::Void(*)(::System::Collections::IComparer*, ::System::Collections::IHashCodeProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IComparer* get_Comparer()
		{
			return (return (::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_COMPARER_OFFSET))(nullptr);
		}

		::System::Collections::IHashCodeProvider* get_HashCodeProvider()
		{
			return (return (::System::Collections::IHashCodeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_HASHCODEPROVIDER_OFFSET))(nullptr);
		}

		::System::Collections::IComparer* get_DefaultComparer()
		{
			return (return (::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTCOMPARER_OFFSET))(nullptr);
		}

		::System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider()
		{
			return (return (::System::Collections::IHashCodeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_COMPATIBLECOMPARER_GET_DEFAULTHASHCODEPROVIDER_OFFSET))(nullptr);
		}

	};
}

