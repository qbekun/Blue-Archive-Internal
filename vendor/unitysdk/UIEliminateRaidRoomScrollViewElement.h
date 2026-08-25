#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace UnityEngine { class GameObject; }
class UIRaidBossInfo;
class MXButton;
namespace UnityEngine { class Animation; }
class UIPopup_RaidEnter;

#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_SET_NEEDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x23E48F0)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_PLAYUNLOCK_OFFSET UNITYSDK_OFFSET(0x23E4900)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x23E4990)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_ONCLICKREENTER_OFFSET UNITYSDK_OFFSET(0x23E4A80)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_PREPARELOCK_OFFSET UNITYSDK_OFFSET(0x23E4A90)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x23E4C10)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_GET_NEEDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x23E4C20)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_CHECKUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x23E4360)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_PREPAREANIMATION_OFFSET UNITYSDK_OFFSET(0x23E4C30)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT__RAIDENTER_B__22_0_OFFSET UNITYSDK_OFFSET(0x23E4CF0)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E4D20)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_RAIDENTER_OFFSET UNITYSDK_OFFSET(0x23E49A0)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x23E4D60)
#define UIELIMINATERAIDROOMSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x23E5040)

	inline static constexpr unsigned int UIEliminateRaidRoomScrollViewElement_TypeDefinitionIndex = 5385;

	class UIEliminateRaidRoomScrollViewElement : public ::System::Xml::XPath::XPathItem
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* raidDB; // 0x28
		::System::Int64 stageId; // 0x30
		::UnityEngine::GameObject* PracticeObject; // 0x38
		UIRaidBossInfo* RaidBossInfo; // 0x40
		MXButton* EnterButton; // 0x48
		MXButton* ReEnterButton; // 0x50
		::UnityEngine::Animation* UnlockAnimation; // 0x58
		::System::Boolean _NeedUnlockAni_k__BackingField; // 0x60
		::UnityEngine::GameObject* ClearMark; // 0x68

		::System::Void set_NeedUnlockAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_SET_NEEDUNLOCKANI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayUnlock()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_PLAYUNLOCK_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void OnClickReEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_ONCLICKREENTER_OFFSET))(nullptr);
		}

		::System::Void PrepareLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_PREPARELOCK_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedUnlockAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_GET_NEEDUNLOCKANI_OFFSET))(nullptr);
		}

		::System::Void CheckUnlockAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_CHECKUNLOCKANI_OFFSET))(nullptr);
		}

		::System::Void PrepareAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_PREPAREANIMATION_OFFSET))(nullptr);
		}

		::System::Void _RaidEnter_b__22_0(UIPopup_RaidEnter* arg)
		{
			((::System::Void(*)(UIPopup_RaidEnter*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT__RAIDENTER_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RaidEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_RAIDENTER_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

