#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BINXMLSQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x983FDD0)
#define SYSTEM_XML_BINXMLSQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x983FDE0)
#define SYSTEM_XML_BINXMLSQLMONEY_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x983FDF0)
#define SYSTEM_XML_BINXMLSQLMONEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x983FE40)

namespace System::Xml
{
	inline static constexpr unsigned int BinXmlSqlMoney_TypeDefinitionIndex = 27614;

	class BinXmlSqlMoney : public Il2CppObject
	{
	public:
		::System::Int64 data; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY_TODECIMAL_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

