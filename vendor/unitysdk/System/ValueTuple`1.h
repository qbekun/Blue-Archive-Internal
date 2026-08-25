#pragma once
#include "../unitysdk.h"

#define SYSTEM_VALUETUPLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.COLLECTIONS.ISTRUCTURALCOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.IVALUETUPLEINTERNAL.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.IVALUETUPLEINTERNAL.TOSTRINGEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_VALUETUPLE`1_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ValueTuple`1_TypeDefinitionIndex = 23869;

	class ValueTuple`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Item1; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IStructuralEquatable.Equals(::System::Object* arg, ::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.IComparable.CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IStructuralComparable.CompareTo(::System::Object* arg, ::System::Collections::IComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.COLLECTIONS.ISTRUCTURALCOMPARABLE.COMPARETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.IStructuralEquatable.GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IValueTupleInternal.GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.IVALUETUPLEINTERNAL.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* System.IValueTupleInternal.ToStringEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.IVALUETUPLEINTERNAL.TOSTRINGEND_OFFSET))(nullptr);
		}

		::System::Int32 System.Runtime.CompilerServices.ITuple.get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Object* System.Runtime.CompilerServices.ITuple.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE`1_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

