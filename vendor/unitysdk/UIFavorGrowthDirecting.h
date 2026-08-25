#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UILabel;
class MXButton;
namespace UnityEngine { class Transform; }
class UIWidget;
namespace UnityEngine { class GameObject; }
class PortraitSpineCharacter;
class CharacterObject;
namespace MX::Audio { class VoicePlayInfo; }
class SpineCharacter;

#define UIFAVORGROWTHDIRECTING_GET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x22E0820)
#define UIFAVORGROWTHDIRECTING_SET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x22E0830)
#define UIFAVORGROWTHDIRECTING_GET_SPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x22E0850)
#define UIFAVORGROWTHDIRECTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x22E0860)
#define UIFAVORGROWTHDIRECTING_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22E09E0)
#define UIFAVORGROWTHDIRECTING_SETDATA_OFFSET UNITYSDK_OFFSET(0x22E0CA0)
#define UIFAVORGROWTHDIRECTING_SETDATA_OFFSET UNITYSDK_OFFSET(0x22E13B0)
#define UIFAVORGROWTHDIRECTING_DEQUEUECHARACTER_OFFSET UNITYSDK_OFFSET(0x22E14A0)
#define UIFAVORGROWTHDIRECTING_SETUI_OFFSET UNITYSDK_OFFSET(0x22E0D30)
#define UIFAVORGROWTHDIRECTING_CO_PLAYDIRECTINGFAVORRANKUP_OFFSET UNITYSDK_OFFSET(0x22E0C30)
#define UIFAVORGROWTHDIRECTING_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x22E1570)
#define UIFAVORGROWTHDIRECTING_CHECKFURNITURECOMBATSTYLE_OFFSET UNITYSDK_OFFSET(0x22E1500)
#define UIFAVORGROWTHDIRECTING_ONCLICKCLOSEDIRECTINGBUTTON_OFFSET UNITYSDK_OFFSET(0x22E1C00)
#define UIFAVORGROWTHDIRECTING_SENDNEXONEVENTFORCHARACTERFAVORMAX_OFFSET UNITYSDK_OFFSET(0x22E18D0)
#define UIFAVORGROWTHDIRECTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E1F30)

	inline static constexpr unsigned int UIFavorGrowthDirecting_TypeDefinitionIndex = 4862;

	class UIFavorGrowthDirecting : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0xD8
		UILabel* FavorRank; // 0xE0
		UILabel* UpDateStatInfo; // 0xE8
		MXButton* CloseDirecting; // 0xF0
		::UnityEngine::Transform* PortraitPos; // 0xF8
		UIWidget* PortraitOffsetWidget; // 0x100
		::UnityEngine::GameObject* statInfoParent; // 0x108
		PortraitSpineCharacter* portraitSpineCharacter; // 0x110
		CharacterObject* character; // 0x118
		Il2CppObject* favorChangedCharacters; // 0x120
		::System::Action* onFinished; // 0x128
		::MX::Audio::VoicePlayInfo* _voicePlayInfo_k__BackingField; // 0x130
		::System::Int32 portraitGeneration; // 0x138
		Il2CppObject* PlayedCharacters; // 0x140
		::System::Boolean _useFurnitureCombatStyle; // 0x148

		::MX::Audio::VoicePlayInfo* get_voicePlayInfo()
		{
			return ((::MX::Audio::VoicePlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_GET_VOICEPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void set_voicePlayInfo(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_SET_VOICEPLAYINFO_OFFSET))(arg, nullptr);
		}

		SpineCharacter* get_SpineCharacter()
		{
			return ((SpineCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_GET_SPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DequeueCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_DEQUEUECHARACTER_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayDirectingFavorRankUp()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_CO_PLAYDIRECTINGFAVORRANKUP_OFFSET))(nullptr);
		}

		::System::Void SetPortrait()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_SETPORTRAIT_OFFSET))(nullptr);
		}

		::System::Boolean CheckFurnitureCombatStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_CHECKFURNITURECOMBATSTYLE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseDirectingButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_ONCLICKCLOSEDIRECTINGBUTTON_OFFSET))(nullptr);
		}

		::System::Void SendNexonEventForCharacterFavorMax(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_SENDNEXONEVENTFORCHARACTERFAVORMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORGROWTHDIRECTING_.CTOR_OFFSET))(nullptr);
		}

	};

