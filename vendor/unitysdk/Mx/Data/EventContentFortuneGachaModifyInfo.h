#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentFortuneGachaModifyExcel; }

#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18434E0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_SHOPBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18434F0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_BUCKETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1843500)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1843510)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_TARGETGRADE_OFFSET UNITYSDK_OFFSET(0x18435C0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_PROBMODIFYSTARTCOUNT_OFFSET UNITYSDK_OFFSET(0x18435D0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_USEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x18435E0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_TITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x18435F0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentFortuneGachaModifyInfo_TypeDefinitionIndex = 15795;

	class EventContentFortuneGachaModifyInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _TargetGrade_k__BackingField; // 0x18
		::System::Int32 _ProbModifyStartCount_k__BackingField; // 0x1C
		::System::String* _UsePrefabName_k__BackingField; // 0x20
		::System::String* _BucketImagePath_k__BackingField; // 0x28
		::System::String* _ShopBgImagePath_k__BackingField; // 0x30
		::System::String* _TitleLocalizeKey_k__BackingField; // 0x38

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_ShopBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_SHOPBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_BucketImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_BUCKETIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentFortuneGachaModifyExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentFortuneGachaModifyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TargetGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_TARGETGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbModifyStartCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_PROBMODIFYSTARTCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_UsePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_USEPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAMODIFYINFO_GET_TITLELOCALIZEKEY_OFFSET))(nullptr);
		}

	};
}

