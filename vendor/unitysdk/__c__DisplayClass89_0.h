#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define <>C__DISPLAYCLASS89_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A68B0)
#define <>C__DISPLAYCLASS89_0__CREATECURRENTCOLLISIONSHAPE_B__0_OFFSET UNITYSDK_OFFSET(0x11A7020)

	inline static constexpr unsigned int <>c__DisplayClass89_0_TypeDefinitionIndex = 13309;

	class <>c__DisplayClass89_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* battle; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS89_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _CreateCurrentCollisionShape_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS89_0__CREATECURRENTCOLLISIONSHAPE_B__0_OFFSET))(nullptr);
		}

	};

