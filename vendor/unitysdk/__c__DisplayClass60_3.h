#pragma once
#include "unitysdk.h"

class ParcelExchangeData;
namespace MX::Data { class AutoSynthInfo; }

#define <>C__DISPLAYCLASS60_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x265D9D0)
#define <>C__DISPLAYCLASS60_3__HANDLEITEMAUTOSYNTHRESPONSEMESSAGE_B__2_OFFSET UNITYSDK_OFFSET(0x265FF30)

	inline static constexpr unsigned int <>c__DisplayClass60_3_TypeDefinitionIndex = 6633;

	class <>c__DisplayClass60_3 : public Il2CppObject
	{
	public:
		ParcelExchangeData* find; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HandleItemAutoSynthResponseMessage_b__2(::MX::Data::AutoSynthInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::AutoSynthInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_3__HANDLEITEMAUTOSYNTHRESPONSEMESSAGE_B__2_OFFSET))(arg, nullptr);
		}

	};

