#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }
class UICardGame_Rest_Popup_RemoveCard;

#define UICARDGAME_REST_REMOVECARD_CO_REMOVEDIRECTING_OFFSET UNITYSDK_OFFSET(0xA503C0)
#define UICARDGAME_REST_REMOVECARD_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0xA524F0)
#define UICARDGAME_REST_REMOVECARD_GET_CARDDBID_OFFSET UNITYSDK_OFFSET(0xA525E0)
#define UICARDGAME_REST_REMOVECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA52600)
#define UICARDGAME_REST_REMOVECARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xA52610)
#define UICARDGAME_REST_REMOVECARD_SETDATA_OFFSET UNITYSDK_OFFSET(0xA4FCF0)

	inline static constexpr unsigned int UICardGame_Rest_RemoveCard_TypeDefinitionIndex = 481;

	class UICardGame_Rest_RemoveCard : public Il2CppObject
	{
	public:
		MXButton* btn; // 0x18
		UITexture* uiTexture; // 0x20
		::UnityEngine::GameObject* checkIcon; // 0x28
		::MX::GameLogic::DBModel::MiniGameCCGCardDB* db; // 0x30
		UICardGame_Rest_Popup_RemoveCard* rootUI; // 0x38

		::System::Collections::IEnumerator* Co_RemoveDirecting(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_REMOVECARD_CO_REMOVEDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_REMOVECARD_ONCLICKCARD_OFFSET))(nullptr);
		}

		::System::Int32 get_CardDBId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_REMOVECARD_GET_CARDDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_REMOVECARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_REMOVECARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg, UICardGame_Rest_Popup_RemoveCard* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, UICardGame_Rest_Popup_RemoveCard*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_REMOVECARD_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

