#pragma once
#include "unitysdk.h"

class MGSDamageFloater;
namespace MX::MinigameShooting { class Character; }

#define UIMINIGAMESHOOTINGDAMAGEFLOATER_ONENDDAMAGEFLOATER_OFFSET UNITYSDK_OFFSET(0x2063970)
#define UIMINIGAMESHOOTINGDAMAGEFLOATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2063A00)
#define UIMINIGAMESHOOTINGDAMAGEFLOATER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2063A80)
#define UIMINIGAMESHOOTINGDAMAGEFLOATER_ONMISS_OFFSET UNITYSDK_OFFSET(0x2063B10)
#define UIMINIGAMESHOOTINGDAMAGEFLOATER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2063C10)
#define UIMINIGAMESHOOTINGDAMAGEFLOATER_ONDAMAGE_OFFSET UNITYSDK_OFFSET(0x2063C70)

	inline static constexpr unsigned int UIMiniGameShootingDamageFloater_TypeDefinitionIndex = 3406;

	class UIMiniGameShootingDamageFloater : public Il2CppObject
	{
	public:
		MGSDamageFloater* DamageFont; // 0xD8
		Il2CppObject* pool; // 0xE0

		::System::Void OnEndDamageFloater(MGSDamageFloater* arg)
		{
			((::System::Void(*)(MGSDamageFloater*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGDAMAGEFLOATER_ONENDDAMAGEFLOATER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGDAMAGEFLOATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGDAMAGEFLOATER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnMiss(::MX::MinigameShooting::Character* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGDAMAGEFLOATER_ONMISS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGDAMAGEFLOATER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDamage(::MX::MinigameShooting::Character* arg, ::System::Boolean arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::System::Boolean, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGDAMAGEFLOATER_ONDAMAGE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

