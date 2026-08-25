#pragma once
#include "unitysdk.h"

class UILabel;
class FindGiftProcess;
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define UIBATTLEFINDGIFTDISPLAY_CREATEREWARDITEM_OFFSET UNITYSDK_OFFSET(0x2231B60)
#define UIBATTLEFINDGIFTDISPLAY_INITIALIZEONUIBATTLEOPEN_OFFSET UNITYSDK_OFFSET(0x2229E30)
#define UIBATTLEFINDGIFTDISPLAY_ONCHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x2231D20)
#define UIBATTLEFINDGIFTDISPLAY_UPDATE_OFFSET UNITYSDK_OFFSET(0x2231F20)
#define UIBATTLEFINDGIFTDISPLAY_CLEARPROCESS_OFFSET UNITYSDK_OFFSET(0x2231E20)
#define UIBATTLEFINDGIFTDISPLAY_GET_COUNTLABEL_OFFSET UNITYSDK_OFFSET(0x2231FF0)
#define UIBATTLEFINDGIFTDISPLAY_SETLEVELDISPLAY_OFFSET UNITYSDK_OFFSET(0x2232080)
#define UIBATTLEFINDGIFTDISPLAY_ONENDFINDGIFT_OFFSET UNITYSDK_OFFSET(0x222D210)
#define UIBATTLEFINDGIFTDISPLAY_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x2232290)
#define UIBATTLEFINDGIFTDISPLAY_INITIALIZESTARTFINDGIFT_OFFSET UNITYSDK_OFFSET(0x222CD70)
#define UIBATTLEFINDGIFTDISPLAY_ONSTARTPROCESS_OFFSET UNITYSDK_OFFSET(0x222CF50)
#define UIBATTLEFINDGIFTDISPLAY_SETCURRENTBOXCOUNT_OFFSET UNITYSDK_OFFSET(0x2231C90)
#define UIBATTLEFINDGIFTDISPLAY_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x22322A0)
#define UIBATTLEFINDGIFTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x22322B0)
#define UIBATTLEFINDGIFTDISPLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22322C0)

	inline static constexpr unsigned int UIBattleFindGiftDisplay_TypeDefinitionIndex = 4448;

	class UIBattleFindGiftDisplay : public Il2CppObject
	{
	public:
		UILabel* countLabel; // 0x18
		UILabel* defaultTimeLabel; // 0x20
		UILabel* disabledTimeLabel; // 0x28
		UILabel* findGiftTimeLabel; // 0x30
		::System::Int32 countSum; // 0x38
		::System::Int32 currentFindGiftCount; // 0x3C
		FindGiftProcess* currentProcess; // 0x40
		::System::String* _UniqueName_k__BackingField; // 0x48

		::System::Void CreateRewardItem(::System::String* str, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_CREATEREWARDITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeOnUIBattleOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_INITIALIZEONUIBATTLEOPEN_OFFSET))(nullptr);
		}

		::System::Void OnCharacterDied(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_ONCHARACTERDIED_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ClearProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_CLEARPROCESS_OFFSET))(nullptr);
		}

		UILabel* get_CountLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_GET_COUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void SetLevelDisplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_SETLEVELDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndFindGift(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_ONENDFINDGIFT_OFFSET))(arg, nullptr);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_GET_UNIQUENAME_OFFSET))(nullptr);
		}

		::System::Void InitializeStartFindGift(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_INITIALIZESTARTFINDGIFT_OFFSET))(str, nullptr);
		}

		::System::Void OnStartProcess(FindGiftProcess* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(FindGiftProcess*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_ONSTARTPROCESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCurrentBoxCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_SETCURRENTBOXCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UniqueName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_SET_UNIQUENAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEFINDGIFTDISPLAY_ONDISABLE_OFFSET))(nullptr);
		}

	};

