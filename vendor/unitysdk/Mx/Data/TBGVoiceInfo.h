#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGVoiceExcel; }
namespace FlatData { class TBGVoiceCondition; }

#define MX_DATA_TBGVOICEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x190C7F0)
#define MX_DATA_TBGVOICEINFO_GET_VOICEIDHASH_OFFSET UNITYSDK_OFFSET(0x190C810)
#define MX_DATA_TBGVOICEINFO_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x190C830)
#define MX_DATA_TBGVOICEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190C850)
#define MX_DATA_TBGVOICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190C870)
#define MX_DATA_TBGVOICEINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190C8A0)

namespace MX::Data
{
	inline static constexpr unsigned int TBGVoiceInfo_TypeDefinitionIndex = 16246;

	class TBGVoiceInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameTBGVoiceExcel* _Excel_k__BackingField; // 0x10

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGVOICEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceIdHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGVOICEINFO_GET_VOICEIDHASH_OFFSET))(nullptr);
		}

		::FlatData::TBGVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::TBGVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGVOICEINFO_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGVOICEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGVoiceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGVOICEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGVoiceExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGVoiceExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGVOICEINFO_GET_EXCEL_OFFSET))(nullptr);
		}

	};
}

