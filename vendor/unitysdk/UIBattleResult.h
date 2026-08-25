#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class AccountLevelExpIndicator;
namespace UnityEngine { class Animation; }
class BattleResultType;
namespace MX::Logic::Data { class BattleTypes; }
namespace MX::Visual::Battles { class BattleResultSkipType; }
namespace MX::Visual::Battles { class BattleActorComponent; }
class UIVictory;

#define UIBATTLERESULT_COVICTORY_OFFSET UNITYSDK_OFFSET(0x2254F50)
#define UIBATTLERESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2254FF0)
#define UIBATTLERESULT_SET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x2255590)
#define UIBATTLERESULT_COONOPENED_OFFSET UNITYSDK_OFFSET(0x2255160)
#define UIBATTLERESULT_CODEFEAT_OFFSET UNITYSDK_OFFSET(0x22555C0)
#define UIBATTLERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2255660)
#define UIBATTLERESULT_SET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x2255670)
#define UIBATTLERESULT__COVICTORY_B__37_0_OFFSET UNITYSDK_OFFSET(0x2255680)
#define UIBATTLERESULT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2255BA0)
#define UIBATTLERESULT_DEACTIVEVISUAL_OFFSET UNITYSDK_OFFSET(0x2255BB0)
#define UIBATTLERESULT_SAVEECHELONONRECENTPRESET_OFFSET UNITYSDK_OFFSET(0x2255420)
#define UIBATTLERESULT__ONOPENED_G__SETCLIPANDOPEN|31_0_OFFSET UNITYSDK_OFFSET(0x22551E0)
#define UIBATTLERESULT__COVICTORY_B__37_2_OFFSET UNITYSDK_OFFSET(0x2256DC0)
#define UIBATTLERESULT_GET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x2256DF0)
#define UIBATTLERESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2256E00)
#define UIBATTLERESULT_GET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x22573C0)
#define UIBATTLERESULT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x22573D0)
#define UIBATTLERESULT_GET_RESULTANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x2256D30)
#define UIBATTLERESULT_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x2257460)
#define UIBATTLERESULT_ACTIVATETEXTURE_OFFSET UNITYSDK_OFFSET(0x2256710)
#define UIBATTLERESULT_SET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x2257470)
#define UIBATTLERESULT_UPDATEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x2257480)
#define UIBATTLERESULT__COVICTORY_B__37_1_OFFSET UNITYSDK_OFFSET(0x2257500)

	inline static constexpr unsigned int UIBattleResult_TypeDefinitionIndex = 4549;

	class UIBattleResult : public Il2CppObject
	{
	public:
		::System::Int32 VICTORY_BGM_ID; // 0x0
		::System::Int32 DEFEAT_BGM_ID; // 0x0
		::UnityEngine::GameObject* victory; // 0xD8
		::UnityEngine::GameObject* defeat; // 0xE0
		::UnityEngine::GameObject* arenaWin; // 0xE8
		::UnityEngine::GameObject* arenaLose; // 0xF0
		::UnityEngine::GameObject* loseBg; // 0xF8
		::UnityEngine::GameObject* loseBgRaid; // 0x100
		Il2CppObject* timeLabels; // 0x108
		UILabel* worldRaidDamageLabel; // 0x110
		AccountLevelExpIndicator* playerInfo; // 0x118
		::UnityEngine::Animation* BattleResultAnimation; // 0x120
		BattleResultType* _ResultType_k__BackingField; // 0x128
		::MX::Logic::Data::BattleTypes* _BattleType_k__BackingField; // 0x12C
		::MX::Visual::Battles::BattleResultSkipType* _BattleResultSkipType_k__BackingField; // 0x130
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0x138
		::System::Boolean isHideSummaryButton; // 0x140

		::System::Collections::IEnumerator* CoVictory(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_COVICTORY_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleType(::MX::Logic::Data::BattleTypes* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_SET_BATTLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOnOpened(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_COONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoDefeat(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_CODEFEAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ResultType(BattleResultType* arg)
		{
			((::System::Void(*)(BattleResultType*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_SET_RESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _CoVictory_b__37_0(UIVictory* arg)
		{
			((::System::Void(*)(UIVictory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT__COVICTORY_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void DeactiveVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_DEACTIVEVISUAL_OFFSET))(nullptr);
		}

		::System::Void SaveEchelonOnRecentPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_SAVEECHELONONRECENTPRESET_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_g__SetClipAndOpen|31_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT__ONOPENED_G__SETCLIPANDOPEN|31_0_OFFSET))(nullptr);
		}

		::System::Void _CoVictory_b__37_2(UIVictory* arg)
		{
			((::System::Void(*)(UIVictory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT__COVICTORY_B__37_2_OFFSET))(arg, nullptr);
		}

		BattleResultType* get_ResultType()
		{
			return ((BattleResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_GET_RESULTTYPE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Data::BattleTypes* arg, BattleResultType* arg2, ::System::Int64 arg3, ::System::TimeSpan* arg4, ::MX::Visual::Battles::BattleActorComponent* arg5, ::MX::Visual::Battles::BattleResultSkipType* arg6)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, BattleResultType*, ::System::Int64, ::System::TimeSpan*, ::MX::Visual::Battles::BattleActorComponent*, ::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Visual::Battles::BattleResultSkipType* get_BattleResultSkipType()
		{
			return ((::MX::Visual::Battles::BattleResultSkipType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_GET_BATTLERESULTSKIPTYPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::String* get_ResultAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_GET_RESULTANIMATIONNAME_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void ActivateTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_ACTIVATETEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_BattleResultSkipType(::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_SET_BATTLERESULTSKIPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePlayerInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT_UPDATEPLAYERINFO_OFFSET))(nullptr);
		}

		::System::Void _CoVictory_b__37_1(UIVictory* arg)
		{
			((::System::Void(*)(UIVictory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLERESULT__COVICTORY_B__37_1_OFFSET))(arg, nullptr);
		}

	};

