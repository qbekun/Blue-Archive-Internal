#pragma once
#include "../../unitysdk.h"

#define NGSM_SECUDATA_NGSMBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4690)
#define NGSM_SECUDATA_NGSMBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA46D0)
#define NGSM_SECUDATA_NGSMBYTE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4730)
#define NGSM_SECUDATA_NGSMBYTE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4790)
#define NGSM_SECUDATA_NGSMBYTE_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1EA4800)
#define NGSM_SECUDATA_NGSMBYTE_SUBDATA_OFFSET UNITYSDK_OFFSET(0x1EA4870)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmByte_TypeDefinitionIndex = 21243;

	class NgsmByte : public <>c__DisplayClass78_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMBYTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Byte GetData()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMBYTE_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMBYTE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMBYTE_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMBYTE_SUBDATA_OFFSET))(arg, nullptr);
		}

	};
}

