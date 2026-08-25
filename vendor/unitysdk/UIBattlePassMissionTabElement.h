#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
class MXButton;
namespace UnityEngine { class GameObject; }
class UISprite;

#define UIBATTLEPASSMISSIONTABELEMENT_ADD_TABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2249520)
#define UIBATTLEPASSMISSIONTABELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2249730)
#define UIBATTLEPASSMISSIONTABELEMENT_REMOVE_TABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2249740)
#define UIBATTLEPASSMISSIONTABELEMENT_REFRESHTABREDDOT_OFFSET UNITYSDK_OFFSET(0x2249170)
#define UIBATTLEPASSMISSIONTABELEMENT_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x22492A0)
#define UIBATTLEPASSMISSIONTABELEMENT_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x22497E0)
#define UIBATTLEPASSMISSIONTABELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x22497F0)
#define UIBATTLEPASSMISSIONTABELEMENT_ONCLICKTABBUTTON_OFFSET UNITYSDK_OFFSET(0x2249910)

	inline static constexpr unsigned int UIBattlePassMissionTabElement_TypeDefinitionIndex = 4509;

	class UIBattlePassMissionTabElement : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* missionCategory; // 0x18
		MXButton* tabButton; // 0x20
		::UnityEngine::GameObject* tabOnRoot; // 0x28
		::UnityEngine::GameObject* tabOffRoot; // 0x30
		UISprite* redDotSprite; // 0x38
		Il2CppObject* TabButtonClicked; // 0x40

		::System::Void add_TabButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_ADD_TABBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void remove_TabButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_REMOVE_TABBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTabRedDot(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_REFRESHTABREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchTab(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_SWITCHTAB_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickTabButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTABELEMENT_ONCLICKTABBUTTON_OFFSET))(nullptr);
		}

	};

