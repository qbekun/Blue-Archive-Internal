#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
class BattleResultType;

#define UIMINIGAMERHYTHMRESULT_WAITRESULTANIMATIONANDSHOWSCORERESULTUI_OFFSET UNITYSDK_OFFSET(0xD21FE0)
#define UIMINIGAMERHYTHMRESULT_GET_RESULTANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xD22070)
#define UIMINIGAMERHYTHMRESULT_SET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0xD220D0)
#define UIMINIGAMERHYTHMRESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD1ADF0)
#define UIMINIGAMERHYTHMRESULT_WAITINTROANIMATIONANDRESTART_OFFSET UNITYSDK_OFFSET(0xD220E0)
#define UIMINIGAMERHYTHMRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD22160)
#define UIMINIGAMERHYTHMRESULT_GET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0xD22170)
#define UIMINIGAMERHYTHMRESULT_ONCLICKTOLOBBY_OFFSET UNITYSDK_OFFSET(0xD22180)
#define UIMINIGAMERHYTHMRESULT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xD222F0)
#define UIMINIGAMERHYTHMRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD22300)
#define UIMINIGAMERHYTHMRESULT_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0xD224E0)
#define UIMINIGAMERHYTHMRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD22630)

	inline static constexpr unsigned int UIMinigameRhythmResult_TypeDefinitionIndex = 709;

	class UIMinigameRhythmResult : public Il2CppObject
	{
	public:
		MXButton* Retry; // 0xD8
		MXButton* ToLobby; // 0xE0
		::UnityEngine::Animation* BattleResultAnimation; // 0xE8
		::System::Int32 VICTORY_BGM_ID; // 0x0
		::System::Int32 DEFEAT_BGM_ID; // 0x0
		BattleResultType* _ResultType_k__BackingField; // 0xF0

		::System::Collections::IEnumerator* WaitResultAnimationAndShowScoreResultUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_WAITRESULTANIMATIONANDSHOWSCORERESULTUI_OFFSET))(nullptr);
		}

		::System::String* get_ResultAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_GET_RESULTANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_ResultType(BattleResultType* arg)
		{
			((::System::Void(*)(BattleResultType*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_SET_RESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(BattleResultType* arg)
		{
			((::System::Void(*)(BattleResultType*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitIntroAnimationAndRestart()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_WAITINTROANIMATIONANDRESTART_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_.CTOR_OFFSET))(nullptr);
		}

		BattleResultType* get_ResultType()
		{
			return ((BattleResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_GET_RESULTTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_ONCLICKTOLOBBY_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMRESULT_AWAKE_OFFSET))(nullptr);
		}

	};

