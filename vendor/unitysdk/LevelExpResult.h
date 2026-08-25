#pragma once
#include "unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }

#define LEVELEXPRESULT_GET_MASTERCOINAMOUNT_OFFSET UNITYSDK_OFFSET(0xF54EA0)
#define LEVELEXPRESULT_GET_REMAINEDEXP_OFFSET UNITYSDK_OFFSET(0xF54EB0)
#define LEVELEXPRESULT_SET_EXPRATIO_OFFSET UNITYSDK_OFFSET(0xF54EC0)
#define LEVELEXPRESULT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF54ED0)
#define LEVELEXPRESULT_GET_EXP_OFFSET UNITYSDK_OFFSET(0xF54EE0)
#define LEVELEXPRESULT_SET_EXP_OFFSET UNITYSDK_OFFSET(0xF54EF0)
#define LEVELEXPRESULT_GET_MULTIPLIEDEXP_OFFSET UNITYSDK_OFFSET(0xF54F00)
#define LEVELEXPRESULT_SET_MULTIPLIEDEXP_OFFSET UNITYSDK_OFFSET(0xF54F10)
#define LEVELEXPRESULT_GET_EXPRATIO_OFFSET UNITYSDK_OFFSET(0xF54F20)
#define LEVELEXPRESULT_SET_MASTERCOINAMOUNT_OFFSET UNITYSDK_OFFSET(0xF54F30)
#define LEVELEXPRESULT_SET_REMAINEDEXP_OFFSET UNITYSDK_OFFSET(0xF54F40)
#define LEVELEXPRESULT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF54F50)

	inline static constexpr unsigned int LevelExpResult_TypeDefinitionIndex = 12219;

	class LevelExpResult : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x10
		::System::Int64 _Exp_k__BackingField; // 0x18
		::System::Int64 _RemainedExp_k__BackingField; // 0x20
		::System::Int64 _MultipliedExp_k__BackingField; // 0x28
		::MX::Core::Math::BasisPoint* _ExpRatio_k__BackingField; // 0x30
		::System::Int64 _MasterCoinAmount_k__BackingField; // 0x38

		::System::Int64 get_MasterCoinAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_GET_MASTERCOINAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RemainedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_GET_REMAINEDEXP_OFFSET))(nullptr);
		}

		::System::Void set_ExpRatio(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_SET_EXPRATIO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MultipliedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_GET_MULTIPLIEDEXP_OFFSET))(nullptr);
		}

		::System::Void set_MultipliedExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_SET_MULTIPLIEDEXP_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExpRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_GET_EXPRATIO_OFFSET))(nullptr);
		}

		::System::Void set_MasterCoinAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_SET_MASTERCOINAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RemainedExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_SET_REMAINEDEXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEVELEXPRESULT_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};

