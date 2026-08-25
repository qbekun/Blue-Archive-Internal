#pragma once
#include "unitysdk.h"

namespace MX::Data { class MiniGameCardData; }

#define <>C__DISPLAYCLASS82_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1002340)
#define <>C__DISPLAYCLASS82_0__CALCTOTALDISCARDPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x10029D0)

	inline static constexpr unsigned int <>c__DisplayClass82_0_TypeDefinitionIndex = 12651;

	class <>c__DisplayClass82_0 : public Il2CppObject
	{
	public:
		::MX::Data::MiniGameCardData* data; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS82_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _CalcTotalDiscardPoint_b__0(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS82_0__CALCTOTALDISCARDPOINT_B__0_OFFSET))(arg, nullptr);
		}

	};

