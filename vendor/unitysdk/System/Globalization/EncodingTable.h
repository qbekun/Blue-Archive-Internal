#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET UNITYSDK_OFFSET(0x92A8170)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET UNITYSDK_OFFSET(0x92A81F0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x92A8250)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92A8290)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x92BC730)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x92BC9F0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x92BCCD0)

namespace System::Globalization
{
	inline static constexpr unsigned int EncodingTable_TypeDefinitionIndex = 25007;

	class EncodingTable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* encodingDataPtr; // 0x0
		::Il2CppArray<::System::Object*>* codePageDataPtr; // 0x8
		::System::Int32 lastEncodingItem; // 0x10
		Il2CppObject* hashByName; // 0x18
		Il2CppObject* hashByCodePage; // 0x20

		::System::Int32 GetNumEncodingItems()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET))(nullptr);
		}

		::System::Globalization::InternalEncodingDataItem* ENC(::System::String* str, ::System::UInt16 arg)
		{
			return (return (::System::Globalization::InternalEncodingDataItem*(*)(::System::String*, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET))(str, arg, nullptr);
		}

		::System::Globalization::InternalCodePageDataItem* MapCodePageDataItem(::System::UInt16 arg, ::System::UInt16 arg, ::System::String* str, ::System::UInt32 arg)
		{
			return (return (::System::Globalization::InternalCodePageDataItem*(*)(::System::UInt16, ::System::UInt16, ::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 internalGetCodePageFromName(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 GetCodePageFromName(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Globalization::CodePageDataItem* GetCodePageDataItem(::System::Int32 arg)
		{
			return (return (::System::Globalization::CodePageDataItem*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET))(arg, nullptr);
		}

	};
}

