#pragma once
#include "unitysdk.h"

class TBGDiceFxVisual;
namespace UnityEngine { class GameObject; }
class UIGrid;
namespace UnityEngine { class Animation; }
class UILabel;
class UITBGBattleTop;
namespace MX::NetworkProtocol { class MiniGameTableBoardEncounterInputResponse; }
namespace MX::TableBoard { class TBGStackBuff; }

#define UITBGDICERESULT_PLAYDICE_OFFSET UNITYSDK_OFFSET(0xB51A50)
#define UITBGDICERESULT_RESETDICEPANEL_OFFSET UNITYSDK_OFFSET(0xB52270)
#define UITBGDICERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB522A0)
#define UITBGDICERESULT_COPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xB522B0)
#define UITBGDICERESULT_COPLAYDICE_OFFSET UNITYSDK_OFFSET(0xB521B0)
#define UITBGDICERESULT_COPLAYENDANI_OFFSET UNITYSDK_OFFSET(0xB52380)
#define UITBGDICERESULT_SETDICEADDBUFF_OFFSET UNITYSDK_OFFSET(0xB51F50)

	inline static constexpr unsigned int UITBGDiceResult_TypeDefinitionIndex = 8378;

	class UITBGDiceResult : public Il2CppObject
	{
	public:
		TBGDiceFxVisual* Dice; // 0x18
		::UnityEngine::GameObject* DicePanel; // 0x20
		Il2CppObject* ResultSuccess; // 0x28
		Il2CppObject* ResultGreatSuccess; // 0x30
		UIGrid* BuffGrid; // 0x38
		::UnityEngine::GameObject* TemporaryBuffObject; // 0x40
		Il2CppObject* TemporaryBuffSlots; // 0x48
		::UnityEngine::GameObject* PermanentBuffObject; // 0x50
		Il2CppObject* PermanentBuffSlots; // 0x58
		::UnityEngine::GameObject* VictoryObject; // 0x60
		::UnityEngine::GameObject* DefeatObject; // 0x68
		::UnityEngine::Animation* DiceAni; // 0x70
		::System::String* AppearAniName; // 0x78
		::System::String* DiceRollAniName; // 0x80
		::System::String* SuccessAniName; // 0x88
		::System::String* CriAniName; // 0x90
		::System::String* FailAniName; // 0x98
		::System::String* ReturnAniName; // 0xA0
		::UnityEngine::Animation* EndAni; // 0xA8
		::System::String* EndAniName; // 0xB0
		Il2CppObject* DiceLabels; // 0xB8
		UILabel* TemporaryBonusLabel; // 0xC0
		UILabel* PermanentBonusLabel; // 0xC8
		UILabel* SumLabel; // 0xD0
		UITBGBattleTop* TopSetCombat; // 0xD8

		::System::Void PlayDice(::System::Int32 arg, ::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int32, ::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_PLAYDICE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResetDicePanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_RESETDICEPANEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAnimation(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_COPLAYANIMATION_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayDice(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, ::System::Int32, ::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_COPLAYDICE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayEndAni()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_COPLAYENDANI_OFFSET))(nullptr);
		}

		::System::Void SetDiceAddBuff(Il2CppObject* arg, ::MX::TableBoard::TBGStackBuff* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::TableBoard::TBGStackBuff*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGDICERESULT_SETDICEADDBUFF_OFFSET))(arg, arg2, nullptr);
		}

	};

