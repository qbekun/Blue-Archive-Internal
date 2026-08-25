#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UILabel;
class UITexture;
class UIAdmissionDisplay;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class InteractiveWorldRaidArcadeInfo; }
namespace FlatData { class EventContentType; }
class UIBase;
namespace MX::NetworkProtocol { class MiniGameCCGLobbyResponse; }
namespace MX::MinigameCCG::UI { class UICardGame_Lobby_WorldRaid_854; }

#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_0_OFFSET UNITYSDK_OFFSET(0x2630130)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_2_OFFSET UNITYSDK_OFFSET(0x26304D0)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x2630690)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONMINIGAMECCGBUTTON_OFFSET UNITYSDK_OFFSET(0x2630740)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2630C50)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_3_OFFSET UNITYSDK_OFFSET(0x2630DA0)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONMINIGAMESHOOTINGBUTTON_OFFSET UNITYSDK_OFFSET(0x2630F00)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_GET_CURRENTSELECTEDINFO_OFFSET UNITYSDK_OFFSET(0x2630F20)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2628A60)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONPLAYBUTTON_OFFSET UNITYSDK_OFFSET(0x2630F60)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x26311A0)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONMINIGAMEROADBUTTON_OFFSET UNITYSDK_OFFSET(0x2631220)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_PLAYBUTTONANIMATION_OFFSET UNITYSDK_OFFSET(0x2631240)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_CO_OPENINGANIMATION_OFFSET UNITYSDK_OFFSET(0x2630D30)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26313C0)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_1_OFFSET UNITYSDK_OFFSET(0x26313D0)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2631520)
#define UIPOPUP_INTERACTIVEWORLDRAIDARCADE_SELECTMINIGAME_OFFSET UNITYSDK_OFFSET(0x2630760)

	inline static constexpr unsigned int UIPopup_InteractiveWorldRaidArcade_TypeDefinitionIndex = 6569;

	class UIPopup_InteractiveWorldRaidArcade : public Il2CppObject
	{
	public:
		::System::String* ButtonSelectAniClipName; // 0x0
		::System::String* ScreenAniClipName; // 0x0
		::UnityEngine::Animation* MGShootingAni; // 0xD8
		MXButton* MGShootingBtn; // 0xE0
		UILabel* MGShootingLabel; // 0xE8
		UITexture* MGShootingSelection; // 0xF0
		::UnityEngine::Animation* MGRoadAni; // 0xF8
		MXButton* MGRoadBtn; // 0x100
		UILabel* MGRoadLabel; // 0x108
		UITexture* MGRoadSelection; // 0x110
		::UnityEngine::Animation* MGCCGAni; // 0x118
		MXButton* MGCCGBtn; // 0x120
		UILabel* MGCCGLabel; // 0x128
		UITexture* MGCCGSelection; // 0x130
		::UnityEngine::Animation* ScreenAni; // 0x138
		UITexture* ScreenShotTex; // 0x140
		UILabel* DescriptionLabel; // 0x148
		MXButton* PlayBtn; // 0x150
		MXButton* Close; // 0x158
		MXButton* CloseBg; // 0x160
		UIAdmissionDisplay* PlayBtnCostFree; // 0x168
		UIAdmissionDisplay* PlayBtnCostDiff; // 0x170
		UIAdmissionDisplay* PlayBtnCostSimple; // 0x178
		::System::Single openScreenAnimationOffset; // 0x180
		::MX::Data::EventContentSeasonInfo* _eventContentSeasonInfo; // 0x188
		::MX::Data::InteractiveWorldRaidArcadeInfo* _shootingInfo; // 0x190
		::MX::Data::InteractiveWorldRaidArcadeInfo* _roadInfo; // 0x198
		::MX::Data::InteractiveWorldRaidArcadeInfo* _ccgInfo; // 0x1A0
		::FlatData::EventContentType* _currentSelected; // 0x1A8
		::System::Boolean _isOpening; // 0x1AC

		::System::Void _OnPlayButton_b__37_0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnPlayButton_b__37_2(::MX::NetworkProtocol::MiniGameCCGLobbyResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_2_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnMiniGameCCGButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONMINIGAMECCGBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnPlayButton_b__37_3(::MX::MinigameCCG::UI::UICardGame_Lobby_WorldRaid_854* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Lobby_WorldRaid_854*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_3_OFFSET))(arg, nullptr);
		}

		::System::Void OnMiniGameShootingButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONMINIGAMESHOOTINGBUTTON_OFFSET))(nullptr);
		}

		::MX::Data::InteractiveWorldRaidArcadeInfo* get_CurrentSelectedInfo()
		{
			return ((::MX::Data::InteractiveWorldRaidArcadeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_GET_CURRENTSELECTEDINFO_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnPlayButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONPLAYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnMiniGameRoadButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_ONMINIGAMEROADBUTTON_OFFSET))(nullptr);
		}

		::System::Void PlayButtonAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_PLAYBUTTONANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_OpeningAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_CO_OPENINGANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnPlayButton_b__37_1(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE__ONPLAYBUTTON_B__37_1_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SelectMiniGame(::FlatData::EventContentType* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INTERACTIVEWORLDRAIDARCADE_SELECTMINIGAME_OFFSET))(arg, arg2, nullptr);
		}

	};

