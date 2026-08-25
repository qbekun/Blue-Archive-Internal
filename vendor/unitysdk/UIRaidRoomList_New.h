#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace UnityEngine { class GameObject; }
class UIRaidBossInfo;
class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
class UIPopup_RaidEnter;

#define UIRAIDROOMLIST_NEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x27AA180)
#define UIRAIDROOMLIST_NEW_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x27AA3A0)
#define UIRAIDROOMLIST_NEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AA3B0)
#define UIRAIDROOMLIST_NEW_RAIDENTER_OFFSET UNITYSDK_OFFSET(0x27AA3F0)
#define UIRAIDROOMLIST_NEW_PREPAREANIMATION_OFFSET UNITYSDK_OFFSET(0x27AA4D0)
#define UIRAIDROOMLIST_NEW_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x27AA590)
#define UIRAIDROOMLIST_NEW_PLAYUNLOCK_OFFSET UNITYSDK_OFFSET(0x27AA5A0)
#define UIRAIDROOMLIST_NEW_WAIT_OFFSET UNITYSDK_OFFSET(0x27AA630)
#define UIRAIDROOMLIST_NEW_PREPARELOCK_OFFSET UNITYSDK_OFFSET(0x27AA6C0)
#define UIRAIDROOMLIST_NEW__RAIDENTER_B__18_0_OFFSET UNITYSDK_OFFSET(0x27AA840)
#define UIRAIDROOMLIST_NEW_ONCLICKREENTER_OFFSET UNITYSDK_OFFSET(0x27AA870)
#define UIRAIDROOMLIST_NEW_SETDATA_OFFSET UNITYSDK_OFFSET(0x27AA880)

	inline static constexpr unsigned int UIRaidRoomList_New_TypeDefinitionIndex = 7498;

	class UIRaidRoomList_New : public ::System::Xml::XPath::XPathItem
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* raidDB; // 0x28
		::System::Int64 stageId; // 0x30
		::UnityEngine::GameObject* PracticeObject; // 0x38
		UIRaidBossInfo* RaidBossInfo; // 0x40
		MXButton* EnterButton; // 0x48
		MXButton* ReEnterButton; // 0x50
		::UnityEngine::Animation* UnlockAnimation; // 0x58
		::UnityEngine::Coroutine* waitCoroutine; // 0x60

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RaidEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_RAIDENTER_OFFSET))(nullptr);
		}

		::System::Void PrepareAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_PREPAREANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayUnlock()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_PLAYUNLOCK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Wait()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_WAIT_OFFSET))(nullptr);
		}

		::System::Void PrepareLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_PREPARELOCK_OFFSET))(nullptr);
		}

		::System::Void _RaidEnter_b__18_0(UIPopup_RaidEnter* arg)
		{
			((::System::Void(*)(UIPopup_RaidEnter*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW__RAIDENTER_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_ONCLICKREENTER_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMLIST_NEW_SETDATA_OFFSET))(arg, nullptr);
		}

	};

