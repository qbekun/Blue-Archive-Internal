#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
class UIBattle;

#define UIBATTLEADDITIONALLIMITBREAK_BASE_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x25FA9D0)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25FA9E0)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25FAA80)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_INIT_OFFSET UNITYSDK_OFFSET(0x25FAB20)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25FA9C0)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_REFRESHSKILLCARDS_OFFSET UNITYSDK_OFFSET(0x25FAD40)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_SETDECO_OFFSET UNITYSDK_OFFSET(0x25FAEA0)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_ONLIMITGAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25FAEB0)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_SETACTION_OFFSET UNITYSDK_OFFSET(0x25FAF80)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25FAF90)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_SETDATA_OFFSET UNITYSDK_OFFSET(0x25FB030)
#define UIBATTLEADDITIONALLIMITBREAK_BASE_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25FB040)

	inline static constexpr unsigned int UIBattleAdditionalLimitBreak_Base_TypeDefinitionIndex = 6450;

	class UIBattleAdditionalLimitBreak_Base : public Il2CppObject
	{
	public:
		Il2CppObject* uiCards; // 0x38
		::MX::Logic::Battles::Battle* battle; // 0x40

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void Init(UIBattle* arg, ::System::String* str)
		{
			((::System::Void(*)(UIBattle*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_INIT_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshSkillCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_REFRESHSKILLCARDS_OFFSET))(nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_SETDECO_OFFSET))(arg, nullptr);
		}

		::System::Void OnLimitGaugeChanged(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_ONLIMITGAUGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_SETACTION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALLIMITBREAK_BASE_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

	};

