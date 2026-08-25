#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Data::Excel { class CharacterExcel; }

#define UIREWARDCONFIRMBOTTOMCHARACTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B3460)
#define UIREWARDCONFIRMBOTTOMCHARACTERINFO_SETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x27B3470)
#define UIREWARDCONFIRMBOTTOMCHARACTERINFO_SHOWSPEECH_OFFSET UNITYSDK_OFFSET(0x27B0570)
#define UIREWARDCONFIRMBOTTOMCHARACTERINFO__SETCHARACTERINFO_G__SETVOICELABEL|17_0_OFFSET UNITYSDK_OFFSET(0x27B3A00)

	inline static constexpr unsigned int UIRewardConfirmBottomCharacterInfo_TypeDefinitionIndex = 7522;

	class UIRewardConfirmBottomCharacterInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* speech; // 0x18
		UILabel* dialogLabel; // 0x20
		::UnityEngine::GameObject* New; // 0x28
		::UnityEngine::GameObject* rRightInfo; // 0x30
		::UnityEngine::GameObject* srRightInfo; // 0x38
		::UnityEngine::GameObject* ssrRightInfo; // 0x40
		UILabel* rNameLabel; // 0x48
		UILabel* srNameLabel; // 0x50
		UILabel* ssrNameLabel; // 0x58
		UILabel* rVoiceNameLabel; // 0x60
		UILabel* srVoiceNameLabel; // 0x68
		UILabel* ssrVoiceNameLabel; // 0x70
		UILabel* rVoiceNameLabelGL; // 0x78
		UILabel* srVoiceNameLabelGL; // 0x80
		UILabel* ssrVoiceNameLabelGL; // 0x88
		::System::Boolean isKrVoiceName; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMCHARACTERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacterInfo(::MX::Data::Excel::CharacterExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMCHARACTERINFO_SETCHARACTERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowSpeech(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMCHARACTERINFO_SHOWSPEECH_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCharacterInfo_g__SetVoiceLabel|17_0(UILabel* arg, UILabel* arg2, <>c__DisplayClass17_0&* arg3)
		{
			((::System::Void(*)(UILabel*, UILabel*, <>c__DisplayClass17_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMBOTTOMCHARACTERINFO__SETCHARACTERINFO_G__SETVOICELABEL|17_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

