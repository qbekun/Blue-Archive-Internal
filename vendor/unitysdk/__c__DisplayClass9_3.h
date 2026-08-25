#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ScenarioCollectionDB; }
class <>c__DisplayClass9_2;
class UIPopup_SpecialOperationCollection;

#define <>C__DISPLAYCLASS9_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F950B0)
#define <>C__DISPLAYCLASS9_3__HANDLEMESSAGE_B__4_OFFSET UNITYSDK_OFFSET(0x1F95350)

	inline static constexpr unsigned int <>c__DisplayClass9_3_TypeDefinitionIndex = 2739;

	class <>c__DisplayClass9_3 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ScenarioCollectionDB* first; // 0x10
		<>c__DisplayClass9_2* CS$__8__locals3; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleMessage_b__4(UIPopup_SpecialOperationCollection* arg)
		{
			((::System::Void(*)(UIPopup_SpecialOperationCollection*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_3__HANDLEMESSAGE_B__4_OFFSET))(arg, nullptr);
		}

	};

