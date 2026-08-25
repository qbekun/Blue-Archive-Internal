#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundFormationBeacon; }
class BlockedArea;

#define <>C__DISPLAYCLASS47_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1399640)
#define <>C__DISPLAYCLASS47_1__GETPATHTOCURPOSITIONINFORMATIONBEACON_B__1_OFFSET UNITYSDK_OFFSET(0x1399AA0)

	inline static constexpr unsigned int <>c__DisplayClass47_1_TypeDefinitionIndex = 14437;

	class <>c__DisplayClass47_1 : public Il2CppObject
	{
	public:
		::System::Int32 i; // 0x10
		::MX::Logic::Battles::GroundFormationBeacon* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS47_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetPathToCurPositionInFormationBeacon_b__1(BlockedArea* arg)
		{
			return ((::System::Boolean(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS47_1__GETPATHTOCURPOSITIONINFORMATIONBEACON_B__1_OFFSET))(arg, nullptr);
		}

	};

