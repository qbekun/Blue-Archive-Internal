#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class EquipmentOptionType; }

#define HEROSTATTYPEVALUEDISPLAY_ISENHANCESTATTYPE_OFFSET UNITYSDK_OFFSET(0x2418BC0)
#define HEROSTATTYPEVALUEDISPLAY_SET_OFFSET UNITYSDK_OFFSET(0x2418BE0)
#define HEROSTATTYPEVALUEDISPLAY_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x2418F20)
#define HEROSTATTYPEVALUEDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2418FC0)
#define HEROSTATTYPEVALUEDISPLAY_ISRATESTATTYPE_OFFSET UNITYSDK_OFFSET(0x2418EA0)
#define HEROSTATTYPEVALUEDISPLAY_SETEMPTYSTAT_OFFSET UNITYSDK_OFFSET(0x2418FD0)

	inline static constexpr unsigned int HeroStatTypeValueDisplay_TypeDefinitionIndex = 5481;

	class HeroStatTypeValueDisplay : public Il2CppObject
	{
	public:
		UILabel* StatTypeLabel; // 0x10
		UILabel* StatValueLabel; // 0x18

		::System::Boolean IsEnhanceStatType(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + HEROSTATTYPEVALUEDISPLAY_ISENHANCESTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::FlatData::EquipmentOptionType* arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HEROSTATTYPEVALUEDISPLAY_SET_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEROSTATTYPEVALUEDISPLAY_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEROSTATTYPEVALUEDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsRateStatType(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + HEROSTATTYPEVALUEDISPLAY_ISRATESTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmptyStat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEROSTATTYPEVALUEDISPLAY_SETEMPTYSTAT_OFFSET))(nullptr);
		}

	};

