#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class BitSet; }

#define ANTLR_RUNTIME_BITSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C2360)
#define ANTLR_RUNTIME_BITSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C2420)
#define ANTLR_RUNTIME_BITSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C23C0)
#define ANTLR_RUNTIME_BITSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4C2450)
#define ANTLR_RUNTIME_BITSET_OR_OFFSET UNITYSDK_OFFSET(0x4C2490)
#define ANTLR_RUNTIME_BITSET_ORINPLACE_OFFSET UNITYSDK_OFFSET(0x4C2530)
#define ANTLR_RUNTIME_BITSET_CLONE_OFFSET UNITYSDK_OFFSET(0x4C26E0)
#define ANTLR_RUNTIME_BITSET_MEMBER_OFFSET UNITYSDK_OFFSET(0x4C28D0)
#define ANTLR_RUNTIME_BITSET_REMOVE_OFFSET UNITYSDK_OFFSET(0x4C2A40)
#define ANTLR_RUNTIME_BITSET_WORDNUMBER_OFFSET UNITYSDK_OFFSET(0x4C29D0)
#define ANTLR_RUNTIME_BITSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C2B70)
#define ANTLR_RUNTIME_BITSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C2B90)
#define ANTLR_RUNTIME_BITSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x4C2DD0)
#define ANTLR_RUNTIME_BITSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4C2FB0)
#define ANTLR_RUNTIME_BITSET_BITMASK_OFFSET UNITYSDK_OFFSET(0x4C29E0)
#define ANTLR_RUNTIME_BITSET_SETSIZE_OFFSET UNITYSDK_OFFSET(0x4C2620)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int BitSet_TypeDefinitionIndex = 37376;

	class BitSet : public Il2CppObject
	{
	public:
		::System::Int32 MOD_MASK; // 0x0
		::Il2CppArray<::System::Object*>* bits; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_.CCTOR_OFFSET))(nullptr);
		}

		::Antlr::Runtime::BitSet* Or(::Antlr::Runtime::BitSet* arg)
		{
			return (return (::Antlr::Runtime::BitSet*(*)(::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_OR_OFFSET))(arg, nullptr);
		}

		::System::Void OrInPlace(::Antlr::Runtime::BitSet* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_ORINPLACE_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Member(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_MEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 WordNumber(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_WORDNUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::UInt64 BitMask(::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_BITMASK_OFFSET))(arg, nullptr);
		}

		::System::Void SetSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BITSET_SETSIZE_OFFSET))(arg, nullptr);
		}

	};
}

