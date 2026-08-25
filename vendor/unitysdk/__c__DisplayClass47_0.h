#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundFormationBeacon; }
class BlockedArea;

#define <>C__DISPLAYCLASS47_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1399630)
#define <>C__DISPLAYCLASS47_0__GETPATHTOCURPOSITIONINFORMATIONBEACON_B__0_OFFSET UNITYSDK_OFFSET(0x13999E0)

	inline static constexpr unsigned int <>c__DisplayClass47_0_TypeDefinitionIndex = 14436;

	class <>c__DisplayClass47_0 : public Il2CppObject
	{
	public:
		::System::Int32 i; // 0x10
		::MX::Logic::Battles::GroundFormationBeacon* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS47_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetPathToCurPositionInFormationBeacon_b__0(BlockedArea* arg)
		{
			return ((::System::Boolean(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS47_0__GETPATHTOCURPOSITIONINFORMATIONBEACON_B__0_OFFSET))(arg, nullptr);
		}

	};

