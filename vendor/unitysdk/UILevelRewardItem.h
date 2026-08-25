#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIParcelCard;
class UILabel;
namespace MX::Data::Excel { class AccountLevelRewardExcel; }

#define UILEVELREWARDITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2645910)
#define UILEVELREWARDITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2645990)
#define UILEVELREWARDITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x26459A0)
#define UILEVELREWARDITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x2645B50)

	inline static constexpr unsigned int UILevelRewardItem_TypeDefinitionIndex = 6622;

	class UILevelRewardItem : public Il2CppObject
	{
	public:
		::System::Int64 uniqueId; // 0x18
		::UnityEngine::GameObject* enabledMark; // 0x20
		::UnityEngine::GameObject* disabledMark; // 0x28
		::UnityEngine::GameObject* redDot; // 0x30
		UIParcelCard* card; // 0x38
		UILabel* levelLabel; // 0x40
		::UnityEngine::GameObject* dim; // 0x48

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELREWARDITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELREWARDITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::AccountLevelRewardExcel* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::AccountLevelRewardExcel*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILEVELREWARDITEM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELREWARDITEM_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};

