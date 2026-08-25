#pragma once
#include "../unitysdk.h"

#define SYSTEM_VALUETUPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93832C0)
#define SYSTEM_VALUETUPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9383310)
#define SYSTEM_VALUETUPLE_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.EQUALS_OFFSET UNITYSDK_OFFSET(0x9383320)
#define SYSTEM_VALUETUPLE_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x9383370)
#define SYSTEM_VALUETUPLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9383480)
#define SYSTEM_VALUETUPLE_SYSTEM.COLLECTIONS.ISTRUCTURALCOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x9383490)
#define SYSTEM_VALUETUPLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93835A0)
#define SYSTEM_VALUETUPLE_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93835B0)
#define SYSTEM_VALUETUPLE_SYSTEM.IVALUETUPLEINTERNAL.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93835C0)
#define SYSTEM_VALUETUPLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93835D0)
#define SYSTEM_VALUETUPLE_SYSTEM.IVALUETUPLEINTERNAL.TOSTRINGEND_OFFSET UNITYSDK_OFFSET(0x9383600)
#define SYSTEM_VALUETUPLE_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9383630)
#define SYSTEM_VALUETUPLE_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9383640)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9383690)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9383700)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x93837E0)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9383850)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9383900)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9383990)
#define SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x9383A70)

namespace System
{
	inline static constexpr unsigned int ValueTuple_TypeDefinitionIndex = 23868;

	class ValueTuple : public Il2CppObject
	{
	public:
		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::ValueTuple* arg)
		{
			return (return (::System::Boolean(*)(::System::ValueTuple*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IStructuralEquatable.Equals(::System::Object* arg, ::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.IComparable.CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::ValueTuple* arg)
		{
			return (return (::System::Int32(*)(::System::ValueTuple*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IStructuralComparable.CompareTo(::System::Object* arg, ::System::Collections::IComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.COLLECTIONS.ISTRUCTURALCOMPARABLE.COMPARETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.IStructuralEquatable.GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IValueTupleInternal.GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.IVALUETUPLEINTERNAL.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* System.IValueTupleInternal.ToStringEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.IVALUETUPLEINTERNAL.TOSTRINGEND_OFFSET))(nullptr);
		}

		::System::Int32 System.Runtime.CompilerServices.ITuple.get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Object* System.Runtime.CompilerServices.ITuple.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETUPLE_COMBINEHASHCODES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

