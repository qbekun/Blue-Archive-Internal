#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AA4830)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AA4A90)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AA4E90)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AA5270)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA5810)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA5B30)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AA5E40)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6250)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCharacterBonusExcelRepository_TypeDefinitionIndex = 17559;

	class EventContentCharacterBonusExcelRepository : public UCBTDecoratorIsStunnedFormatter
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_CharacterId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_CharacterId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTID_CHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_CharacterId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTID_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

