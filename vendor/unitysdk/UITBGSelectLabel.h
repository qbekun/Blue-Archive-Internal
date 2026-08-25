#pragma once
#include "unitysdk.h"

class MXToggle;
class UILabel;
class UITBGItemSlot;
namespace MX::TableBoard { class TBGRandomEncounterDB; }
namespace MX::TableBoard { class TBGFacilityEncounterDB; }
namespace MX::TableBoard { class TBGBattleEncounterDB; }
namespace MX::TableBoard { class TBGEncounterDB; }

#define UITBGSELECTLABEL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB5B3E0)
#define UITBGSELECTLABEL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB5C070)
#define UITBGSELECTLABEL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB5C4E0)
#define UITBGSELECTLABEL_SETLABEL_OFFSET UNITYSDK_OFFSET(0xB5BC10)
#define UITBGSELECTLABEL_ACTIVATESET_OFFSET UNITYSDK_OFFSET(0xB5BAF0)
#define UITBGSELECTLABEL_SETREWARD_OFFSET UNITYSDK_OFFSET(0xB5BCF0)
#define UITBGSELECTLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xB5C7C0)

	inline static constexpr unsigned int UITBGSelectLabel_TypeDefinitionIndex = 8409;

	class UITBGSelectLabel : public Il2CppObject
	{
	public:
		MXToggle* ToggleSelect; // 0x18
		Il2CppObject* SetNoDice; // 0x20
		Il2CppObject* SetWithDice; // 0x28
		::Il2CppArray<::System::Object*>* Labels; // 0x30
		UILabel* DiceInfo; // 0x38
		UITBGItemSlot* RewardItem; // 0x40

		::System::Void SetData(::MX::TableBoard::TBGRandomEncounterDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGRandomEncounterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::TableBoard::TBGFacilityEncounterDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGFacilityEncounterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::TableBoard::TBGBattleEncounterDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBattleEncounterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_SETLABEL_OFFSET))(str, nullptr);
		}

		::System::Void ActivateSet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_ACTIVATESET_OFFSET))(arg, nullptr);
		}

		::System::Void SetReward(::MX::TableBoard::TBGEncounterDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGEncounterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_SETREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTLABEL_.CTOR_OFFSET))(nullptr);
		}

	};

