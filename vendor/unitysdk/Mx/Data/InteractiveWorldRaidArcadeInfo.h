#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class InteractiveWorldRaidArcadeMachineExcel; }

#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_COSTITEMINFO_OFFSET UNITYSDK_OFFSET(0x184EB00)
#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_LOCALIZEDESC_OFFSET UNITYSDK_OFFSET(0x184EB10)
#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_MINIGAMETYPE_OFFSET UNITYSDK_OFFSET(0x184EB20)
#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_SOFTLIMITITEMINFO_OFFSET UNITYSDK_OFFSET(0x184EB30)
#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_MINIGAMEIMAGE_OFFSET UNITYSDK_OFFSET(0x184EB40)
#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_LOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x184EB50)
#define MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184EB60)

namespace MX::Data
{
	inline static constexpr unsigned int InteractiveWorldRaidArcadeInfo_TypeDefinitionIndex = 15845;

	class InteractiveWorldRaidArcadeInfo : public Il2CppObject
	{
	public:
		::FlatData::EventContentType* _MiniGameType_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _CostItemInfo_k__BackingField; // 0x18
		Il2CppObject* _SoftLimitItemInfo_k__BackingField; // 0x20
		::System::String* _MiniGameImage_k__BackingField; // 0x28
		::System::UInt32 _LocalizeTitle_k__BackingField; // 0x30
		::System::UInt32 _LocalizeDesc_k__BackingField; // 0x34

		::MX::GameLogic::Parcel::ParcelInfo* get_CostItemInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_COSTITEMINFO_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeDesc()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_LOCALIZEDESC_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_MiniGameType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_MINIGAMETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SoftLimitItemInfo()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_SOFTLIMITITEMINFO_OFFSET))(nullptr);
		}

		::System::String* get_MiniGameImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_MINIGAMEIMAGE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_GET_LOCALIZETITLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDARCADEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

