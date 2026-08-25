#pragma once
#include "../../unitysdk.h"

#define NGSM_SECUDATA_NGSMFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4B40)
#define NGSM_SECUDATA_NGSMFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4B80)
#define NGSM_SECUDATA_NGSMFLOAT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4BF0)
#define NGSM_SECUDATA_NGSMFLOAT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4C50)
#define NGSM_SECUDATA_NGSMFLOAT_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1EA4CC0)
#define NGSM_SECUDATA_NGSMFLOAT_SUBDATA_OFFSET UNITYSDK_OFFSET(0x1EA4D30)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmFloat_TypeDefinitionIndex = 21245;

	class NgsmFloat : public <>c__DisplayClass85_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMFLOAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMFLOAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single GetData()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMFLOAT_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMFLOAT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMFLOAT_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMFLOAT_SUBDATA_OFFSET))(arg, nullptr);
		}

	};
}

