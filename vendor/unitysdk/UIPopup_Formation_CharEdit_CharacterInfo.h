#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterInfo;
class MXButton;
class FormationModel;
class CharacterObject;

#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x24E1C20)
#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_INIT_OFFSET UNITYSDK_OFFSET(0x24E1E10)
#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x24E1E20)
#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x24E1FF0)
#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x24E2100)
#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_ONCLICKCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x24E2150)
#define UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E23C0)

	inline static constexpr unsigned int UIPopup_Formation_CharEdit_CharacterInfo_TypeDefinitionIndex = 6009;

	class UIPopup_Formation_CharEdit_CharacterInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CharacterInfoEmpty; // 0x18
		UICharacterInfo* CharacterInfo; // 0x20
		MXButton* CharacterDetailButton; // 0x28
		::Il2CppArray<::System::Object*>* StageTopographyOn; // 0x30
		::Il2CppArray<::System::Object*>* StageTopographyOff; // 0x38
		FormationModel* formationModel; // 0x40
		Il2CppObject* onClickedCharacterDetail; // 0x48
		::System::Int64 characterId; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickCharacterDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_ONCLICKCHARACTERDETAIL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHARACTERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

