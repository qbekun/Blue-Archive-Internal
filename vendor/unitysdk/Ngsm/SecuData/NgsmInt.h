#pragma once
#include "../../unitysdk.h"

#define NGSM_SECUDATA_NGSMINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4DA0)
#define NGSM_SECUDATA_NGSMINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4DE0)
#define NGSM_SECUDATA_NGSMINT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4E40)
#define NGSM_SECUDATA_NGSMINT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA4EA0)
#define NGSM_SECUDATA_NGSMINT_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1EA4F10)
#define NGSM_SECUDATA_NGSMINT_SUBDATA_OFFSET UNITYSDK_OFFSET(0x1EA4F80)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmInt_TypeDefinitionIndex = 21246;

	class NgsmInt : public <>c__DisplayClass83_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetData()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMINT_SUBDATA_OFFSET))(arg, nullptr);
		}

	};
}

