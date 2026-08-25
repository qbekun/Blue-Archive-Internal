#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class GroupInfo; }

#define <>C__DISPLAYCLASS26_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x146D210)
#define <>C__DISPLAYCLASS26_1__PICKGROUPID_B__2_OFFSET UNITYSDK_OFFSET(0x146D220)

	inline static constexpr unsigned int <>c__DisplayClass26_1_TypeDefinitionIndex = 15116;

	class <>c__DisplayClass26_1 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::GroupInfo* group; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PickGroupId_b__2(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_1__PICKGROUPID_B__2_OFFSET))(arg, nullptr);
		}

	};

