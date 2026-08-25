#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UIGearCard;
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
class CharacterObject;
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define UIUSERINFO_ASSISTCHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x25800F0)
#define UIUSERINFO_ASSISTCHARACTER_INITTOOLTIPBUTTONS_OFFSET UNITYSDK_OFFSET(0x2580390)
#define UIUSERINFO_ASSISTCHARACTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x25804C0)
#define UIUSERINFO_ASSISTCHARACTER_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x2581650)
#define UIUSERINFO_ASSISTCHARACTER_SETACTIVEEMPTYEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x25812C0)
#define UIUSERINFO_ASSISTCHARACTER_SETEMPTYCHARACTERDISPLAY_OFFSET UNITYSDK_OFFSET(0x25813A0)
#define UIUSERINFO_ASSISTCHARACTER_SETSKILLS_OFFSET UNITYSDK_OFFSET(0x2581030)
#define UIUSERINFO_ASSISTCHARACTER_SETSKILLS_OFFSET UNITYSDK_OFFSET(0x2581E90)
#define UIUSERINFO_ASSISTCHARACTER_SETSKILLINFO_OFFSET UNITYSDK_OFFSET(0x2582140)
#define UIUSERINFO_ASSISTCHARACTER_SETSKILLINFO_OFFSET UNITYSDK_OFFSET(0x2582440)
#define UIUSERINFO_ASSISTCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25828D0)

	inline static constexpr unsigned int UIUserInfo_AssistCharacter_TypeDefinitionIndex = 6213;

	class UIUserInfo_AssistCharacter : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		Il2CppObject* skillInfoItems; // 0x20
		Il2CppObject* topographyAdaptations; // 0x28
		::Il2CppArray<::System::Object*>* equipCardSlots; // 0x30
		::Il2CppArray<::System::Object*>* emptyEquipmentSlots; // 0x38
		UIGearCard* gearCard; // 0x40
		Il2CppObject* tooltipButtons; // 0x48
		::System::Int32 skillInfoItemIndex; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitTooltipButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_INITTOOLTIPBUTTONS_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetMyData(::MX::GameLogic::DBModel::ClanAssistSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETMYDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveEmptyEquipments(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETACTIVEEMPTYEQUIPMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmptyCharacterDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETEMPTYCHARACTERDISPLAY_OFFSET))(nullptr);
		}

		::System::Void SetSkills(::MX::Data::Excel::CharacterSkillListExcel* arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterSkillListExcel*, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETSKILLS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSkills(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETSKILLS_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetSkillInfo(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int32 arg2, ::System::String* str, ::System::Int32 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::System::String*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETSKILLINFO_OFFSET))(arg, arg2, str, arg3, arg4, nullptr);
		}

		::System::Boolean SetSkillInfo(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int32 arg2, ::System::String* str, ::System::Int32 arg3, CharacterObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::System::String*, ::System::Int32, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_SETSKILLINFO_OFFSET))(arg, arg2, str, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFO_ASSISTCHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};

