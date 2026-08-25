#pragma once
#include "unitysdk.h"

class UIGrid;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define GACHACHARINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA71DF0)
#define GACHACHARINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xA71E00)

	inline static constexpr unsigned int GachaCharInfo_TypeDefinitionIndex = 7859;

	class GachaCharInfo : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		::Il2CppArray<::System::Object*>* gachaCharInfoElements; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHACHARINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + GACHACHARINFO_REFRESH_OFFSET))(arg, nullptr);
		}

	};

