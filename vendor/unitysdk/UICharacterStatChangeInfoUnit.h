#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class StatType; }

#define UICHARACTERSTATCHANGEINFOUNIT_GET_STATVALUE_OFFSET UNITYSDK_OFFSET(0x22D3260)
#define UICHARACTERSTATCHANGEINFOUNIT_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x22D33A0)
#define UICHARACTERSTATCHANGEINFOUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D34E0)
#define UICHARACTERSTATCHANGEINFOUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22D30E0)

	inline static constexpr unsigned int UICharacterStatChangeInfoUnit_TypeDefinitionIndex = 4831;

	class UICharacterStatChangeInfoUnit : public Il2CppObject
	{
	public:
		UILabel* statName; // 0x18
		UILabel* statValue; // 0x20

		UILabel* get_StatValue()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOUNIT_GET_STATVALUE_OFFSET))(nullptr);
		}

		UILabel* get_StatName()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOUNIT_GET_STATNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::StatType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::StatType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSTATCHANGEINFOUNIT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

