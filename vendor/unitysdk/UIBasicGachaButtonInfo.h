#pragma once
#include "unitysdk.h"

class UIBasicGachaButton;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIBASICGACHABUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA75030)
#define UIBASICGACHABUTTONINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA75040)
#define UIBASICGACHABUTTONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA752C0)

	inline static constexpr unsigned int UIBasicGachaButtonInfo_TypeDefinitionIndex = 7864;

	class UIBasicGachaButtonInfo : public Il2CppObject
	{
	public:
		UIBasicGachaButton* oneGacha; // 0x18
		UIBasicGachaButton* tenGacha; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTONINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

	};

