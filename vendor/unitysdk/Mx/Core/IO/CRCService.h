#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::IO { class CRCResult; }

#define MX_CORE_IO_CRCSERVICE_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1030A20)
#define MX_CORE_IO_CRCSERVICE_COMPUTEFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1030BC0)
#define MX_CORE_IO_CRCSERVICE_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1030B50)
#define MX_CORE_IO_CRCSERVICE_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1030CB0)
#define MX_CORE_IO_CRCSERVICE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1031420)
#define MX_CORE_IO_CRCSERVICE__COMPUTE_G__UPDATECRC|3_0_OFFSET UNITYSDK_OFFSET(0x1031390)

namespace MX::Core::IO
{
	inline static constexpr unsigned int CRCService_TypeDefinitionIndex = 12825;

	class CRCService : public Il2CppObject
	{
	public:
		::System::Int64 Compute(::System::String* str)
		{
			return ((::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CRCSERVICE_COMPUTE_OFFSET))(str, nullptr);
		}

		Il2CppObject* ComputeFromFileAsync(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CRCSERVICE_COMPUTEFROMFILEASYNC_OFFSET))(str, nullptr);
		}

		::System::Int64 Compute(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CRCSERVICE_COMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Int64 Compute(::System::String* str, ::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CRCSERVICE_COMPUTE_OFFSET))(str, arg, nullptr);
		}

		::MX::Core::IO::CRCResult* Compare(::System::String* str, ::System::Int64 arg)
		{
			return ((::MX::Core::IO::CRCResult*(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CRCSERVICE_COMPARE_OFFSET))(str, arg, nullptr);
		}

		::System::Void _Compute_g__UpdateCRC|3_0(::System::Int32 arg, <>c__DisplayClass3_0&* arg2)
		{
			((::System::Void(*)(::System::Int32, <>c__DisplayClass3_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CRCSERVICE__COMPUTE_G__UPDATECRC|3_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

