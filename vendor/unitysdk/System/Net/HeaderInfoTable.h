#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET UNITYSDK_OFFSET(0x9A4DF70)
#define SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET UNITYSDK_OFFSET(0x9A4E010)
#define SYSTEM_NET_HEADERINFOTABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A4E270)
#define SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A482B0)
#define SYSTEM_NET_HEADERINFOTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4AE80)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfoTable_TypeDefinitionIndex = 29711;

	class HeaderInfoTable : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* HeaderHashTable; // 0x0
		::System::Net::HeaderInfo* UnknownHeaderInfo; // 0x8
		::System::Net::HeaderParser* SingleParser; // 0x10
		::System::Net::HeaderParser* MultiParser; // 0x18

		::Il2CppArray<::System::Object*>* ParseSingleValue(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ParseMultiValue(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Net::HeaderInfo* get_Item(::System::String* str)
		{
			return (return (::System::Net::HeaderInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

