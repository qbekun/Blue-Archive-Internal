#pragma once
#include "unitysdk.h"

class UILabel;
class BattlePassFlavorTextSelector;
namespace UnityEngine { class Coroutine; }
class BattlePassTask;

#define UIBATTLEPASSRANDOMTEXT_MOVELABEL_OFFSET UNITYSDK_OFFSET(0x2243A20)
#define UIBATTLEPASSRANDOMTEXT_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x2243AE0)
#define UIBATTLEPASSRANDOMTEXT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2243C20)
#define UIBATTLEPASSRANDOMTEXT_TICKERROUTINE_OFFSET UNITYSDK_OFFSET(0x22442A0)
#define UIBATTLEPASSRANDOMTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2244330)
#define UIBATTLEPASSRANDOMTEXT_GET_TASK_OFFSET UNITYSDK_OFFSET(0x2244350)
#define UIBATTLEPASSRANDOMTEXT_GETFLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x2243F30)

	inline static constexpr unsigned int UIBattlePassRandomText_TypeDefinitionIndex = 4497;

	class UIBattlePassRandomText : public Il2CppObject
	{
	public:
		UILabel* RandomTextLabel1; // 0x18
		UILabel* RandomTextLabel2; // 0x20
		::System::Single moveDistance; // 0x28
		::System::Single moveDuration; // 0x2C
		::System::Single DefaultY; // 0x0
		::System::Single interval; // 0x30
		::System::Boolean isLabel1Active; // 0x34
		Il2CppObject* flavorTextExcels; // 0x38
		BattlePassFlavorTextSelector* randomTextList; // 0x40
		::UnityEngine::Coroutine* tickerCoroutine; // 0x48

		::System::Collections::IEnumerator* MoveLabel(UILabel* arg, UILabel* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(UILabel*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_MOVELABEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_UPDATETEXT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* TickerRoutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_TICKERROUTINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_.CTOR_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_GET_TASK_OFFSET))(nullptr);
		}

		Il2CppObject* GetFlavorText()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSRANDOMTEXT_GETFLAVORTEXT_OFFSET))(nullptr);
		}

	};

