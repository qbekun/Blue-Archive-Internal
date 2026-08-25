#pragma once
#include "unitysdk.h"

namespace MXField::Shared::Data { class FieldSeasonInfo; }
namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace MXField { class FieldBridge; }
namespace MX::Data { class FieldContentStageInfo; }
class LoginTask;
namespace MX::Data { class EventContentSeasonInfo; }
class UIPopup_System;

#define <>C__DISPLAYCLASS53_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xE649D0)
#define <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__0_OFFSET UNITYSDK_OFFSET(0xE65060)
#define <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__1_OFFSET UNITYSDK_OFFSET(0xE65090)
#define <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__2_OFFSET UNITYSDK_OFFSET(0xE65270)
#define <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__4_OFFSET UNITYSDK_OFFSET(0xE65380)
#define <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__3_OFFSET UNITYSDK_OFFSET(0xE65420)

	inline static constexpr unsigned int <>c__DisplayClass53_0_TypeDefinitionIndex = 10483;

	class <>c__DisplayClass53_0 : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldSeasonInfo* seasonInfo; // 0x10
		::MX::GameLogic::DBModel::ContentSaveDB* contentSave; // 0x18
		::MXField::FieldBridge* __4__this; // 0x20
		::MX::Data::FieldContentStageInfo* stageInfo; // 0x28
		LoginTask* loginTask; // 0x30
		::System::Action* __9__4; // 0x38
		::System::Action* __9__2; // 0x40
		::System::Action* __9__3; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryContinue_b__0(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _TryContinue_b__1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _TryContinue_b__2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__2_OFFSET))(nullptr);
		}

		::System::Void _TryContinue_b__4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__4_OFFSET))(nullptr);
		}

		::System::Void _TryContinue_b__3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_0__TRYCONTINUE_B__3_OFFSET))(nullptr);
		}

	};

