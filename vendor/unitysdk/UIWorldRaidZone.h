#pragma once
#include "unitysdk.h"

#define UIWORLDRAIDZONE_SETBALLOONS_OFFSET UNITYSDK_OFFSET(0xC03930)
#define UIWORLDRAIDZONE_GETACTIVEBOSSLIST_OFFSET UNITYSDK_OFFSET(0xC06D70)
#define UIWORLDRAIDZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0A970)
#define UIWORLDRAIDZONE_SET_ISPHASECHANGEMODE_OFFSET UNITYSDK_OFFSET(0xC0A980)
#define UIWORLDRAIDZONE_GET_BALLOONS_OFFSET UNITYSDK_OFFSET(0xC01CA0)
#define UIWORLDRAIDZONE_SET_ISZONEOPENED_OFFSET UNITYSDK_OFFSET(0xC0A990)
#define UIWORLDRAIDZONE_SETWORLDBOSSHPONSYNC_OFFSET UNITYSDK_OFFSET(0xC03170)
#define UIWORLDRAIDZONE_REFRESH_OFFSET UNITYSDK_OFFSET(0xC01370)
#define UIWORLDRAIDZONE_GETANOTHERBOSSHIDEIDSBYBOSSSPAWN_OFFSET UNITYSDK_OFFSET(0xC0A5D0)
#define UIWORLDRAIDZONE_SETWORLDBOSSHPONENTER_OFFSET UNITYSDK_OFFSET(0xBFF900)
#define UIWORLDRAIDZONE_GET_ISZONEOPENED_OFFSET UNITYSDK_OFFSET(0xC0B810)
#define UIWORLDRAIDZONE_GET_ISPHASECHANGEMODE_OFFSET UNITYSDK_OFFSET(0xC0B820)

	inline static constexpr unsigned int UIWorldRaidZone_TypeDefinitionIndex = 8807;

	class UIWorldRaidZone : public Il2CppObject
	{
	public:
		Il2CppObject* balloons; // 0x18
		::System::Boolean _IsZoneOpened_k__BackingField; // 0x20
		::System::Boolean _IsPhaseChangeMode_k__BackingField; // 0x21

		::System::Void SetBalloons(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_SETBALLOONS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetActiveBossList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_GETACTIVEBOSSLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsPhaseChangeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_SET_ISPHASECHANGEMODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Balloons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_GET_BALLOONS_OFFSET))(nullptr);
		}

		::System::Void set_IsZoneOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_SET_ISZONEOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetWorldBossHpOnSync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_SETWORLDBOSSHPONSYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_REFRESH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAnotherBossHideIdsByBossSpawn()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_GETANOTHERBOSSHIDEIDSBYBOSSSPAWN_OFFSET))(nullptr);
		}

		::System::Void SetWorldBossHpOnEnter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_SETWORLDBOSSHPONENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsZoneOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_GET_ISZONEOPENED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPhaseChangeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONE_GET_ISPHASECHANGEMODE_OFFSET))(nullptr);
		}

	};

