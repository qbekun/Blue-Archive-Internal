#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class MiniGameTBGThemaRewardType; }

#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C0DFC0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_THEMAUNIQUEID_MINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0E130)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAUNIQUEID_MINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0E650)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAUNIQUEID_MINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0EB60)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F1A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameTBGThemaRewardExcelRepository_TypeDefinitionIndex = 18921;

	class MiniGameTBGThemaRewardExcelRepository : public SkillButtonEffect
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_ThemaUniqueId_MiniGameTBGThemaRewardType(::System::Int64 arg, ::System::Int32 arg, ::FlatData::MiniGameTBGThemaRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::FlatData::MiniGameTBGThemaRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_THEMAUNIQUEID_MINIGAMETBGTHEMAREWARDTYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ThemaUniqueId_MiniGameTBGThemaRewardType(::System::Int64 arg, ::System::Int32 arg, ::FlatData::MiniGameTBGThemaRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::FlatData::MiniGameTBGThemaRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAUNIQUEID_MINIGAMETBGTHEMAREWARDTYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ThemaUniqueId_MiniGameTBGThemaRewardType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAUNIQUEID_MINIGAMETBGTHEMAREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

