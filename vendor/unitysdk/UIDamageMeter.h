#pragma once
#include "unitysdk.h"

class UIGrid;
class ButtonActivator;
namespace MX::Logic::Data { class RaidMemberCollection; }
namespace MX::Logic::Battles { class DamageUpdatedEventArgs; }

#define UIDAMAGEMETER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2235690)
#define UIDAMAGEMETER_TURNON_OFFSET UNITYSDK_OFFSET(0x2235870)
#define UIDAMAGEMETER_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0x22358A0)
#define UIDAMAGEMETER_GET_PLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x22358F0)
#define UIDAMAGEMETER_ONCLICKMETER_OFFSET UNITYSDK_OFFSET(0x2235940)
#define UIDAMAGEMETER_SET_HIGHESTDAMAGE_OFFSET UNITYSDK_OFFSET(0x2235970)
#define UIDAMAGEMETER_CHECKNEWMEMBER_OFFSET UNITYSDK_OFFSET(0x2235980)
#define UIDAMAGEMETER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22360F0)
#define UIDAMAGEMETER_REFRESHDAMAGEMETER_OFFSET UNITYSDK_OFFSET(0x22364C0)
#define UIDAMAGEMETER_TURNOFF_OFFSET UNITYSDK_OFFSET(0x2236FD0)
#define UIDAMAGEMETER_GET_HIGHESTDAMAGE_OFFSET UNITYSDK_OFFSET(0x2237000)
#define UIDAMAGEMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2237010)

	inline static constexpr unsigned int UIDamageMeter_TypeDefinitionIndex = 4461;

	class UIDamageMeter : public Il2CppObject
	{
	public:
		::System::Int32 PlayerMeterUIIndex; // 0x0
		UIGrid* grid; // 0x18
		ButtonActivator* meterButton; // 0x20
		Il2CppObject* uiElements; // 0x28
		::System::Int64 _HighestDamage_k__BackingField; // 0x30
		::System::Boolean memberInit; // 0x38
		Il2CppObject* memberNameList; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void TurnOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_TURNON_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayerRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_GET_PLAYERRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_GET_PLAYERDAMAGE_OFFSET))(nullptr);
		}

		::System::Void OnClickMeter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_ONCLICKMETER_OFFSET))(nullptr);
		}

		::System::Void set_HighestDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_SET_HIGHESTDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckNewMember(::MX::Logic::Data::RaidMemberCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidMemberCollection*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_CHECKNEWMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RefreshDamageMeter(::MX::Logic::Battles::DamageUpdatedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::DamageUpdatedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_REFRESHDAMAGEMETER_OFFSET))(arg, nullptr);
		}

		::System::Void TurnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_TURNOFF_OFFSET))(nullptr);
		}

		::System::Int64 get_HighestDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_GET_HIGHESTDAMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDAMAGEMETER_.CTOR_OFFSET))(nullptr);
		}

	};

