#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Character; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Card; }
class CCGCardInfoType;
namespace UnityEngine { class Coroutine; }

#define UICARDGAME_MYDECKCARDINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA4DE40)
#define UICARDGAME_MYDECKCARDINFO_INITIALIZEFORCHARACTER_OFFSET UNITYSDK_OFFSET(0xA4DCD0)
#define UICARDGAME_MYDECKCARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4DEE0)
#define UICARDGAME_MYDECKCARDINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA4DED0)
#define UICARDGAME_MYDECKCARDINFO_INITIALIZEFORCARD_OFFSET UNITYSDK_OFFSET(0xA4E300)
#define UICARDGAME_MYDECKCARDINFO_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xA4DF60)
#define UICARDGAME_MYDECKCARDINFO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA4E3A0)
#define UICARDGAME_MYDECKCARDINFO_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0xA4E430)
#define UICARDGAME_MYDECKCARDINFO_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0xA4E4A0)
#define UICARDGAME_MYDECKCARDINFO___N__0_OFFSET UNITYSDK_OFFSET(0xA4E510)
#define UICARDGAME_MYDECKCARDINFO_START_OFFSET UNITYSDK_OFFSET(0xA4E520)
#define UICARDGAME_MYDECKCARDINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA4E810)

	inline static constexpr unsigned int UICardGame_MyDeckCardInfo_TypeDefinitionIndex = 460;

	class UICardGame_MyDeckCardInfo : public Il2CppObject
	{
	public:
		::System::String* openAnimationClipName; // 0xD8
		::System::String* refreshAnimationClipName; // 0xE0
		::UnityEngine::Animation* anim; // 0xE8
		MXButton* prevBtn; // 0xF0
		MXButton* nextBtn; // 0xF8
		MXButton* closeBtn; // 0x100
		::MX::MinigameCCG::UI::UICardGame_CardGroup* card; // 0x108
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Character* tooltipCharacter; // 0x110
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Card* tooltipCard; // 0x118
		CCGCardInfoType* elementType; // 0x120
		Il2CppObject* elementList; // 0x128
		::System::Int32 index; // 0x130
		::UnityEngine::Coroutine* coroutine; // 0x138

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void InitializeForCharacter(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_INITIALIZEFORCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitializeForCard(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_INITIALIZEFORCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_REFRESHINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO___N__0_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_START_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_MYDECKCARDINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

