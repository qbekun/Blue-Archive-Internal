#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
class MXButton;
namespace UnityEngine { class GameObject; }
class UISprite;

#define UIEVENTMISSIONTABELEMENT_ADD_TABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24B8680)
#define UIEVENTMISSIONTABELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B8A60)
#define UIEVENTMISSIONTABELEMENT_ONCLICKTABBUTTON_OFFSET UNITYSDK_OFFSET(0x24B8A70)
#define UIEVENTMISSIONTABELEMENT_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x24B8830)
#define UIEVENTMISSIONTABELEMENT_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0x24B8A90)
#define UIEVENTMISSIONTABELEMENT_REFRESHTABREDDOT_OFFSET UNITYSDK_OFFSET(0x24B8320)
#define UIEVENTMISSIONTABELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B8AA0)
#define UIEVENTMISSIONTABELEMENT_REMOVE_TABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24B8BC0)

	inline static constexpr unsigned int UIEventMissionTabElement_TypeDefinitionIndex = 5870;

	class UIEventMissionTabElement : public Il2CppObject
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
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_ADD_TABBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickTabButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_ONCLICKTABBUTTON_OFFSET))(nullptr);
		}

		::System::Void SwitchTab(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_SWITCHTAB_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

		::System::Void RefreshTabRedDot(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_REFRESHTABREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void remove_TabButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTABELEMENT_REMOVE_TABBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

	};

