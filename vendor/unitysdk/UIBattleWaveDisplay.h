#pragma once
#include "unitysdk.h"

class UILabel;

#define UIBATTLEWAVEDISPLAY_GET_WAVELABEL_OFFSET UNITYSDK_OFFSET(0x2232B30)
#define UIBATTLEWAVEDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0x2232BF0)
#define UIBATTLEWAVEDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2232D20)
#define UIBATTLEWAVEDISPLAY_ONENDWAVECOMMAND_OFFSET UNITYSDK_OFFSET(0x2232D30)

	inline static constexpr unsigned int UIBattleWaveDisplay_TypeDefinitionIndex = 4453;

	class UIBattleWaveDisplay : public Il2CppObject
	{
	public:
		UILabel* waveLabel; // 0x18

		UILabel* get_WaveLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVEDISPLAY_GET_WAVELABEL_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVEDISPLAY_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVEDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEndWaveCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVEDISPLAY_ONENDWAVECOMMAND_OFFSET))(nullptr);
		}

	};

