#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class SNSPostDB; }
namespace MX::Data::Excel { class SNSPostExcel; }

#define <>C__DISPLAYCLASS56_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xADFA10)
#define <>C__DISPLAYCLASS56_2__SETUI_B__9_OFFSET UNITYSDK_OFFSET(0xAE5450)

	inline static constexpr unsigned int <>c__DisplayClass56_2_TypeDefinitionIndex = 8086;

	class <>c__DisplayClass56_2 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SNSPostDB* postDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetUI_b__9(::MX::Data::Excel::SNSPostExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::SNSPostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_2__SETUI_B__9_OFFSET))(arg, nullptr);
		}

	};

