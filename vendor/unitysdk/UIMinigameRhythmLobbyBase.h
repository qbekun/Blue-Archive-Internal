#pragma once
#include "unitysdk.h"

class UIMinigameRhythmLobby;
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class OpenConditionContent; }
class SwipeDir;

#define UIMINIGAMERHYTHMLOBBYBASE__ONOPENED_B__12_0_OFFSET UNITYSDK_OFFSET(0xD1F800)
#define UIMINIGAMERHYTHMLOBBYBASE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD1FA10)
#define UIMINIGAMERHYTHMLOBBYBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD1FCA0)
#define UIMINIGAMERHYTHMLOBBYBASE_RESETBGMINDEX_OFFSET UNITYSDK_OFFSET(0xD1FCE0)
#define UIMINIGAMERHYTHMLOBBYBASE__UIMINIGAMERHYTHMLOBBYOPENER_G__CHECKOPENCONDITION|11_1_OFFSET UNITYSDK_OFFSET(0xD1FD10)
#define UIMINIGAMERHYTHMLOBBYBASE_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xD1FE90)
#define UIMINIGAMERHYTHMLOBBYBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1FF20)
#define UIMINIGAMERHYTHMLOBBYBASE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xD1FF30)
#define UIMINIGAMERHYTHMLOBBYBASE_GET_HASBGM_OFFSET UNITYSDK_OFFSET(0xD1FFC0)
#define UIMINIGAMERHYTHMLOBBYBASE___N__0_OFFSET UNITYSDK_OFFSET(0xD1FFD0)
#define UIMINIGAMERHYTHMLOBBYBASE_SWIPE_OFFSET UNITYSDK_OFFSET(0xD1FFE0)
#define UIMINIGAMERHYTHMLOBBYBASE_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xD20000)
#define UIMINIGAMERHYTHMLOBBYBASE_INITIALIZEUIRESOURCES_OFFSET UNITYSDK_OFFSET(0xD1F9A0)
#define UIMINIGAMERHYTHMLOBBYBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD201E0)
#define UIMINIGAMERHYTHMLOBBYBASE_ONBACK_OFFSET UNITYSDK_OFFSET(0xD201F0)
#define UIMINIGAMERHYTHMLOBBYBASE_UIMINIGAMERHYTHMLOBBYOPENER_OFFSET UNITYSDK_OFFSET(0xD20230)

	inline static constexpr unsigned int UIMinigameRhythmLobbyBase_TypeDefinitionIndex = 702;

	class UIMinigameRhythmLobbyBase : public Il2CppObject
	{
	public:
		UIMinigameRhythmLobby* uiMinigameRhythmLobby; // 0xD8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xE0
		::System::Boolean fromLobbies; // 0xE8
		::System::Boolean fromWorkUI; // 0xE9

		::System::Void _OnOpened_b__12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE__ONOPENED_B__12_0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::EventContentSeasonInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetBgmIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_RESETBGMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean _UIMinigameRhythmLobbyOpener_g__CheckOpenCondition|11_1(::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Boolean(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE__UIMINIGAMERHYTHMLOBBYOPENER_G__CHECKOPENCONDITION|11_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_GET_HASBGM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE___N__0_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_SWIPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitializeUIResources()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_INITIALIZEUIRESOURCES_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void UIMinigameRhythmLobbyOpener(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBYBASE_UIMINIGAMERHYTHMLOBBYOPENER_OFFSET))(arg, nullptr);
		}

	};

