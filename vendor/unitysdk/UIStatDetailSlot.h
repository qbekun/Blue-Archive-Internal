#pragma once
#include "unitysdk.h"

class CharacterDetailData;
namespace MX::Data::Excel { class CharacterStatsDetailExcel; }
namespace FlatData { class StatType; }
namespace MX::Data::Excel { class CharacterStatExcel; }

#define UISTATDETAILSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22CB5E0)
#define UISTATDETAILSLOT__SETDATA_G__SETCELLEMPTY|5_0_OFFSET UNITYSDK_OFFSET(0x22CB5F0)
#define UISTATDETAILSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C7E80)
#define UISTATDETAILSLOT_SETCHARACTERENHANCE_MAXCOSTSTATTYPE_OFFSET UNITYSDK_OFFSET(0x22CB6C0)

	inline static constexpr unsigned int UIStatDetailSlot_TypeDefinitionIndex = 4821;

	class UIStatDetailSlot : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* StatName; // 0x18
		::Il2CppArray<::System::Object*>* StatValue; // 0x20
		::Il2CppArray<::System::Object*>* StatCorrectionValue; // 0x28
		::Il2CppArray<::System::Object*>* TagDeco; // 0x30
		::Il2CppArray<::System::Object*>* potentialLevelTags; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATDETAILSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_g__SetCellEmpty|5_0(<>c__DisplayClass5_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATDETAILSLOT__SETDATA_G__SETCELLEMPTY|5_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(CharacterDetailData* arg, ::MX::Data::Excel::CharacterStatsDetailExcel* arg2)
		{
			((::System::Void(*)(CharacterDetailData*, ::MX::Data::Excel::CharacterStatsDetailExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATDETAILSLOT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetCharacterEnhance_MaxCostStatType(::System::Int32 arg, ::FlatData::StatType* arg2, CharacterDetailData* arg3, ::MX::Data::Excel::CharacterStatExcel* arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::System::Boolean(*)(::System::Int32, ::FlatData::StatType*, CharacterDetailData*, ::MX::Data::Excel::CharacterStatExcel*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTATDETAILSLOT_SETCHARACTERENHANCE_MAXCOSTSTATTYPE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};

