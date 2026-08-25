#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UIProgressBar;
namespace UnityEngine { class Vector3; }

#define UIDAMAGEMETERELEMENT_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x22371C0)
#define UIDAMAGEMETERELEMENT_SET_NEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x22371D0)
#define UIDAMAGEMETERELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x2236E20)
#define UIDAMAGEMETERELEMENT_SETUSER_OFFSET UNITYSDK_OFFSET(0x2236430)
#define UIDAMAGEMETERELEMENT_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x22371E0)
#define UIDAMAGEMETERELEMENT_GET_DAMAGEBAR_OFFSET UNITYSDK_OFFSET(0x22371F0)
#define UIDAMAGEMETERELEMENT_GET_TARGETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x2237200)
#define UIDAMAGEMETERELEMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x2236350)
#define UIDAMAGEMETERELEMENT_GET_TARGETGAUGE_OFFSET UNITYSDK_OFFSET(0x2237220)
#define UIDAMAGEMETERELEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2237230)
#define UIDAMAGEMETERELEMENT_SET_TARGETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x2237480)
#define UIDAMAGEMETERELEMENT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2237490)
#define UIDAMAGEMETERELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22374A0)
#define UIDAMAGEMETERELEMENT_GET_RANK_OFFSET UNITYSDK_OFFSET(0x22374F0)
#define UIDAMAGEMETERELEMENT_SET_RANK_OFFSET UNITYSDK_OFFSET(0x2237500)
#define UIDAMAGEMETERELEMENT_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x2237510)
#define UIDAMAGEMETERELEMENT_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2237520)
#define UIDAMAGEMETERELEMENT_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x2237530)
#define UIDAMAGEMETERELEMENT_GET_NEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x2237540)
#define UIDAMAGEMETERELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2237550)
#define UIDAMAGEMETERELEMENT_SET_TARGETGAUGE_OFFSET UNITYSDK_OFFSET(0x2237560)
#define UIDAMAGEMETERELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2237570)

	inline static constexpr unsigned int UIDamageMeterElement_TypeDefinitionIndex = 4462;

	class UIDamageMeterElement : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		UILabel* rankLabel; // 0x20
		UILabel* nameLabel; // 0x28
		UILabel* damageLabel; // 0x30
		UIProgressBar* damageBar; // 0x38
		::System::Single speed; // 0x40
		::System::Int64 _Damage_k__BackingField; // 0x48
		::System::Int64 _ServerId_k__BackingField; // 0x50
		::System::Int32 _Rank_k__BackingField; // 0x58
		::System::Boolean _IsInitialized_k__BackingField; // 0x5C
		::System::Boolean _NeedRefresh_k__BackingField; // 0x5D
		::System::Single _targetGauge_k__BackingField; // 0x60
		::UnityEngine::Vector3* _targetLocalPosition_k__BackingField; // 0x64

		::System::Int64 get_Damage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_DAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_NeedRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_NEEDREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::System::Int32 arg, ::System::Single arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_REFRESH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetUser(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SETUSER_OFFSET))(arg, arg2, arg3, str, nullptr);
		}

		::System::Void set_Damage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_DAMAGE_OFFSET))(arg, nullptr);
		}

		UIProgressBar* get_DamageBar()
		{
			return ((UIProgressBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_DAMAGEBAR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_targetLocalPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_TARGETLOCALPOSITION_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_CLEAR_OFFSET))(nullptr);
		}

		::System::Single get_targetGauge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_TARGETGAUGE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_targetLocalPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_TARGETLOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_Rank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_GET_NEEDREFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_targetGauge(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_SET_TARGETGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETERELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

