#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentBuffExcel; }

#define <>C__DISPLAYCLASS309_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D65E0)
#define <>C__DISPLAYCLASS309_0__TRYGETBUFFEXCELCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D65F0)

	inline static constexpr unsigned int <>c__DisplayClass309_0_TypeDefinitionIndex = 16104;

	class <>c__DisplayClass309_0 : public Il2CppObject
	{
	public:
		::System::Int64 buffId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS309_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetBuffExcelClient_b__0(::MX::Data::Excel::EventContentBuffExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS309_0__TRYGETBUFFEXCELCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

