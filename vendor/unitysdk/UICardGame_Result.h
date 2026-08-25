#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UITexture;
class UISmallParcelList;
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
class UICardGame_MyDeck;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UICARDGAME_RESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA52920)
#define UICARDGAME_RESULT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA52B30)
#define UICARDGAME_RESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA52BC0)
#define UICARDGAME_RESULT_GET_PARCELLIST_OFFSET UNITYSDK_OFFSET(0xA52BD0)
#define UICARDGAME_RESULT_ONCLICKDECK_OFFSET UNITYSDK_OFFSET(0xA52C80)
#define UICARDGAME_RESULT__ONCLICKDECK_B__19_0_OFFSET UNITYSDK_OFFSET(0xA52D60)
#define UICARDGAME_RESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA52D90)

	inline static constexpr unsigned int UICardGame_Result_TypeDefinitionIndex = 483;

	class UICardGame_Result : public Il2CppObject
	{
	public:
		MXButton* deckBtn; // 0xD8
		MXButton* okBtn; // 0xE0
		UILabel* stageNameLabel; // 0xE8
		UILabel* pointValueLabel; // 0xF0
		UILabel* pointValueAddLabel; // 0xF8
		UITexture* stampTex; // 0x100
		Il2CppObject* stampTexResources; // 0x108
		UILabel* recordBattleValueLabel; // 0x110
		UILabel* recordBossValueLabel; // 0x118
		UILabel* recordEventValueLabel; // 0x120
		UILabel* recordRestValueLabel; // 0x128
		UILabel* emptyRewardLabel; // 0x130
		UISmallParcelList* parcelList; // 0x138
		::System::Action* callback; // 0x140
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* saveDB; // 0x148

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT_.CTOR_OFFSET))(nullptr);
		}

		UISmallParcelList* get_ParcelList()
		{
			return ((UISmallParcelList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT_GET_PARCELLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT_ONCLICKDECK_OFFSET))(nullptr);
		}

		::System::Void _OnClickDeck_b__19_0(UICardGame_MyDeck* arg)
		{
			((::System::Void(*)(UICardGame_MyDeck*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT__ONCLICKDECK_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_RESULT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

