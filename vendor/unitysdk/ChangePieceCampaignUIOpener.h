#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define CHANGEPIECECAMPAIGNUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C7A50)
#define CHANGEPIECECAMPAIGNUIOPENER_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26C7AF0)
#define CHANGEPIECECAMPAIGNUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C7B00)
#define CHANGEPIECECAMPAIGNUIOPENER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26C7B10)
#define CHANGEPIECECAMPAIGNUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C7B20)

	inline static constexpr unsigned int ChangePieceCampaignUIOpener_TypeDefinitionIndex = 6991;

	class ChangePieceCampaignUIOpener : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEPIECECAMPAIGNUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEPIECECAMPAIGNUIOPENER_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEPIECECAMPAIGNUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEPIECECAMPAIGNUIOPENER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEPIECECAMPAIGNUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

