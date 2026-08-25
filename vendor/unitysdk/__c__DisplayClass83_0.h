#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class HexaTile; }

#define <>C__DISPLAYCLASS83_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xF89390)
#define <>C__DISPLAYCLASS83_0__GETEVACUATIONPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0xF893A0)

	inline static constexpr unsigned int <>c__DisplayClass83_0_TypeDefinitionIndex = 12261;

	class <>c__DisplayClass83_0 : public Il2CppObject
	{
	public:
		::MX::Campaign::HexLocation* origin; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS83_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _GetEvacuationPosition_b__0(::MX::Campaign::HexaTile* arg, ::MX::Campaign::HexaTile* arg2)
		{
			return ((::System::Int32(*)(::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS83_0__GETEVACUATIONPOSITION_B__0_OFFSET))(arg, arg2, nullptr);
		}

	};

