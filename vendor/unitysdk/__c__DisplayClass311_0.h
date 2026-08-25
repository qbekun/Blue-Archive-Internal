#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentBuffGroupExcel; }

#define <>C__DISPLAYCLASS311_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6610)
#define <>C__DISPLAYCLASS311_0__GETBUFFGROUPPROBTABLECLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6620)

	inline static constexpr unsigned int <>c__DisplayClass311_0_TypeDefinitionIndex = 16105;

	class <>c__DisplayClass311_0 : public Il2CppObject
	{
	public:
		Il2CppObject* stageExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS311_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetBuffGroupProbTableClient_b__0(::MX::Data::Excel::EventContentBuffGroupExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentBuffGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS311_0__GETBUFFGROUPPROBTABLECLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

