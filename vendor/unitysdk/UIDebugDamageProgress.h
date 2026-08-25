#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UIProgressBar;
namespace MX::Logic::Battles::Summary { class HeroSummary; }

#define UIDEBUGDAMAGEPROGRESS_SET_OFFSET UNITYSDK_OFFSET(0x23BD880)
#define UIDEBUGDAMAGEPROGRESS_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x23BE220)
#define UIDEBUGDAMAGEPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BE230)
#define UIDEBUGDAMAGEPROGRESS_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x23BE240)
#define UIDEBUGDAMAGEPROGRESS_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x23BE250)
#define UIDEBUGDAMAGEPROGRESS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x23BE260)

	inline static constexpr unsigned int UIDebugDamageProgress_TypeDefinitionIndex = 5248;

	class UIDebugDamageProgress : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x18
		UILabel* damageLabel; // 0x20
		UIProgressBar* progress; // 0x28
		::MX::Logic::Battles::Summary::HeroSummary* _Summary_k__BackingField; // 0x30
		::System::Int64 _Value_k__BackingField; // 0x38

		::System::Void Set(::MX::Logic::Battles::Summary::HeroSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::HeroSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEPROGRESS_SET_OFFSET))(arg, nullptr);
		}

		::System::Void set_Value(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEPROGRESS_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEPROGRESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::HeroSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::HeroSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEPROGRESS_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::HeroSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::HeroSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEPROGRESS_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEBUGDAMAGEPROGRESS_GET_VALUE_OFFSET))(nullptr);
		}

	};

