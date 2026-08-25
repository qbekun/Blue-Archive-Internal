#pragma once
#include "unitysdk.h"

class MXButton;
class UIWidget;
namespace UnityEngine { class Transform; }
class SpineChatDialogContainerBattlePass;
class BattlePassMissionRewardResponseMessage;
class BattlePassTask;
namespace MX::Data { class BattlePassSeasonInfo; }
namespace FlatData { class DialogCategory; }

#define UIBATTLEPASSMISSIONSPINEHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x22487F0)
#define UIBATTLEPASSMISSIONSPINEHANDLER_SETUPCHARACTERSPINE_OFFSET UNITYSDK_OFFSET(0x2246420)
#define UIBATTLEPASSMISSIONSPINEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2248970)
#define UIBATTLEPASSMISSIONSPINEHANDLER_HANDLEBATTLEPASSMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2248980)
#define UIBATTLEPASSMISSIONSPINEHANDLER_HANDLECOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0x2248990)
#define UIBATTLEPASSMISSIONSPINEHANDLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x2246940)
#define UIBATTLEPASSMISSIONSPINEHANDLER__SETUPCHARACTERSPINE_G__ONSPINELOADED|13_0_OFFSET UNITYSDK_OFFSET(0x2248A50)
#define UIBATTLEPASSMISSIONSPINEHANDLER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x2248A10)
#define UIBATTLEPASSMISSIONSPINEHANDLER_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x2248B70)
#define UIBATTLEPASSMISSIONSPINEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2248BC0)
#define UIBATTLEPASSMISSIONSPINEHANDLER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x2248920)
#define UIBATTLEPASSMISSIONSPINEHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2248CC0)
#define UIBATTLEPASSMISSIONSPINEHANDLER_GET_SPINECHATDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x2248910)

	inline static constexpr unsigned int UIBattlePassMissionSpineHandler_TypeDefinitionIndex = 4505;

	class UIBattlePassMissionSpineHandler : public Il2CppObject
	{
	public:
		MXButton* skipRewardDialogueButton; // 0x18
		UIWidget* SpineRenderTarget; // 0x20
		::UnityEngine::Transform* spineOffsetTransform; // 0x28
		SpineChatDialogContainerBattlePass* spineChatContainer; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetupCharacterSpine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_SETUPCHARACTERSPINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleBattlePassMissionRewardResponseMessage(BattlePassMissionRewardResponseMessage* arg)
		{
			return ((::System::Boolean(*)(BattlePassMissionRewardResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_HANDLEBATTLEPASSMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleCompleteMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_HANDLECOMPLETEMISSION_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void _SetupCharacterSpine_g__OnSpineLoaded|13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER__SETUPCHARACTERSPINE_G__ONSPINELOADED|13_0_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_ONENABLE_OFFSET))(nullptr);
		}

		::MX::Data::BattlePassSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::BattlePassSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_ONDISABLE_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_SpineChatDialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSPINEHANDLER_GET_SPINECHATDIALOGCATEGORY_OFFSET))(nullptr);
		}

	};

