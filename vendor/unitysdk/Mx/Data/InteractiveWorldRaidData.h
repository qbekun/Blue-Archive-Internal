#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class InteractiveWorldRaidCarrierMapInfo; }
namespace FlatData { class EventContentType; }
namespace MX::Data { class InteractiveWorldRaidArcadeInfo&; }
namespace MX::Data { class InteractiveWorldRaidCarrierMapInfo&; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class InteractiveWorldRaidCarrierRecipeInfo&; }

#define MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERMAPINFOS_OFFSET UNITYSDK_OFFSET(0x18E1D90)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E1F10)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_GETDEFAULTWORLDMAPDATA_OFFSET UNITYSDK_OFFSET(0x18E2030)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERRECIPEINFOS_OFFSET UNITYSDK_OFFSET(0x18E2130)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETINTERACTIVEWORLDRAIDARCADEINFO_OFFSET UNITYSDK_OFFSET(0x18E22A0)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_GETDEFAULTBRIDGEBGM_OFFSET UNITYSDK_OFFSET(0x18E2350)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERMAPINFO_OFFSET UNITYSDK_OFFSET(0x18E2450)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERRECIPEINGREDIENTIDS_OFFSET UNITYSDK_OFFSET(0x18E24B0)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18E26F0)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_GETDEFAULTCARRIERMAPDATA_OFFSET UNITYSDK_OFFSET(0x18E33A0)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERRECIPEINFO_OFFSET UNITYSDK_OFFSET(0x18E34A0)
#define MX_DATA_INTERACTIVEWORLDRAIDDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18E27C0)

namespace MX::Data
{
	inline static constexpr unsigned int InteractiveWorldRaidData_TypeDefinitionIndex = 16154;

	class InteractiveWorldRaidData : public Il2CppObject
	{
	public:
		Il2CppObject* carrierMapDic; // 0x28
		Il2CppObject* carrierRecipeDic; // 0x30
		Il2CppObject* arcadeDic; // 0x38

		::System::Boolean TryGetCarrierMapInfos(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERMAPINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::InteractiveWorldRaidCarrierMapInfo* GetDefaultWorldMapData(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::InteractiveWorldRaidCarrierMapInfo*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_GETDEFAULTWORLDMAPDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCarrierRecipeInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERRECIPEINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidArcadeInfo(::System::Int64 arg, ::FlatData::EventContentType* arg, ::MX::Data::InteractiveWorldRaidArcadeInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::EventContentType*, ::MX::Data::InteractiveWorldRaidArcadeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETINTERACTIVEWORLDRAIDARCADEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 GetDefaultBridgeBGM(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_GETDEFAULTBRIDGEBGM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCarrierMapInfo(::System::Int64 arg, ::MX::Data::InteractiveWorldRaidCarrierMapInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::InteractiveWorldRaidCarrierMapInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERMAPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCarrierRecipeIngredientIds(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERRECIPEINGREDIENTIDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::MX::Data::InteractiveWorldRaidCarrierMapInfo* GetDefaultCarrierMapData(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::InteractiveWorldRaidCarrierMapInfo*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_GETDEFAULTCARRIERMAPDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCarrierRecipeInfo(::System::Int64 arg, ::MX::Data::InteractiveWorldRaidCarrierRecipeInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::InteractiveWorldRaidCarrierRecipeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_TRYGETCARRIERRECIPEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

	};
}

