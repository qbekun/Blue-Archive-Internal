#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class TooltipTargetParcelTracker;

#define TOOLTIPTARGETPARCELDISPLAY_GET_ADDEDCOUNT_OFFSET UNITYSDK_OFFSET(0x274B950)
#define TOOLTIPTARGETPARCELDISPLAY_SET_ADDEDCOUNT_OFFSET UNITYSDK_OFFSET(0x274B960)
#define TOOLTIPTARGETPARCELDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x274BAD0)
#define TOOLTIPTARGETPARCELDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x274BCC0)
#define TOOLTIPTARGETPARCELDISPLAY_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x274B970)
#define TOOLTIPTARGETPARCELDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x274BE50)

	inline static constexpr unsigned int TooltipTargetParcelDisplay_TypeDefinitionIndex = 7243;

	class TooltipTargetParcelDisplay : public Il2CppObject
	{
	public:
		UITexture* parcelImage; // 0x18
		UISprite* rarityImage; // 0x20
		UILabel* amountLabel; // 0x28
		::System::Int64 targetCount; // 0x30
		::System::Int64 currentCount; // 0x38
		::System::Int64 _addedCount; // 0x40

		::System::Int64 get_AddedCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELDISPLAY_GET_ADDEDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AddedCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELDISPLAY_SET_ADDEDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELDISPLAY_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELDISPLAY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELDISPLAY_UPDATELABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

