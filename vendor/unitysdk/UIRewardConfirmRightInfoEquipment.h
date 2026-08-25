#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EquipmentExcel; }

#define UIREWARDCONFIRMRIGHTINFOEQUIPMENT_SETINFOEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x27B4660)
#define UIREWARDCONFIRMRIGHTINFOEQUIPMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B4CB0)

	inline static constexpr unsigned int UIRewardConfirmRightInfoEquipment_TypeDefinitionIndex = 7530;

	class UIRewardConfirmRightInfoEquipment : public Il2CppObject
	{
	public:
		::System::Void SetInfoEquipment(::MX::Data::Excel::EquipmentExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOEQUIPMENT_SETINFOEQUIPMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRIGHTINFOEQUIPMENT_.CTOR_OFFSET))(nullptr);
		}

	};

