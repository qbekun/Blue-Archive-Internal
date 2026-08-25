#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanMemberDB; }

#define <>C__DISPLAYCLASS10_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x226E590)
#define <>C__DISPLAYCLASS10_2__GETSOCIALLIST_B__8_OFFSET UNITYSDK_OFFSET(0x226F150)

	inline static constexpr unsigned int <>c__DisplayClass10_2_TypeDefinitionIndex = 4623;

	class <>c__DisplayClass10_2 : public Il2CppObject
	{
	public:
		::System::Int64 currentCafeAccountId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS10_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetSocialList_b__8(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS10_2__GETSOCIALLIST_B__8_OFFSET))(arg, nullptr);
		}

	};

