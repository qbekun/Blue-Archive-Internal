#pragma once
#include "unitysdk.h"

class GroundNode;
class BlockedArea;

#define <>C__DISPLAYCLASS88_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x138C2C0)
#define <>C__DISPLAYCLASS88_0__ISINBLOCKEDAREA_B__0_OFFSET UNITYSDK_OFFSET(0x13975C0)

	inline static constexpr unsigned int <>c__DisplayClass88_0_TypeDefinitionIndex = 14421;

	class <>c__DisplayClass88_0 : public Il2CppObject
	{
	public:
		GroundNode* node; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS88_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _IsInBlockedArea_b__0(BlockedArea* arg)
		{
			return ((::System::Boolean(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS88_0__ISINBLOCKEDAREA_B__0_OFFSET))(arg, nullptr);
		}

	};

