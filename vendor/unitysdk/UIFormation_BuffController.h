#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class GroupBuffBonusUI;
class UIEchelonInfo;
class FormationModel;

#define UIFORMATION_BUFFCONTROLLER_OPENFAVORRANKBUFFPOPUP_OFFSET UNITYSDK_OFFSET(0x25472E0)
#define UIFORMATION_BUFFCONTROLLER_ONCLICKGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x25479D0)
#define UIFORMATION_BUFFCONTROLLER_SET_USEFAVORBUFFSEASON_OFFSET UNITYSDK_OFFSET(0x2547C50)
#define UIFORMATION_BUFFCONTROLLER_SETECHELONINFO_OFFSET UNITYSDK_OFFSET(0x2547C60)
#define UIFORMATION_BUFFCONTROLLER_ONCLICKEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x2547C90)
#define UIFORMATION_BUFFCONTROLLER_REFRESHFAVORBUFF_OFFSET UNITYSDK_OFFSET(0x2547E10)
#define UIFORMATION_BUFFCONTROLLER_REFRESHGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x25480B0)
#define UIFORMATION_BUFFCONTROLLER_REFRESHEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x2548AB0)
#define UIFORMATION_BUFFCONTROLLER_ONCLICKFAVORBUFF_OFFSET UNITYSDK_OFFSET(0x254A040)
#define UIFORMATION_BUFFCONTROLLER_ONCLICKCONQUESTBUFF_OFFSET UNITYSDK_OFFSET(0x254A0B0)
#define UIFORMATION_BUFFCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x254A2F0)
#define UIFORMATION_BUFFCONTROLLER_GET_USEFAVORBUFFSEASON_OFFSET UNITYSDK_OFFSET(0x254A770)
#define UIFORMATION_BUFFCONTROLLER_REFRESHCONQUESTBUFF_OFFSET UNITYSDK_OFFSET(0x254A780)
#define UIFORMATION_BUFFCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x254A9D0)
#define UIFORMATION_BUFFCONTROLLER_ONECHELONCHANGED_OFFSET UNITYSDK_OFFSET(0x254A9E0)
#define UIFORMATION_BUFFCONTROLLER_ONFORMATIONCLOSED_OFFSET UNITYSDK_OFFSET(0x254AB70)

	inline static constexpr unsigned int UIFormation_BuffController_TypeDefinitionIndex = 6081;

	class UIFormation_BuffController : public Il2CppObject
	{
	public:
		MXButton* EventBuffButton; // 0x18
		::UnityEngine::GameObject* EventBuffOnRoot; // 0x20
		::UnityEngine::GameObject* EventBuffOffRoot; // 0x28
		::Il2CppArray<::System::Object*>* EventBuffSlots; // 0x30
		MXButton* GroupBuffButton; // 0x38
		::UnityEngine::GameObject* GroupBuffRoot; // 0x40
		::UnityEngine::GameObject* GroupBuffOn; // 0x48
		::UnityEngine::GameObject* GroupBuffOff; // 0x50
		::Il2CppArray<::System::Object*>* GroupBuffSlots; // 0x58
		MXButton* ConquestBuffButton; // 0x60
		GroupBuffBonusUI* GroupBuffBonusUI; // 0x68
		MXButton* FavorBuffButton; // 0x70
		::UnityEngine::GameObject* FavorBuffOn; // 0x78
		::UnityEngine::GameObject* FavorBuffOff; // 0x80
		::System::Boolean _UseFavorBuffSeason_k__BackingField; // 0x88
		UIEchelonInfo* EchelonInfo; // 0x90
		::System::Int32 curEchelonIndex; // 0x98
		FormationModel* formationModel; // 0xA0

		::System::Void OpenFavorRankBuffPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_OPENFAVORRANKBUFFPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_ONCLICKGROUPBUFF_OFFSET))(nullptr);
		}

		::System::Void set_UseFavorBuffSeason(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_SET_USEFAVORBUFFSEASON_OFFSET))(arg, nullptr);
		}

		::System::Void SetEchelonInfo(UIEchelonInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIEchelonInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_SETECHELONINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickEventBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_ONCLICKEVENTBUFF_OFFSET))(nullptr);
		}

		::System::Void RefreshFavorBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_REFRESHFAVORBUFF_OFFSET))(nullptr);
		}

		::System::Void RefreshGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_REFRESHGROUPBUFF_OFFSET))(nullptr);
		}

		::System::Void RefreshEventBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_REFRESHEVENTBUFF_OFFSET))(nullptr);
		}

		::System::Void OnClickFavorBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_ONCLICKFAVORBUFF_OFFSET))(nullptr);
		}

		::System::Void OnClickConquestBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_ONCLICKCONQUESTBUFF_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseFavorBuffSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_GET_USEFAVORBUFFSEASON_OFFSET))(nullptr);
		}

		::System::Void RefreshConquestBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_REFRESHCONQUESTBUFF_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEchelonChanged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_ONECHELONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnFormationClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BUFFCONTROLLER_ONFORMATIONCLOSED_OFFSET))(nullptr);
		}

	};

