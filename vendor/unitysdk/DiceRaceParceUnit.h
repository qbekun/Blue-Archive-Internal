#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
class TweenAlpha;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define DICERACEPARCEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D66F0)
#define DICERACEPARCEUNIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23D6230)
#define DICERACEPARCEUNIT_SETPLUSREWARDDATA_OFFSET UNITYSDK_OFFSET(0x23D62C0)
#define DICERACEPARCEUNIT_SETTWEENALPHA_OFFSET UNITYSDK_OFFSET(0x23D6060)
#define DICERACEPARCEUNIT_SETITEMREWARDDATA_OFFSET UNITYSDK_OFFSET(0x23D6320)

	inline static constexpr unsigned int DiceRaceParceUnit_TypeDefinitionIndex = 5323;

	class DiceRaceParceUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* itemObject; // 0x18
		UITexture* itemTexture; // 0x20
		UILabel* itemAmount; // 0x28
		::UnityEngine::GameObject* plusObject; // 0x30
		UILabel* plusAmount; // 0x38
		TweenAlpha* tweenAlpha; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPARCEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPARCEUNIT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetPlusRewardData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPARCEUNIT_SETPLUSREWARDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetTweenAlpha(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPARCEUNIT_SETTWEENALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemRewardData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPARCEUNIT_SETITEMREWARDDATA_OFFSET))(arg, nullptr);
		}

	};

