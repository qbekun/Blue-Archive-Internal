#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class EquipmentOptionType; }
class StatParcelTooltipInfo;

#define UIPARCELSTATTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x274D3D0)
#define UIPARCELSTATTOOLTIP_SETEQUIPMENTSTATTEXT_OFFSET UNITYSDK_OFFSET(0x274D410)
#define UIPARCELSTATTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x274D7D0)
#define UIPARCELSTATTOOLTIP_ISRATESTATTYPE_OFFSET UNITYSDK_OFFSET(0x274D750)

	inline static constexpr unsigned int UIParcelStatTooltip_TypeDefinitionIndex = 7250;

	class UIParcelStatTooltip : public ::UnityEngine::InputSystem::LowLevel::LinearAccelerationState
	{
	public:
		UILabel* nameLabel; // 0x48
		UILabel* descLabel; // 0x50
		UILabel* statLabel; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELSTATTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEquipmentStatText(::FlatData::EquipmentOptionType* arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELSTATTOOLTIP_SETEQUIPMENTSTATTEXT_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void SetDataInternal(StatParcelTooltipInfo* arg)
		{
			((::System::Void(*)(StatParcelTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELSTATTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRateStatType(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELSTATTOOLTIP_ISRATESTATTYPE_OFFSET))(arg, nullptr);
		}

	};

