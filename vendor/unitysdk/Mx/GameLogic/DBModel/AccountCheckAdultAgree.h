#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_GET_CHECKADULTAGREE_OFFSET UNITYSDK_OFFSET(0xFE1360)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_SET_CHECKADULTAGREE_OFFSET UNITYSDK_OFFSET(0xFE1370)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE1380)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_SET_ID_OFFSET UNITYSDK_OFFSET(0xFE1390)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_GET_ID_OFFSET UNITYSDK_OFFSET(0xFE13A0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE13B0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE13C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountCheckAdultAgree_TypeDefinitionIndex = 12471;

	class AccountCheckAdultAgree : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _AccountId_k__BackingField; // 0x18
		::System::Boolean _CheckAdultAgree_k__BackingField; // 0x20

		::System::Boolean get_CheckAdultAgree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_GET_CHECKADULTAGREE_OFFSET))(nullptr);
		}

		::System::Void set_CheckAdultAgree(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_SET_CHECKADULTAGREE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCHECKADULTAGREE_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

	};
}

