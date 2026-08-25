#pragma once
#include "../../unitysdk.h"

#define NGSM_SECUDATA_NGSMINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4FF0)
#define NGSM_SECUDATA_NGSMINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5030)
#define NGSM_SECUDATA_NGSMINT64_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA5090)
#define NGSM_SECUDATA_NGSMINT64_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA50F0)
#define NGSM_SECUDATA_NGSMINT64_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1EA5160)
#define NGSM_SECUDATA_NGSMINT64_SUBDATA_OFFSET UNITYSDK_OFFSET(0x1EA51D0)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmInt64_TypeDefinitionIndex = 21247;

	class NgsmInt64 : public <>c__DisplayClass84_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT64_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetData()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT64_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT64_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT64_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT64_SUBDATA_OFFSET))(arg, nullptr);
		}

	};
}

