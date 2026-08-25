#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIGACHAINFO__SETDATA_G__GETPERIODFROM|13_0_OFFSET UNITYSDK_OFFSET(0xA764F0)
#define UIGACHAINFO_GETSPECIALGACHAPERIODTEXT_OFFSET UNITYSDK_OFFSET(0xA76630)
#define UIGACHAINFO_SETFREEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA772E0)
#define UIGACHAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA77AD0)
#define UIGACHAINFO_GET_ISCOMPLETETUTORIAL_OFFSET UNITYSDK_OFFSET(0xA77A20)
#define UIGACHAINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA77AE0)
#define UIGACHAINFO_GETGACHAPERIODTEXT_OFFSET UNITYSDK_OFFSET(0xA780E0)
#define UIGACHAINFO__SETDATA_G__GETPERIODTO|13_1_OFFSET UNITYSDK_OFFSET(0xA78990)
#define UIGACHAINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA78AD0)
#define UIGACHAINFO_SETPICKUPFISTGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA78640)

	inline static constexpr unsigned int UIGachaInfo_TypeDefinitionIndex = 7867;

	class UIGachaInfo : public Il2CppObject
	{
	public:
		UILabel* freeRemainCountLabel; // 0x18
		::UnityEngine::GameObject* freeRemainCountObj; // 0x20
		::UnityEngine::Transform* periodScaleObject; // 0x28
		UILabel* periodLabel; // 0x30
		UILabel* gachaTitleLabel; // 0x38
		UILabel* gachaSubitleLabel; // 0x40
		UILabel* gachaDescriptionLabel; // 0x48
		::UnityEngine::Transform* pickupFirstGetRootTransform; // 0x50
		UILabel* pickupFirstGetLabel; // 0x58
		::MX::Data::Excel::ShopRecruitExcel* excel; // 0x60

		::System::String* _SetData_g__GetPeriodFrom|13_0(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO__SETDATA_G__GETPERIODFROM|13_0_OFFSET))(arg, nullptr);
		}

		::System::String* GetSpecialGachaPeriodText(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_GETSPECIALGACHAPERIODTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void SetFreeDisplay(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_SETFREEDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isCompleteTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_GET_ISCOMPLETETUTORIAL_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::String* GetGachaPeriodText(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_GETGACHAPERIODTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* _SetData_g__GetPeriodTo|13_1(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO__SETDATA_G__GETPERIODTO|13_1_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetPickupFistGetDisplay(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_SETPICKUPFISTGETDISPLAY_OFFSET))(arg, nullptr);
		}

	};

