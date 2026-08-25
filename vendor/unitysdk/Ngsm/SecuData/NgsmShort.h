#pragma once
#include "../../unitysdk.h"

#define NGSM_SECUDATA_NGSMSHORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5240)
#define NGSM_SECUDATA_NGSMSHORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5280)
#define NGSM_SECUDATA_NGSMSHORT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA52E0)
#define NGSM_SECUDATA_NGSMSHORT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA5340)
#define NGSM_SECUDATA_NGSMSHORT_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1EA53B0)
#define NGSM_SECUDATA_NGSMSHORT_SUBDATA_OFFSET UNITYSDK_OFFSET(0x1EA5420)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmShort_TypeDefinitionIndex = 21249;

	class NgsmShort : public <>c__DisplayClass82_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSHORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSHORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int16 GetData()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSHORT_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Int16 arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSHORT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(::System::Int16 arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSHORT_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(::System::Int16 arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSHORT_SUBDATA_OFFSET))(arg, nullptr);
		}

	};
}

