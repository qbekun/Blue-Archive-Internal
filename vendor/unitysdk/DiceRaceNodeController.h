#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class DiceRaceCatmullRom;
namespace UnityEngine { class Vector3; }
namespace FlatData { class EventContentDiceRaceNodeType; }

#define DICERACENODECONTROLLER_GET_PLAYERROOT_OFFSET UNITYSDK_OFFSET(0x23D6410)
#define DICERACENODECONTROLLER_GET_DICERACESPLINE_OFFSET UNITYSDK_OFFSET(0x23D6420)
#define DICERACENODECONTROLLER_SET_DICERACESPLINE_OFFSET UNITYSDK_OFFSET(0x23D6430)
#define DICERACENODECONTROLLER_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x23D6440)
#define DICERACENODECONTROLLER_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x23D6450)
#define DICERACENODECONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23D6460)
#define DICERACENODECONTROLLER_PLAYANISPECIALREWARDNPC_OFFSET UNITYSDK_OFFSET(0x23D64E0)
#define DICERACENODECONTROLLER_PALYANIFINISHNPC_OFFSET UNITYSDK_OFFSET(0x23D64F0)
#define DICERACENODECONTROLLER_SETDICERACENODEINFO_OFFSET UNITYSDK_OFFSET(0x23D4810)
#define DICERACENODECONTROLLER_NODEPARCELTWEENALPHA_OFFSET UNITYSDK_OFFSET(0x23D48C0)
#define DICERACENODECONTROLLER_NODEPARCELTWEENALPHA_OFFSET UNITYSDK_OFFSET(0x23D6560)
#define DICERACENODECONTROLLER_SETNODEPARCELTWEENALPHA_OFFSET UNITYSDK_OFFSET(0x23D6500)
#define DICERACENODECONTROLLER_GETDICERACENODEPOINTS_OFFSET UNITYSDK_OFFSET(0x23D3C80)
#define DICERACENODECONTROLLER_GETEVENTCONTENTDICERACENODETYPE_OFFSET UNITYSDK_OFFSET(0x23D4550)
#define DICERACENODECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D66E0)

	inline static constexpr unsigned int DiceRaceNodeController_TypeDefinitionIndex = 5322;

	class DiceRaceNodeController : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* diceRaceNodes; // 0x18
		::System::Int32 resolution; // 0x20
		::UnityEngine::Transform* playerRoot; // 0x28
		::Il2CppArray<::System::Object*>* diceRaceNodePoints; // 0x30
		DiceRaceCatmullRom* _DiceRaceSpline_k__BackingField; // 0x38
		::System::Int32 _Resolution_k__BackingField; // 0x40

		::UnityEngine::Transform* get_PlayerRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_GET_PLAYERROOT_OFFSET))(nullptr);
		}

		DiceRaceCatmullRom* get_DiceRaceSpline()
		{
			return ((DiceRaceCatmullRom*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_GET_DICERACESPLINE_OFFSET))(nullptr);
		}

		::System::Void set_DiceRaceSpline(DiceRaceCatmullRom* arg)
		{
			((::System::Void(*)(DiceRaceCatmullRom*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_SET_DICERACESPLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Resolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_GET_RESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_Resolution(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_SET_RESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PlayAniSpecialRewardNpc(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_PLAYANISPECIALREWARDNPC_OFFSET))(arg, nullptr);
		}

		::System::Void PalyAniFinishNpc(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_PALYANIFINISHNPC_OFFSET))(arg, nullptr);
		}

		::System::Void SetDiceRaceNodeInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_SETDICERACENODEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void NodeParcelTweenalpha(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_NODEPARCELTWEENALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void NodeParcelTweenalpha(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_NODEPARCELTWEENALPHA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetNodeParcelTweenalpha(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_SETNODEPARCELTWEENALPHA_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDiceRaceNodePoints()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_GETDICERACENODEPOINTS_OFFSET))(nullptr);
		}

		::FlatData::EventContentDiceRaceNodeType* GetEventContentDiceRaceNodeType(::System::Int32 arg)
		{
			return ((::FlatData::EventContentDiceRaceNodeType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_GETEVENTCONTENTDICERACENODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACENODECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

