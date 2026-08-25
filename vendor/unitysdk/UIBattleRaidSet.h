#pragma once
#include "unitysdk.h"

class UIDamageMeter;
class UIBattleWaveDisplay;
class UIBattleWaveCountDisplay;
namespace UnityEngine { class GameObject; }

#define UIBATTLERAIDSET_GET_WAVEDISPLAY_OFFSET UNITYSDK_OFFSET(0x2232440)
#define UIBATTLERAIDSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x22324B0)
#define UIBATTLERAIDSET_GET_DAMAGEMETER_OFFSET UNITYSDK_OFFSET(0x22324C0)
#define UIBATTLERAIDSET_GET_WAVECOUNTDISPLAY_OFFSET UNITYSDK_OFFSET(0x2232530)
#define UIBATTLERAIDSET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22325A0)

	inline static constexpr unsigned int UIBattleRaidSet_TypeDefinitionIndex = 4449;

	class UIBattleRaidSet : public Il2CppObject
	{
	public:
		UIDamageMeter* damageMeter; // 0x18
		UIBattleWaveDisplay* waveDisplay; // 0x20
		UIBattleWaveCountDisplay* waveCountDisplay; // 0x28
		::UnityEngine::GameObject* RaidCodeParent; // 0x30

		UIBattleWaveDisplay* get_WaveDisplay()
		{
			return ((UIBattleWaveDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERAIDSET_GET_WAVEDISPLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERAIDSET_.CTOR_OFFSET))(nullptr);
		}

		UIDamageMeter* get_DamageMeter()
		{
			return ((UIDamageMeter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERAIDSET_GET_DAMAGEMETER_OFFSET))(nullptr);
		}

		UIBattleWaveCountDisplay* get_WaveCountDisplay()
		{
			return ((UIBattleWaveCountDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERAIDSET_GET_WAVECOUNTDISPLAY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERAIDSET_INITIALIZE_OFFSET))(nullptr);
		}

	};

