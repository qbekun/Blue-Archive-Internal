#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIADMISSIONDISPLAY_SETTICKET_OFFSET UNITYSDK_OFFSET(0xB176E0)
#define UIADMISSIONDISPLAY_SETCOSTWITHCAMPAIGNHARDSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xB17960)
#define UIADMISSIONDISPLAY_SETTICKET_OFFSET UNITYSDK_OFFSET(0xB17A70)
#define UIADMISSIONDISPLAY_SETCOST_OFFSET UNITYSDK_OFFSET(0xB17790)
#define UIADMISSIONDISPLAY_SETCOST_OFFSET UNITYSDK_OFFSET(0xB17B30)
#define UIADMISSIONDISPLAY_SETCOST_OFFSET UNITYSDK_OFFSET(0xB17D10)
#define UIADMISSIONDISPLAY_SETCOSTWITHCAMPAIGNHARDSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xB17E70)
#define UIADMISSIONDISPLAY_SETHARDCOUNT_OFFSET UNITYSDK_OFFSET(0xB17EC0)
#define UIADMISSIONDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB17FA0)

	inline static constexpr unsigned int UIAdmissionDisplay_TypeDefinitionIndex = 8222;

	class UIAdmissionDisplay : public Il2CppObject
	{
	public:
		UILabel* hardStagePlayCountLabel; // 0x18
		UISprite* currencyImage; // 0x20
		UILabel* currentCurrencyLabel; // 0x28
		UILabel* restCurrencyLabel; // 0x30

		::System::Void SetTicket(::System::Int64 arg, ::FlatData::CurrencyTypes* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETTICKET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCostWithCampaignHardStageCount(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::CurrencyTypes* arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::CurrencyTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETCOSTWITHCAMPAIGNHARDSTAGECOUNT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetTicket(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETTICKET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCost(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::CurrencyTypes* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETCOST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetCost(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::GameLogic::Parcel::ParcelInfo* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETCOST_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetCost(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::MX::GameLogic::Parcel::ParcelInfo* arg6, Il2CppObject* arg7)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETCOST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void SetCostWithCampaignHardStageCount(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::GameLogic::Parcel::ParcelInfo* arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETCOSTWITHCAMPAIGNHARDSTAGECOUNT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetHardCount(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_SETHARDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIADMISSIONDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

