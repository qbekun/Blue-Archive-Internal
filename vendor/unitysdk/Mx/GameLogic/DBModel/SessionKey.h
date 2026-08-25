#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SESSIONKEY_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x100B020)
#define MX_GAMELOGIC_DBMODEL_SESSIONKEY_SET_MXTOKEN_OFFSET UNITYSDK_OFFSET(0x100B030)
#define MX_GAMELOGIC_DBMODEL_SESSIONKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B040)
#define MX_GAMELOGIC_DBMODEL_SESSIONKEY_GET_MXTOKEN_OFFSET UNITYSDK_OFFSET(0x100B050)
#define MX_GAMELOGIC_DBMODEL_SESSIONKEY_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x100B060)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SessionKey_TypeDefinitionIndex = 12720;

	class SessionKey : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x10
		::System::String* _MxToken_k__BackingField; // 0x18

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONKEY_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MxToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONKEY_SET_MXTOKEN_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONKEY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_MxToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONKEY_GET_MXTOKEN_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONKEY_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

	};
}

