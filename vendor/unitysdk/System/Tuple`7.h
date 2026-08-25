#pragma once
#include "../unitysdk.h"

#define SYSTEM_TUPLE`7_GET_ITEM1_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GET_ITEM2_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GET_ITEM3_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GET_ITEM4_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GET_ITEM5_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GET_ITEM6_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GET_ITEM7_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.COLLECTIONS.ISTRUCTURALCOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.ITUPLEINTERNAL.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.ITUPLEINTERNAL.TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TUPLE`7_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Tuple`7_TypeDefinitionIndex = 23855;

	class Tuple`7 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Item1; // 0x0
		Il2CppObject* m_Item2; // 0x0
		Il2CppObject* m_Item3; // 0x0
		Il2CppObject* m_Item4; // 0x0
		Il2CppObject* m_Item5; // 0x0
		Il2CppObject* m_Item6; // 0x0
		Il2CppObject* m_Item7; // 0x0

		Il2CppObject* get_Item1()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM1_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item2()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM2_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item3()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM3_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item4()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM4_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item5()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM5_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item6()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM6_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item7()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GET_ITEM7_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IStructuralEquatable.Equals(::System::Object* arg, ::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.IComparable.CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IStructuralComparable.CompareTo(::System::Object* arg, ::System::Collections::IComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.COLLECTIONS.ISTRUCTURALCOMPARABLE.COMPARETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.IStructuralEquatable.GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.COLLECTIONS.ISTRUCTURALEQUATABLE.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.ITupleInternal.GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.ITUPLEINTERNAL.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* System.ITupleInternal.ToString(::System::Text::StringBuilder* arg)
		{
			return (return (::System::String*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.ITUPLEINTERNAL.TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Runtime.CompilerServices.ITuple.get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Object* System.Runtime.CompilerServices.ITuple.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TUPLE`7_SYSTEM.RUNTIME.COMPILERSERVICES.ITUPLE.GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

