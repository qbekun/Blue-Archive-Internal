#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_SET_NICKNAMERESTRICTION_OFFSET UNITYSDK_OFFSET(0xFE1D20)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_SET_CALLNAMERESTRICTION_OFFSET UNITYSDK_OFFSET(0xFE1D30)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_GET_NICKNAMERESTRICTION_OFFSET UNITYSDK_OFFSET(0xFE1D40)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1D50)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_GET_COMMENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0xFE1D60)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_SET_COMMENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0xFE1D70)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_GET_CALLNAMERESTRICTION_OFFSET UNITYSDK_OFFSET(0xFE1D80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountRestrictionsDB_TypeDefinitionIndex = 12477;

	class AccountRestrictionsDB : public Il2CppObject
	{
	public:
		::System::Boolean _NicknameRestriction_k__BackingField; // 0x10
		::System::Boolean _CommentRestriction_k__BackingField; // 0x11
		::System::Boolean _CallnameRestriction_k__BackingField; // 0x12

		::System::Void set_NicknameRestriction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_SET_NICKNAMERESTRICTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_CallnameRestriction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_SET_CALLNAMERESTRICTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NicknameRestriction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_GET_NICKNAMERESTRICTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CommentRestriction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_GET_COMMENTRESTRICTION_OFFSET))(nullptr);
		}

		::System::Void set_CommentRestriction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_SET_COMMENTRESTRICTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CallnameRestriction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTRESTRICTIONSDB_GET_CALLNAMERESTRICTION_OFFSET))(nullptr);
		}

	};
}

