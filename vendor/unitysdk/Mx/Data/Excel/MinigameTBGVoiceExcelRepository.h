#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TBGVoiceCondition; }

#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C0F850)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C0F9C0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C0FE00)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C10230)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C107D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGVoiceExcelRepository_TypeDefinitionIndex = 18928;

	class MinigameTBGVoiceExcelRepository : public <co_InternalInvoke>d__4
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_VoiceCondition(::System::Int64 arg, ::FlatData::TBGVoiceCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::TBGVoiceCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_VOICECONDITION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_VoiceCondition(::System::Int64 arg, ::FlatData::TBGVoiceCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::TBGVoiceCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_VOICECONDITION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_VoiceCondition(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_VOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

