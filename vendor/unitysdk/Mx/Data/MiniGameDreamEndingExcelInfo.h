#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameDreamEndingExcel; }
namespace MX::Data { class MiniGameDreamEndingRewardExcelInfo; }
namespace FlatData { class DreamMakerEndingType; }

#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1904880)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19039A0)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1904A60)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1904A70)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1904A90)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_FIRSTCLEARREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1904AB0)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1904AC0)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_SET_FIRSTCLEARREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1904AE0)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_SET_AFTERFIRSTCLEARREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1904AF0)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_SET_ENDINGCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1904B00)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ENDINGCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1904B10)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_AFTERFIRSTCLEARREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1904B20)
#define MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1904B30)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamEndingExcelInfo_TypeDefinitionIndex = 16214;

	class MiniGameDreamEndingExcelInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _EndingConditions_k__BackingField; // 0x10
		::MX::Data::Excel::MiniGameDreamEndingExcel* __excel_k__BackingField; // 0x18
		::MX::Data::MiniGameDreamEndingRewardExcelInfo* _FirstClearRewardInfo_k__BackingField; // 0x28
		::MX::Data::MiniGameDreamEndingRewardExcelInfo* _AfterFirstClearRewardInfo_k__BackingField; // 0x30

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameDreamEndingExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamEndingExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingExcel* get__excel()
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET__EXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_EndingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ENDINGID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::Data::MiniGameDreamEndingRewardExcelInfo* get_FirstClearRewardInfo()
		{
			return (return (::MX::Data::MiniGameDreamEndingRewardExcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_FIRSTCLEARREWARDINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void set_FirstClearRewardInfo(::MX::Data::MiniGameDreamEndingRewardExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDreamEndingRewardExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_SET_FIRSTCLEARREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_AfterFirstClearRewardInfo(::MX::Data::MiniGameDreamEndingRewardExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDreamEndingRewardExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_SET_AFTERFIRSTCLEARREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndingConditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_SET_ENDINGCONDITIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EndingConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ENDINGCONDITIONS_OFFSET))(nullptr);
		}

		::MX::Data::MiniGameDreamEndingRewardExcelInfo* get_AfterFirstClearRewardInfo()
		{
			return (return (::MX::Data::MiniGameDreamEndingRewardExcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_AFTERFIRSTCLEARREWARDINFO_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingType* get_EndingType()
		{
			return (return (::FlatData::DreamMakerEndingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGEXCELINFO_GET_ENDINGTYPE_OFFSET))(nullptr);
		}

	};
}

