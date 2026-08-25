#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }
class UITutorialCharacterChat;
class PortraitSpineCharacter;

#define UITUTORIALCHARACTERDIALOG__ONENABLE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB811C0)
#define UITUTORIALCHARACTERDIALOG_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB81310)
#define UITUTORIALCHARACTERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0xB814E0)
#define UITUTORIALCHARACTERDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB81530)

	inline static constexpr unsigned int UITutorialCharacterDialog_TypeDefinitionIndex = 8518;

	class UITutorialCharacterDialog : public Il2CppObject
	{
	public:
		UIWidget* spineRenderOrder; // 0x18
		::UnityEngine::GameObject* spineParent; // 0x20
		::System::String* characterPath; // 0x28
		::System::Int64 chatId; // 0x30
		UITutorialCharacterChat* tutorialCharacterChat; // 0x38

		::System::Void _OnEnable_b__5_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERDIALOG__ONENABLE_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERDIALOG_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALCHARACTERDIALOG_ONENABLE_OFFSET))(nullptr);
		}

	};

