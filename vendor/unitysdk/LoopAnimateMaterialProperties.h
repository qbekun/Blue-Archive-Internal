#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define LOOPANIMATEMATERIALPROPERTIES_AWAKE_OFFSET UNITYSDK_OFFSET(0x20D26C0)
#define LOOPANIMATEMATERIALPROPERTIES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D2860)
#define LOOPANIMATEMATERIALPROPERTIES_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D2870)
#define LOOPANIMATEMATERIALPROPERTIES_INITIALIZETIMECURVES_OFFSET UNITYSDK_OFFSET(0x20D26E0)
#define LOOPANIMATEMATERIALPROPERTIES_INITIALIZEPERIODICRANDOMS_OFFSET UNITYSDK_OFFSET(0x20D2780)
#define LOOPANIMATEMATERIALPROPERTIES_RESETTIMECURVES_OFFSET UNITYSDK_OFFSET(0x20D2890)
#define LOOPANIMATEMATERIALPROPERTIES_RESETPERIODICRANDOMS_OFFSET UNITYSDK_OFFSET(0x20D2950)
#define LOOPANIMATEMATERIALPROPERTIES_UPDATE_OFFSET UNITYSDK_OFFSET(0x20D2C50)
#define LOOPANIMATEMATERIALPROPERTIES_UPDATETIMECURVES_OFFSET UNITYSDK_OFFSET(0x20D2C70)
#define LOOPANIMATEMATERIALPROPERTIES_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x20D31F0)
#define LOOPANIMATEMATERIALPROPERTIES_GETLOOPFLOAT_OFFSET UNITYSDK_OFFSET(0x20D3250)
#define LOOPANIMATEMATERIALPROPERTIES_GETPINGPONGFLOAT_OFFSET UNITYSDK_OFFSET(0x20D3200)
#define LOOPANIMATEMATERIALPROPERTIES_UPDATEPERIODICRANDOMS_OFFSET UNITYSDK_OFFSET(0x20D2E90)
#define LOOPANIMATEMATERIALPROPERTIES_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x20D2AD0)
#define LOOPANIMATEMATERIALPROPERTIES_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x20D3270)
#define LOOPANIMATEMATERIALPROPERTIES_SETINT_OFFSET UNITYSDK_OFFSET(0x20D2BA0)
#define LOOPANIMATEMATERIALPROPERTIES_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x20D2A00)
#define LOOPANIMATEMATERIALPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D3310)

	inline static constexpr unsigned int LoopAnimateMaterialProperties_TypeDefinitionIndex = 3717;

	class LoopAnimateMaterialProperties : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Materials; // 0x18
		::Il2CppArray<::System::Object*>* TimeCurves; // 0x20
		::Il2CppArray<::System::Object*>* PeriodicRandoms; // 0x28

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void InitializeTimeCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_INITIALIZETIMECURVES_OFFSET))(nullptr);
		}

		::System::Void InitializePeriodicRandoms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_INITIALIZEPERIODICRANDOMS_OFFSET))(nullptr);
		}

		::System::Void ResetTimeCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_RESETTIMECURVES_OFFSET))(nullptr);
		}

		::System::Void ResetPeriodicRandoms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_RESETPERIODICRANDOMS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateTimeCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_UPDATETIMECURVES_OFFSET))(nullptr);
		}

		::System::Single GetDeltaTime(::System::Boolean arg)
		{
			return ((::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_GETDELTATIME_OFFSET))(arg, nullptr);
		}

		::System::Single GetLoopFloat(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_GETLOOPFLOAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single GetPingPongFloat(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_GETPINGPONGFLOAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdatePeriodicRandoms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_UPDATEPERIODICRANDOMS_OFFSET))(nullptr);
		}

		::System::Void SetFloat(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_SETFLOAT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetFloat(::UnityEngine::Material* arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_SETFLOAT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetInt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_SETINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single GetFloat(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_GETFLOAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPANIMATEMATERIALPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};

