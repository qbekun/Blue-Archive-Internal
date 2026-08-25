#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class GroupInfo; }

#define <>C__DISPLAYCLASS26_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x146BF80)
#define <>C__DISPLAYCLASS26_0__PICKGROUPID_B__0_OFFSET UNITYSDK_OFFSET(0x146D130)

	inline static constexpr unsigned int <>c__DisplayClass26_0_TypeDefinitionIndex = 15115;

	class <>c__DisplayClass26_0 : public Il2CppObject
	{
	public:
		Il2CppObject* alreadySelected; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PickGroupId_b__0(::MX::MinigameShooting::GroupInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::MinigameShooting::GroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_0__PICKGROUPID_B__0_OFFSET))(arg, nullptr);
		}

	};

