#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }

#define CAFESOCIALUSEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C6840)
#define CAFESOCIALUSEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C6870)

	inline static constexpr unsigned int CafeSocialUserObject_TypeDefinitionIndex = 1390;

	class CafeSocialUserObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FriendDB* FriendDB; // 0x10
		::MX::GameLogic::DBModel::ClanMemberDB* ClanMemberDB; // 0x18

		::System::Void .ctor(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESOCIALUSEROBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESOCIALUSEROBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

