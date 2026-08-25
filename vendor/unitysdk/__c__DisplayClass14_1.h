#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentConcentrationCardExcel; }
namespace MX::Data { class EventContentConcentrationRewardInfo; }

#define <>C__DISPLAYCLASS14_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xE07B20)
#define <>C__DISPLAYCLASS14_1__GETSKIPREWARDPARCELS_B__4_OFFSET UNITYSDK_OFFSET(0xE0B410)

	inline static constexpr unsigned int <>c__DisplayClass14_1_TypeDefinitionIndex = 10263;

	class <>c__DisplayClass14_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentConcentrationCardExcel* remainCardExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetSkipRewardParcels_b__4(::MX::Data::EventContentConcentrationRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentConcentrationRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_1__GETSKIPREWARDPARCELS_B__4_OFFSET))(arg, nullptr);
		}

	};

