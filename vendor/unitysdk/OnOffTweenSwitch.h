#pragma once
#include "unitysdk.h"

#define ONOFFTWEENSWITCH_GET_ONDURATION_OFFSET UNITYSDK_OFFSET(0xC198A0)
#define ONOFFTWEENSWITCH_GET_OFFDURATION_OFFSET UNITYSDK_OFFSET(0xC198B0)
#define ONOFFTWEENSWITCH_TURNOFF_OFFSET UNITYSDK_OFFSET(0xC198C0)
#define ONOFFTWEENSWITCH_TURNON_OFFSET UNITYSDK_OFFSET(0xC199A0)
#define ONOFFTWEENSWITCH_SAMPLE_OFFSET UNITYSDK_OFFSET(0xC19A80)
#define ONOFFTWEENSWITCH_SET_ONDURATION_OFFSET UNITYSDK_OFFSET(0xC19DA0)
#define ONOFFTWEENSWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xC19DB0)
#define ONOFFTWEENSWITCH_SET_OFFDURATION_OFFSET UNITYSDK_OFFSET(0xC19DC0)
#define ONOFFTWEENSWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0xC19DD0)

	inline static constexpr unsigned int OnOffTweenSwitch_TypeDefinitionIndex = 8852;

	class OnOffTweenSwitch : public Il2CppObject
	{
	public:
		Il2CppObject* onTweens; // 0x18
		Il2CppObject* offTweens; // 0x20
		::System::Single _OnDuration_k__BackingField; // 0x28
		::System::Single _OffDuration_k__BackingField; // 0x2C

		::System::Single get_OnDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_GET_ONDURATION_OFFSET))(nullptr);
		}

		::System::Single get_OffDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_GET_OFFDURATION_OFFSET))(nullptr);
		}

		::System::Void TurnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_TURNOFF_OFFSET))(nullptr);
		}

		::System::Void TurnOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_TURNON_OFFSET))(nullptr);
		}

		::System::Void Sample(::System::Single arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_SAMPLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_OnDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_SET_ONDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OffDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_SET_OFFDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFTWEENSWITCH_AWAKE_OFFSET))(nullptr);
		}

	};

