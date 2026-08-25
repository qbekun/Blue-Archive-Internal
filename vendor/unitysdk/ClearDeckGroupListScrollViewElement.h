#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
class ClearDeckGroupDeckInfo;

#define CLEARDECKGROUPLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FDD90)
#define CLEARDECKGROUPLISTSCROLLVIEWELEMENT_ONOPENPRESETBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26FDF10)
#define CLEARDECKGROUPLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26FDFB0)
#define CLEARDECKGROUPLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FE150)

	inline static constexpr unsigned int ClearDeckGroupListScrollViewElement_TypeDefinitionIndex = 7061;

	class ClearDeckGroupListScrollViewElement : public ::System::Xml::Ucs4Decoder4321
	{
	public:
		UILabel* tryNumberLabel; // 0x28
		UILabel* finalLabel; // 0x30
		::Il2CppArray<::System::Object*>* mainCards; // 0x38
		::Il2CppArray<::System::Object*>* supporterCards; // 0x40
		MXButton* openPresetButton; // 0x48
		::System::Boolean _isFinal; // 0x50
		::MX::GameLogic::DBModel::RaidTeamSettingDB* _raidTeamSettingDB; // 0x58

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpenPresetButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPLISTSCROLLVIEWELEMENT_ONOPENPRESETBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetData(ClearDeckGroupDeckInfo* arg)
		{
			((::System::Void(*)(ClearDeckGroupDeckInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

