#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x929FAA0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x92A0210)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x92A0290)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x92A02A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A02B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x929FAB0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x92A0CD0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_INVARIANTINFO_OFFSET UNITYSDK_OFFSET(0x92A0D50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x92A0EE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x92A1190)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x92A1200)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A1210)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92A1220)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x92A1230)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x92A12B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x92A1330)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A13B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x92A13C0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET UNITYSDK_OFFSET(0x92A1090)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x92A13D0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x92A13E0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x92A1480)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x92A1490)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x92A14A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x92A14B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x92A14C0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET UNITYSDK_OFFSET(0x92A14D0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x92A14E0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A14F0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A1500)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A1560)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x92A1570)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x92A1580)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET UNITYSDK_OFFSET(0x92A1590)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x92A15A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A15B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92A15C0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x92A15D0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERMILLESYMBOL_OFFSET UNITYSDK_OFFSET(0x92A15E0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x92A15F0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x92A0E10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x92A1680)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEFLOATINGPOINT_OFFSET UNITYSDK_OFFSET(0x92A1760)

namespace System::Globalization
{
	inline static constexpr unsigned int NumberFormatInfo_TypeDefinitionIndex = 24996;

	class NumberFormatInfo : public Il2CppObject
	{
	public:
		::System::Globalization::NumberFormatInfo* invariantInfo; // 0x0
		::Il2CppArray<::System::Object*>* numberGroupSizes; // 0x10
		::Il2CppArray<::System::Object*>* currencyGroupSizes; // 0x18
		::Il2CppArray<::System::Object*>* percentGroupSizes; // 0x20
		::System::String* positiveSign; // 0x28
		::System::String* negativeSign; // 0x30
		::System::String* numberDecimalSeparator; // 0x38
		::System::String* numberGroupSeparator; // 0x40
		::System::String* currencyGroupSeparator; // 0x48
		::System::String* currencyDecimalSeparator; // 0x50
		::System::String* currencySymbol; // 0x58
		::System::String* ansiCurrencySymbol; // 0x60
		::System::String* nanSymbol; // 0x68
		::System::String* positiveInfinitySymbol; // 0x70
		::System::String* negativeInfinitySymbol; // 0x78
		::System::String* percentDecimalSeparator; // 0x80
		::System::String* percentGroupSeparator; // 0x88
		::System::String* percentSymbol; // 0x90
		::System::String* perMilleSymbol; // 0x98
		::Il2CppArray<::System::Object*>* nativeDigits; // 0xA0
		::System::Int32 m_dataItem; // 0xA8
		::System::Int32 numberDecimalDigits; // 0xAC
		::System::Int32 currencyDecimalDigits; // 0xB0
		::System::Int32 currencyPositivePattern; // 0xB4
		::System::Int32 currencyNegativePattern; // 0xB8
		::System::Int32 numberNegativePattern; // 0xBC
		::System::Int32 percentPositivePattern; // 0xC0
		::System::Int32 percentNegativePattern; // 0xC4
		::System::Int32 percentDecimalDigits; // 0xC8
		::System::Int32 digitSubstitution; // 0xCC
		::System::Boolean isReadOnly; // 0xD0
		::System::Boolean m_useUserOverride; // 0xD1
		::System::Boolean m_isInvariant; // 0xD2
		::System::Boolean validForParseAsNumber; // 0xD3
		::System::Boolean validForParseAsCurrency; // 0xD4
		::System::Globalization::NumberStyles* InvalidNumberStyles; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONSERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void VerifyDecimalSeparator(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDECIMALSEPARATOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Globalization::CultureData* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void VerifyWritable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYWRITABLE_OFFSET))(nullptr);
		}

		::System::Globalization::NumberFormatInfo* get_InvariantInfo()
		{
			return (return (::System::Globalization::NumberFormatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_INVARIANTINFO_OFFSET))(nullptr);
		}

		::System::Globalization::NumberFormatInfo* GetInstance(::System::IFormatProvider* arg)
		{
			return (return (::System::Globalization::NumberFormatInfo*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrencyDecimalDigits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALDIGITS_OFFSET))(nullptr);
		}

		::System::String* get_CurrencyDecimalSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CurrencyGroupSizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NumberGroupSizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PercentGroupSizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET))(nullptr);
		}

		::System::String* get_CurrencyGroupSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET))(nullptr);
		}

		::System::String* get_CurrencySymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET))(nullptr);
		}

		::System::Globalization::NumberFormatInfo* get_CurrentInfo()
		{
			return (return (::System::Globalization::NumberFormatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET))(nullptr);
		}

		::System::String* get_NaNSymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET))(nullptr);
		}

		::System::Void set_NaNSymbol(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NANSYMBOL_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CurrencyNegativePattern()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET))(nullptr);
		}

		::System::Int32 get_NumberNegativePattern()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET))(nullptr);
		}

		::System::Int32 get_PercentPositivePattern()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTPOSITIVEPATTERN_OFFSET))(nullptr);
		}

		::System::Int32 get_PercentNegativePattern()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTNEGATIVEPATTERN_OFFSET))(nullptr);
		}

		::System::String* get_NegativeInfinitySymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVEINFINITYSYMBOL_OFFSET))(nullptr);
		}

		::System::String* get_NegativeSign()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET))(nullptr);
		}

		::System::Int32 get_NumberDecimalDigits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET))(nullptr);
		}

		::System::String* get_NumberDecimalSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALSEPARATOR_OFFSET))(nullptr);
		}

		::System::Void set_NumberDecimalSeparator(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALSEPARATOR_OFFSET))(str, nullptr);
		}

		::System::String* get_NumberGroupSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSEPARATOR_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrencyPositivePattern()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYPOSITIVEPATTERN_OFFSET))(nullptr);
		}

		::System::String* get_PositiveInfinitySymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET))(nullptr);
		}

		::System::String* get_PositiveSign()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET))(nullptr);
		}

		::System::Int32 get_PercentDecimalDigits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET))(nullptr);
		}

		::System::String* get_PercentDecimalSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALSEPARATOR_OFFSET))(nullptr);
		}

		::System::String* get_PercentGroupSeparator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSEPARATOR_OFFSET))(nullptr);
		}

		::System::String* get_PercentSymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTSYMBOL_OFFSET))(nullptr);
		}

		::System::String* get_PerMilleSymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERMILLESYMBOL_OFFSET))(nullptr);
		}

		::System::Object* GetFormat(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Globalization::NumberFormatInfo* ReadOnly(::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Globalization::NumberFormatInfo*(*)(::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateParseStyleInteger(::System::Globalization::NumberStyles* arg)
		{
			((::System::Void(*)(::System::Globalization::NumberStyles*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateParseStyleFloatingPoint(::System::Globalization::NumberStyles* arg)
		{
			((::System::Void(*)(::System::Globalization::NumberStyles*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEFLOATINGPOINT_OFFSET))(arg, nullptr);
		}

	};
}

