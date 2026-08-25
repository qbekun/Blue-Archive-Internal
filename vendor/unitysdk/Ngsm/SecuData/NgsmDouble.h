#pragma once
#include "../../unitysdk.h"

#define NGSM_SECUDATA_NGSMDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA48E0)
#define NGSM_SECUDATA_NGSMDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4920)
#define NGSM_SECUDATA_NGSMDOUBLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4990)
#define NGSM_SECUDATA_NGSMDOUBLE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA49F0)
#define NGSM_SECUDATA_NGSMDOUBLE_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1EA4A60)
#define NGSM_SECUDATA_NGSMDOUBLE_SUBDATA_OFFSET UNITYSDK_OFFSET(0x1EA4AD0)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmDouble_TypeDefinitionIndex = 21244;

	class NgsmDouble : public <>c__DisplayClass81_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMDOUBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Double GetData()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMDOUBLE_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMDOUBLE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMDOUBLE_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMDOUBLE_SUBDATA_OFFSET))(arg, nullptr);
		}

	};
}

