#pragma once
#include "unitysdk.h"

class UICharacterCard;
namespace UnityEngine { class GameObject; }
class UISlider;
class MXButton;
class UILabel;
namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class SquadType; }

#define CAMPAIGNSLOT_INITMAIN_OFFSET UNITYSDK_OFFSET(0x2294530)
#define CAMPAIGNSLOT_INITSUPPORT_OFFSET UNITYSDK_OFFSET(0x22947A0)
#define CAMPAIGNSLOT_CANHEAL_OFFSET UNITYSDK_OFFSET(0x22949A0)
#define CAMPAIGNSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2294A20)
#define CAMPAIGNSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2294BC0)
#define CAMPAIGNSLOT_ONCLICKHEAL_OFFSET UNITYSDK_OFFSET(0x2294C60)
#define CAMPAIGNSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2294C70)

	inline static constexpr unsigned int CampaignSlot_TypeDefinitionIndex = 4713;

	class CampaignSlot : public Il2CppObject
	{
	public:
		UICharacterCard* Card; // 0x18
		::UnityEngine::GameObject* Unit; // 0x20
		::UnityEngine::GameObject* Empty; // 0x28
		UISlider* HPSlider; // 0x30
		::UnityEngine::GameObject* Hp0; // 0x38
		MXButton* HealObject; // 0x40
		UILabel* TSSUse; // 0x48
		::System::Int64 echelonEntityId; // 0x50
		::MX::Core::Math::BasisPoint* hpRate; // 0x58
		::System::Int64 characterID; // 0x60
		::FlatData::SquadType* SquadType; // 0x68

		::System::Void InitMain(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_INITMAIN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void InitSupport(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_INITSUPPORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_CANHEAL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void OnClickHeal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_ONCLICKHEAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

