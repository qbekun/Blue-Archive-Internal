#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentFortuneGachaShopExcel; }

#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x18436B0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x18436C0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x18436D0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18436E0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_PROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x18436F0)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1843700)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1843920)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_PROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x1843930)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1843940)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1843950)
#define MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1843960)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentFortuneGachaShopInfo_TypeDefinitionIndex = 15797;

	class EventContentFortuneGachaShopInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _Grade_k__BackingField; // 0x20
		::System::Int64 _CostGoodsId_k__BackingField; // 0x28
		::System::Boolean _IsLegacy_k__BackingField; // 0x30
		::System::Int32 _FortuneGachaGroupId_k__BackingField; // 0x34
		::System::Int32 _Prob_k__BackingField; // 0x38
		::System::Int32 _ProbModifyValue_k__BackingField; // 0x3C
		::System::Int32 _ProbModifyLimit_k__BackingField; // 0x40
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x48

		::System::Int32 get_Grade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_GRADE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbModifyValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_PROBMODIFYVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentFortuneGachaShopExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentFortuneGachaShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbModifyLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_PROBMODIFYLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_FortuneGachaGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_FORTUNEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHASHOPINFO_GET_PROB_OFFSET))(nullptr);
		}

	};
}

