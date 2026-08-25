#pragma once
#include "unitysdk.h"

namespace MX::Data { class GuideMissionSeasonInfo; }
class GuideMissionSeasonContent;

#define GUIDEMISSIONARCHIVEITEM_GET_ISPRESEASONCLEAR_OFFSET UNITYSDK_OFFSET(0x246BFD0)
#define GUIDEMISSIONARCHIVEITEM__GET_SEASONCONTENT_B__14_0_OFFSET UNITYSDK_OFFSET(0x246C930)
#define GUIDEMISSIONARCHIVEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x246C970)
#define GUIDEMISSIONARCHIVEITEM_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x246CA30)
#define GUIDEMISSIONARCHIVEITEM_GET_SEASONCONTENT_OFFSET UNITYSDK_OFFSET(0x246C820)
#define GUIDEMISSIONARCHIVEITEM_GET_ISOPENTIME_OFFSET UNITYSDK_OFFSET(0x246BF20)
#define GUIDEMISSIONARCHIVEITEM_GET_PRESEASONINFO_OFFSET UNITYSDK_OFFSET(0x246CA40)
#define GUIDEMISSIONARCHIVEITEM_GET_ISCLEARALL_OFFSET UNITYSDK_OFFSET(0x246C7E0)

	inline static constexpr unsigned int GuideMissionArchiveItem_TypeDefinitionIndex = 5632;

	class GuideMissionArchiveItem : public Il2CppObject
	{
	public:
		::MX::Data::GuideMissionSeasonInfo* _SeasonInfo_k__BackingField; // 0x10
		::MX::Data::GuideMissionSeasonInfo* _PreSeasonInfo_k__BackingField; // 0x18

		::System::Boolean get_IsPreSeasonClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_GET_ISPRESEASONCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean _get_SeasonContent_b__14_0(GuideMissionSeasonContent* arg)
		{
			return ((::System::Boolean(*)(GuideMissionSeasonContent*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM__GET_SEASONCONTENT_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_GET_SEASONINFO_OFFSET))(nullptr);
		}

		GuideMissionSeasonContent* get_SeasonContent()
		{
			return ((GuideMissionSeasonContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_GET_SEASONCONTENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpenTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_GET_ISOPENTIME_OFFSET))(nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_PreSeasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_GET_PRESEASONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONARCHIVEITEM_GET_ISCLEARALL_OFFSET))(nullptr);
		}

	};

