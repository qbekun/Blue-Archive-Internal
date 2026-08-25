#pragma once
#include "unitysdk.h"

class UINewGachaButtonInfo;
class UIThreeStarSelectButtonInfo;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIDIRECTPAYGACHABUTTONINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA75320)
#define UIDIRECTPAYGACHABUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA75380)
#define UIDIRECTPAYGACHABUTTONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA75390)

	inline static constexpr unsigned int UIDirectPayGachaButtonInfo_TypeDefinitionIndex = 7865;

	class UIDirectPayGachaButtonInfo : public Il2CppObject
	{
	public:
		UINewGachaButtonInfo* newGachaButtonInfo; // 0x18
		UIThreeStarSelectButtonInfo* threeStarSelectButtonInfo; // 0x20
		::MX::Data::Excel::ShopRecruitExcel* excel; // 0x28

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDIRECTPAYGACHABUTTONINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDIRECTPAYGACHABUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIDIRECTPAYGACHABUTTONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

	};

