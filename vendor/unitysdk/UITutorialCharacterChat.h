#pragma once
#include "unitysdk.h"

class DialogBox;
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Coroutine; }
class PortraitSpineCharacter;
namespace MX::Data::Excel { class TutorialCharacterDialogExcel; }

#define UITUTORIALCHARACTERCHAT_UPDATE_OFFSET UNITYSDK_OFFSET(0xB80610)
#define UITUTORIALCHARACTERCHAT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB806E0)
#define UITUTORIALCHARACTERCHAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB80780)
#define UITUTORIALCHARACTERCHAT_CODIALOG_OFFSET UNITYSDK_OFFSET(0xB80790)
#define UITUTORIALCHARACTERCHAT_DEACTIVEDIALOGBOX_OFFSET UNITYSDK_OFFSET(0xB80750)
#define UITUTORIALCHARACTERCHAT_INIT_OFFSET UNITYSDK_OFFSET(0xB80840)
#define UITUTORIALCHARACTERCHAT_GETCHATSTRING_OFFSET UNITYSDK_OFFSET(0xB80960)
#define UITUTORIALCHARACTERCHAT_NEXTCHAT_OFFSET UNITYSDK_OFFSET(0xB80A50)

	inline static constexpr unsigned int UITutorialCharacterChat_TypeDefinitionIndex = 8517;

	class UITutorialCharacterChat : public Il2CppObject
	{
	public:
		DialogBox* dialogBox; // 0x18
		::UnityEngine::AudioSource* audioSource; // 0x20
		::UnityEngine::Coroutine* coroutine; // 0x28
		PortraitSpineCharacter* spineCharacter; // 0x30
		Il2CppObject* chatList; // 0x38
		::System::Int32 currChatCount; // 0x40
		::System::Single clipLength; // 0x44

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDialog(::MX::Data::Excel::TutorialCharacterDialogExcel* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::TutorialCharacterDialogExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_CODIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void DeactiveDialogBox()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_DEACTIVEDIALOGBOX_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Int64 arg, PortraitSpineCharacter* arg2)
		{
			((::System::Void(*)(::System::Int64, PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetChatString(::MX::Data::Excel::TutorialCharacterDialogExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::TutorialCharacterDialogExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_GETCHATSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void NextChat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERCHAT_NEXTCHAT_OFFSET))(nullptr);
		}

	};

