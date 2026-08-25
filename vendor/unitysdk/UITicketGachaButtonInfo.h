#pragma once
#include "unitysdk.h"

class UITicketGachaButton;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UITICKETGACHABUTTONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA7F300)
#define UITICKETGACHABUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7F380)
#define UITICKETGACHABUTTONINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA7F390)

	inline static constexpr unsigned int UITicketGachaButtonInfo_TypeDefinitionIndex = 7891;

	class UITicketGachaButtonInfo : public Il2CppObject
	{
	public:
		UITicketGachaButton* oneGacha; // 0x18
		UITicketGachaButton* tenGacha; // 0x20

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTONINFO_INITIALIZE_OFFSET))(nullptr);
		}

	};

