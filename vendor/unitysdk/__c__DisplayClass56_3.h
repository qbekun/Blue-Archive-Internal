#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class SNSPostExcel; }
class FeedItemData;

#define <>C__DISPLAYCLASS56_3_.CTOR_OFFSET UNITYSDK_OFFSET(0xADFA20)
#define <>C__DISPLAYCLASS56_3__SETUI_B__10_OFFSET UNITYSDK_OFFSET(0xAE5480)

	inline static constexpr unsigned int <>c__DisplayClass56_3_TypeDefinitionIndex = 8087;

	class <>c__DisplayClass56_3 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::SNSPostExcel* postExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetUI_b__10(FeedItemData* arg)
		{
			return ((::System::Boolean(*)(FeedItemData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_3__SETUI_B__10_OFFSET))(arg, nullptr);
		}

	};

