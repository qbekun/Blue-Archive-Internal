#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define UIBATTLEADDITIONALCAMERASWITCH_SETDATA_OFFSET UNITYSDK_OFFSET(0x25F3DA0)
#define UIBATTLEADDITIONALCAMERASWITCH_REFRESHCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x25F3DB0)
#define UIBATTLEADDITIONALCAMERASWITCH_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F3F70)
#define UIBATTLEADDITIONALCAMERASWITCH_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F4010)
#define UIBATTLEADDITIONALCAMERASWITCH_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x25F40B0)
#define UIBATTLEADDITIONALCAMERASWITCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25F40C0)
#define UIBATTLEADDITIONALCAMERASWITCH_SETUIINDEX_OFFSET UNITYSDK_OFFSET(0x25F3EF0)
#define UIBATTLEADDITIONALCAMERASWITCH_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25F40D0)
#define UIBATTLEADDITIONALCAMERASWITCH_RESERVEREMOVE_OFFSET UNITYSDK_OFFSET(0x25F4130)
#define UIBATTLEADDITIONALCAMERASWITCH_SETDECO_OFFSET UNITYSDK_OFFSET(0x25F4160)
#define UIBATTLEADDITIONALCAMERASWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F4170)
#define UIBATTLEADDITIONALCAMERASWITCH_SETACTION_OFFSET UNITYSDK_OFFSET(0x25F41A0)
#define UIBATTLEADDITIONALCAMERASWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F41B0)
#define UIBATTLEADDITIONALCAMERASWITCH_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F4200)
#define UIBATTLEADDITIONALCAMERASWITCH_ONPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x25F42A0)
#define UIBATTLEADDITIONALCAMERASWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x25F4500)
#define UIBATTLEADDITIONALCAMERASWITCH__ONPRESSBUTTON_G__CHANGECAMERA|24_0_OFFSET UNITYSDK_OFFSET(0x25F43C0)

	inline static constexpr unsigned int UIBattleAdditionalCameraSwitch_TypeDefinitionIndex = 6433;

	class UIBattleAdditionalCameraSwitch : public Il2CppObject
	{
	public:
		MXButton* button; // 0x38
		::UnityEngine::GameObject* enableOnBaseCamera; // 0x40
		::UnityEngine::GameObject* enableOnAdditionalCamera; // 0x48
		UILabel* additionalCameraNumber; // 0x50
		::System::Int32 cameraSelectIndex; // 0x58
		::System::Single removeReserveDuration; // 0x5C
		::System::Single removeReservedTime; // 0x60

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCameraCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_REFRESHCAMERACOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetUIIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_SETUIINDEX_OFFSET))(nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void ReserveRemove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_RESERVEREMOVE_OFFSET))(nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_SETDECO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_UPDATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void OnPressButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_ONPRESSBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnPressButton_g__ChangeCamera|24_0(<>c__DisplayClass24_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALCAMERASWITCH__ONPRESSBUTTON_G__CHANGECAMERA|24_0_OFFSET))(arg, nullptr);
		}

	};

