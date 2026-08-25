#pragma once
#include "unitysdk.h"

class UIDirectPayGachaButtonInfo;
class UIBasicGachaButtonInfo;
class UITicketGachaButtonInfo;
namespace MX::Data::Excel { class ShopRecruitExcel; }
class UIPopup_GachaDesc;
namespace UnityEngine { class GameObject; }
class UILabel;

#define UIGACHABUTTONINFO_SETPURCHASEDATA_OFFSET UNITYSDK_OFFSET(0xA8ED70)
#define UIGACHABUTTONINFO__ONGACHADESCOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0xA943D0)
#define UIGACHABUTTONINFO_ONGACHADESCOPEN_OFFSET UNITYSDK_OFFSET(0xA94400)
#define UIGACHABUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA944E0)
#define UIGACHABUTTONINFO_SETTICKETREMAINDATE_OFFSET UNITYSDK_OFFSET(0xA944F0)

	inline static constexpr unsigned int UIGachaButtonInfo_TypeDefinitionIndex = 7942;

	class UIGachaButtonInfo : public Il2CppObject
	{
	public:
		UIDirectPayGachaButtonInfo* directPayGachaButtonInfo; // 0x18
		UIBasicGachaButtonInfo* basicGachaButtonInfo; // 0x20
		UITicketGachaButtonInfo* ticketGachaButtonInfo; // 0x28
		::System::Int64 _currentShopRecruitID; // 0x30

		::System::Void SetPurchaseData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABUTTONINFO_SETPURCHASEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OnGachaDescOpen_b__6_0(UIPopup_GachaDesc* arg)
		{
			((::System::Void(*)(UIPopup_GachaDesc*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABUTTONINFO__ONGACHADESCOPEN_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnGachaDescOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABUTTONINFO_ONGACHADESCOPEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTicketRemainDate(::UnityEngine::GameObject* arg, UILabel* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, UILabel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABUTTONINFO_SETTICKETREMAINDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

