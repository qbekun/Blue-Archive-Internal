#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }

#define <>C__DISPLAYCLASS191_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1899F20)
#define <>C__DISPLAYCLASS191_1__PREPAREINITIALDATA_B__6_OFFSET UNITYSDK_OFFSET(0x189C390)

	inline static constexpr unsigned int <>c__DisplayClass191_1_TypeDefinitionIndex = 16002;

	class <>c__DisplayClass191_1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* uniqueIds; // 0x10
		::Il2CppArray<::System::Object*>* personalityIds; // 0x18
		<>c__DisplayClass191_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS191_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PrepareInitialData_b__6(::MX::Data::Excel::CharacterExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS191_1__PREPAREINITIALDATA_B__6_OFFSET))(arg, nullptr);
		}

	};

