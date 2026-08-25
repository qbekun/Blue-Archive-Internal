#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define <>C__10`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__10`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__10`1__GETENTITIES_B__10_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__10`1_TypeDefinitionIndex = 9715;

	class <>c__10`1 : public Il2CppObject
	{
	public:
		Il2CppObject* __9; // 0x0
		Il2CppObject* __9__10_0; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__10`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__10`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetEntities_b__10_0(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__10`1__GETENTITIES_B__10_0_OFFSET))(arg, nullptr);
		}

	};

