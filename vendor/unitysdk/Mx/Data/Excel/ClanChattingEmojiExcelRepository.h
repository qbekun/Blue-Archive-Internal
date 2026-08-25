#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A4DEB0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A4E1B0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E5B0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A4E5F0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A4E760)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ClanChattingEmojiExcelRepository_TypeDefinitionIndex = 17174;

	class ClanChattingEmojiExcelRepository : public ::FlatData::EmojiEvent
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

