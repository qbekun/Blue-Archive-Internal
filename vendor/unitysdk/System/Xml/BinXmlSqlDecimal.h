#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BINXMLSQLDECIMAL_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0x983EF90)
#define SYSTEM_XML_BINXMLSQLDECIMAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x983EFA0)
#define SYSTEM_XML_BINXMLSQLDECIMAL_UINTFROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x983F370)
#define SYSTEM_XML_BINXMLSQLDECIMAL_MPDIV1_OFFSET UNITYSDK_OFFSET(0x983F590)
#define SYSTEM_XML_BINXMLSQLDECIMAL_MPNORMALIZE_OFFSET UNITYSDK_OFFSET(0x983F6B0)
#define SYSTEM_XML_BINXMLSQLDECIMAL_CHFROMDIGIT_OFFSET UNITYSDK_OFFSET(0x983F6F0)
#define SYSTEM_XML_BINXMLSQLDECIMAL_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x983F700)
#define SYSTEM_XML_BINXMLSQLDECIMAL_TRIMTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x983F3E0)
#define SYSTEM_XML_BINXMLSQLDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x983F7F0)
#define SYSTEM_XML_BINXMLSQLDECIMAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x983FC00)

namespace System::Xml
{
	inline static constexpr unsigned int BinXmlSqlDecimal_TypeDefinitionIndex = 27613;

	class BinXmlSqlDecimal : public Il2CppObject
	{
	public:
		::System::Byte m_bLen; // 0x10
		::System::Byte m_bPrec; // 0x11
		::System::Byte m_bScale; // 0x12
		::System::Byte m_bSign; // 0x13
		::System::UInt32 m_data1; // 0x14
		::System::UInt32 m_data2; // 0x18
		::System::UInt32 m_data3; // 0x1C
		::System::UInt32 m_data4; // 0x20
		::System::Byte NUMERIC_MAX_PRECISION; // 0x0
		::System::Byte MaxPrecision; // 0x1
		::System::Byte MaxScale; // 0x2
		::System::Int32 x_cNumeMax; // 0x4
		::System::Int64 x_lInt32Base; // 0x8
		::System::UInt64 x_ulInt32Base; // 0x10
		::System::UInt64 x_ulInt32BaseForMod; // 0x18
		::System::UInt64 x_llMax; // 0x20
		::System::Double DUINT_BASE; // 0x28
		::System::Double DUINT_BASE2; // 0x30
		::System::Double DUINT_BASE3; // 0x38
		::Il2CppArray<::System::Object*>* x_rgulShiftBase; // 0x40
		::Il2CppArray<::System::Object*>* rgCLenFromPrec; // 0x48

		::System::Boolean get_IsPositive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_GET_ISPOSITIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 UIntFromByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_UINTFROMBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MpDiv1(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::UInt32 arg, uint32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_MPDIV1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void MpNormalize(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_MPNORMALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Char ChFromDigit(::System::UInt32 arg)
		{
			return (return (::System::Char(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_CHFROMDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_TODECIMAL_OFFSET))(nullptr);
		}

		::System::Void TrimTrailingZeros()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_TRIMTRAILINGZEROS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

