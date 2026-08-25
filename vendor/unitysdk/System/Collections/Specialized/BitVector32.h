#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B7FB60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B7FB70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_OFFSET UNITYSDK_OFFSET(0x9B7FB90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_OFFSET UNITYSDK_OFFSET(0x9B7FBA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7FC10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B7FC80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B7FCD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B80030)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int BitVector32_TypeDefinitionIndex = 29560;

	class BitVector32 : public Il2CppObject
	{
	public:
		::System::UInt32 _data; // 0x10

		::System::Boolean get_Item(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CreateMask()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_OFFSET))(nullptr);
		}

		::System::Int32 CreateMask(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Collections::Specialized::BitVector32* arg)
		{
			return (return (::System::String*(*)(::System::Collections::Specialized::BitVector32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_OFFSET))(nullptr);
		}

	};
}

