#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIScrollView;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIGACHAINFO_SELECTGACHANEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA79440)
#define UIGACHAINFO_SELECTGACHANEW_SETDATA_OFFSET UNITYSDK_OFFSET(0xA79450)

	inline static constexpr unsigned int UIGachaInfo_SelectGachaNew_TypeDefinitionIndex = 7872;

	class UIGachaInfo_SelectGachaNew : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* firstGetBonusDisplay; // 0xB8
		UIScrollView* descriptionScrollView; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_SELECTGACHANEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_SELECTGACHANEW_SETDATA_OFFSET))(arg, nullptr);
		}

	};

