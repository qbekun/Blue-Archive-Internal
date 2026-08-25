#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentFortuneGachaExcel; }

#define MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1843600)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1843610)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1843620)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_NAMEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1843690)
#define MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18436A0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentFortuneGachaInfo_TypeDefinitionIndex = 15796;

	class EventContentFortuneGachaInfo : public Il2CppObject
	{
	public:
		::System::Int64 _FortuneGachaGroupId_k__BackingField; // 0x10
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::String* _NameImagePath_k__BackingField; // 0x28

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_FortuneGachaGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_FORTUNEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentFortuneGachaExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentFortuneGachaExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_NAMEIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTFORTUNEGACHAINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

	};
}

