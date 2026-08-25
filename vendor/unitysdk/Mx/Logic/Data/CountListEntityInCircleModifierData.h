#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BaseEntityType; }
namespace MX::Logic::Skills { class TargetEntityType; }

#define MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA550)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListEntityInCircleModifierData_TypeDefinitionIndex = 13389;

	class CountListEntityInCircleModifierData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BaseEntityType* BaseEntity; // 0x28
		::System::Int32 RangeMin; // 0x2C
		::System::Int32 RangeMax; // 0x30
		::MX::Logic::Skills::TargetEntityType* ApplyEntityType; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

