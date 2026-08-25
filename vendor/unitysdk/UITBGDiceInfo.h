#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace UnityEngine { class ParticleSystem; }

#define UITBGDICEINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB513E0)
#define UITBGDICEINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xB51430)
#define UITBGDICEINFO_PLAYDICEGET_OFFSET UNITYSDK_OFFSET(0xB514F0)
#define UITBGDICEINFO_COPLAYDICEGET_OFFSET UNITYSDK_OFFSET(0xB517A0)
#define UITBGDICEINFO_SETDICECOUNT_OFFSET UNITYSDK_OFFSET(0xB515C0)
#define UITBGDICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB51830)

	inline static constexpr unsigned int UITBGDiceInfo_TypeDefinitionIndex = 8373;

	class UITBGDiceInfo : public Il2CppObject
	{
	public:
		UISprite* DiceSprite; // 0x18
		UILabel* DiceLabel; // 0x20
		Il2CppObject* DiceDisplayInfos; // 0x28
		::UnityEngine::ParticleSystem* DiceGetFx; // 0x30
		::System::Boolean isPlayingFx; // 0x38
		::System::Int32 diceCountCache; // 0x3C

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICEINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGDICEINFO_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void PlayDiceGet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICEINFO_PLAYDICEGET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayDiceGet()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICEINFO_COPLAYDICEGET_OFFSET))(nullptr);
		}

		::System::Void SetDiceCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGDICEINFO_SETDICECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGDICEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

