#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentStageInfo; }
namespace MX::Data { class EventContentSeasonInfo; }

#define <>C__DISPLAYCLASS97_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB2CB0)
#define <>C__DISPLAYCLASS97_0__ACTIVATEBACKBUTTONS_B__2_OFFSET UNITYSDK_OFFSET(0xBB9B40)
#define <>C__DISPLAYCLASS97_0__ACTIVATEBACKBUTTONS_B__3_OFFSET UNITYSDK_OFFSET(0xBB9B70)

	inline static constexpr unsigned int <>c__DisplayClass97_0_TypeDefinitionIndex = 8588;

	class <>c__DisplayClass97_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentStageInfo* eventContentStageInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS97_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ActivateBackButtons_b__2(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS97_0__ACTIVATEBACKBUTTONS_B__2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ActivateBackButtons_b__3(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS97_0__ACTIVATEBACKBUTTONS_B__3_OFFSET))(arg, nullptr);
		}

	};

