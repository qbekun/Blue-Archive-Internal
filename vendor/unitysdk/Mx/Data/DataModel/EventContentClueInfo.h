#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class EventContentClueExcel; }

#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1983FC0)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1984170)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_ISUSINGHINT_OFFSET UNITYSDK_OFFSET(0x1984180)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_HINTLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1984190)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_CLUEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19841A0)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_SLOTCLUEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19841B0)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x19841C0)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x19841D0)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x19841E0)

namespace MX::Data::DataModel
{
	inline static constexpr unsigned int EventContentClueInfo_TypeDefinitionIndex = 16531;

	class EventContentClueInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentClueExcel* _excel; // 0x10
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20

		::System::Void .ctor(::MX::Data::Excel::EventContentClueExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentClueExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUsingHint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_ISUSINGHINT_OFFSET))(nullptr);
		}

		::System::UInt32 get_HintLocalizeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_HINTLOCALIZEID_OFFSET))(nullptr);
		}

		::System::String* get_ClueImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_CLUEIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_SlotClueImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_SLOTCLUEIMAGEPATH_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUEINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

	};
}

