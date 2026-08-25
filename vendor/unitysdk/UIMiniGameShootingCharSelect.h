#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
class UITexture;
namespace UnityEngine { class Texture; }
namespace MX::MinigameShooting { class MGSGameMode; }
namespace UnityEngine { class Vector3; }
class SwipeDir;

#define UIMINIGAMESHOOTINGCHARSELECT_REFRESHHIDDEN_OFFSET UNITYSDK_OFFSET(0x2061430)
#define UIMINIGAMESHOOTINGCHARSELECT_REVERSESELECT_OFFSET UNITYSDK_OFFSET(0x20614F0)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART4_OFFSET UNITYSDK_OFFSET(0x2061900)
#define UIMINIGAMESHOOTINGCHARSELECT_PLAYBTNANI_OFFSET UNITYSDK_OFFSET(0x2061670)
#define UIMINIGAMESHOOTINGCHARSELECT_CONTROLLERCOMMANDUPDATE_OFFSET UNITYSDK_OFFSET(0x2061B40)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0x2061910)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR2_OFFSET UNITYSDK_OFFSET(0x2061E30)
#define UIMINIGAMESHOOTINGCHARSELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x20620B0)
#define UIMINIGAMESHOOTINGCHARSELECT_OPENHIDDEN_OFFSET UNITYSDK_OFFSET(0x2061D70)
#define UIMINIGAMESHOOTINGCHARSELECT_PLAYSELECT_OFFSET UNITYSDK_OFFSET(0x2062810)
#define UIMINIGAMESHOOTINGCHARSELECT_GETCHARANINAME_OFFSET UNITYSDK_OFFSET(0x20627C0)
#define UIMINIGAMESHOOTINGCHARSELECT___N__0_OFFSET UNITYSDK_OFFSET(0x2062860)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR3_OFFSET UNITYSDK_OFFSET(0x2062870)
#define UIMINIGAMESHOOTINGCHARSELECT_PLAYPARENTANI_OFFSET UNITYSDK_OFFSET(0x2061540)
#define UIMINIGAMESHOOTINGCHARSELECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2062880)
#define UIMINIGAMESHOOTINGCHARSELECT_GETBTNANINAME_OFFSET UNITYSDK_OFFSET(0x2061A90)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR4_OFFSET UNITYSDK_OFFSET(0x2062EE0)
#define UIMINIGAMESHOOTINGCHARSELECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x2061E40)
#define UIMINIGAMESHOOTINGCHARSELECT_PCCOMMANDUPDATE_OFFSET UNITYSDK_OFFSET(0x2062C20)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART1_OFFSET UNITYSDK_OFFSET(0x2062F00)
#define UIMINIGAMESHOOTINGCHARSELECT_PLAYCHARANI_OFFSET UNITYSDK_OFFSET(0x2061820)
#define UIMINIGAMESHOOTINGCHARSELECT_SWIPEUPDATE_OFFSET UNITYSDK_OFFSET(0x2062930)
#define UIMINIGAMESHOOTINGCHARSELECT_UPDATEDPAD_OFFSET UNITYSDK_OFFSET(0x2062D60)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART3_OFFSET UNITYSDK_OFFSET(0x2062FA0)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR1_OFFSET UNITYSDK_OFFSET(0x2062FB0)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART2_OFFSET UNITYSDK_OFFSET(0x2062FC0)
#define UIMINIGAMESHOOTINGCHARSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2062FD0)
#define UIMINIGAMESHOOTINGCHARSELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2063260)
#define UIMINIGAMESHOOTINGCHARSELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x20632F0)
#define UIMINIGAMESHOOTINGCHARSELECT_SWIPECOMMAND_OFFSET UNITYSDK_OFFSET(0x2062F10)
#define UIMINIGAMESHOOTINGCHARSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2063300)
#define UIMINIGAMESHOOTINGCHARSELECT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2063380)

	inline static constexpr unsigned int UIMiniGameShootingCharSelect_TypeDefinitionIndex = 3405;

	class UIMiniGameShootingCharSelect : public Il2CppObject
	{
	public:
		::System::Int32 CharCount; // 0x0
		::System::Int32 hiddenCharacterIndex; // 0x0
		::Il2CppArray<::System::Object*>* CharBtn; // 0xD8
		::Il2CppArray<::System::Object*>* StartBtn; // 0xE0
		::UnityEngine::Animation* ParentAni; // 0xE8
		::Il2CppArray<::System::Object*>* CharAni; // 0xF0
		::Il2CppArray<::System::Object*>* BtnAni; // 0xF8
		::UnityEngine::GameObject* HiddenOff; // 0x100
		::UnityEngine::GameObject* HiddenOn; // 0x108
		UITexture* NameTexture; // 0x110
		::UnityEngine::Texture* NormalNameTexture; // 0x118
		::UnityEngine::Texture* HiddenNameTexture; // 0x120
		::UnityEngine::GameObject* NormalNameEffect; // 0x128
		::UnityEngine::GameObject* HiddenNameEffect; // 0x130
		::System::Int64 contentId; // 0x138
		::MX::MinigameShooting::MGSGameMode* gameMode; // 0x140
		::System::Int32 curSelectIndex; // 0x144
		::System::Boolean isHiddenCommandOn; // 0x148
		::Il2CppArray<::System::Object*>* hiddenCommand; // 0x150
		::System::Int32 hiddenCommandIndex; // 0x158
		::System::Single hiddenCommandTimer; // 0x15C
		::System::Single hiddenCommandTimeLimit; // 0x0
		::System::Int32 hiddenCommandIndexPC; // 0x160
		::UnityEngine::Vector3* touchBeganPos; // 0x164
		::UnityEngine::Vector3* touchEndedPos; // 0x170
		::UnityEngine::Vector3* touchDif; // 0x17C
		::System::Boolean touchUp; // 0x188
		::System::Boolean touchDown; // 0x189
		::System::Boolean closeFromGameStart; // 0x18A
		::System::Int32 hiddenCommandIndex_Controller; // 0x18C

		::System::Void RefreshHidden()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_REFRESHHIDDEN_OFFSET))(nullptr);
		}

		::System::Void ReverseSelect(::System::Int32 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_REVERSESELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickStart4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART4_OFFSET))(nullptr);
		}

		::System::Void PlayBtnAni(::System::Int32 arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_PLAYBTNANI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ControllerCommandUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_CONTROLLERCOMMANDUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClickStart(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChar2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR2_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OpenHidden()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_OPENHIDDEN_OFFSET))(nullptr);
		}

		::System::Void PlaySelect(::System::Int32 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_PLAYSELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetCharAniName(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_GETCHARANINAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickChar3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR3_OFFSET))(nullptr);
		}

		::System::Void PlayParentAni(::System::Int32 arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_PLAYPARENTANI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_UPDATE_OFFSET))(nullptr);
		}

		::System::String* GetBtnAniName(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_GETBTNANINAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickChar4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR4_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void PCCommandUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_PCCOMMANDUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClickStart1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART1_OFFSET))(nullptr);
		}

		::System::Void PlayCharAni(::System::Int32 arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_PLAYCHARANI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SwipeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_SWIPEUPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateDpad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_UPDATEDPAD_OFFSET))(nullptr);
		}

		::System::Void OnClickStart3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART3_OFFSET))(nullptr);
		}

		::System::Void OnClickChar1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKCHAR1_OFFSET))(nullptr);
		}

		::System::Void OnClickStart2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLICKSTART2_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::MX::MinigameShooting::MGSGameMode* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::MinigameShooting::MGSGameMode*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SwipeCommand(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_SWIPECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGCHARSELECT_ONCLOSED_OFFSET))(nullptr);
		}

	};

