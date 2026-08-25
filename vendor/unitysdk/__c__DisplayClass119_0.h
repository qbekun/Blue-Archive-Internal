#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }

#define <>C__DISPLAYCLASS119_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1891840)
#define <>C__DISPLAYCLASS119_0__GETCOMBATSTYLEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x189C350)

	inline static constexpr unsigned int <>c__DisplayClass119_0_TypeDefinitionIndex = 16000;

	class <>c__DisplayClass119_0 : public Il2CppObject
	{
	public:
		::System::Int64 characterUniqueId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS119_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetCombatStyleIndex_b__0(::MX::Data::Excel::CharacterExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS119_0__GETCOMBATSTYLEINDEX_B__0_OFFSET))(arg, nullptr);
		}

	};

