#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexaTile; }

#define <>C__DISPLAYCLASS27_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1438190)
#define <>C__DISPLAYCLASS27_0__GETAIUNITTRACEROUTE_B__0_OFFSET UNITYSDK_OFFSET(0x14381A0)

	inline static constexpr unsigned int <>c__DisplayClass27_0_TypeDefinitionIndex = 14888;

	class <>c__DisplayClass27_0 : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaUnit* unit; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS27_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetAIUnitTraceRoute_b__0(::MX::Campaign::HexaTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS27_0__GETAIUNITTRACEROUTE_B__0_OFFSET))(arg, nullptr);
		}

	};

