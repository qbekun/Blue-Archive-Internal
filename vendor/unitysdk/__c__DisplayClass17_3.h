#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkLoginSelectDialog; }
namespace NPA::InfaceSDK { class NXPInsignLinkTicketResponse; }

#define <>C__DISPLAYCLASS17_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C72AD0)
#define <>C__DISPLAYCLASS17_3__LOGININTERNAL_B__5_OFFSET UNITYSDK_OFFSET(0x9C72ED0)
#define <>C__DISPLAYCLASS17_3__LOGININTERNAL_B__6_OFFSET UNITYSDK_OFFSET(0x9C72F30)
#define <>C__DISPLAYCLASS17_3__LOGININTERNAL_B__7_OFFSET UNITYSDK_OFFSET(0x9C73170)

	inline static constexpr unsigned int <>c__DisplayClass17_3_TypeDefinitionIndex = 26950;

	class <>c__DisplayClass17_3 : public Il2CppObject
	{
	public:
		AccountLinkTokenResult* authTokenForCreateLink; // 0x10
		::NPA::Editor::Auth::NXPAccountLinkLoginSelectDialog* dialog; // 0x38
		<>c__DisplayClass17_1* CS$__8__locals3; // 0x40
		Il2CppObject* __9__7; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoginInternal_b__5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_3__LOGININTERNAL_B__5_OFFSET))(nullptr);
		}

		::System::Void _LoginInternal_b__6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_3__LOGININTERNAL_B__6_OFFSET))(nullptr);
		}

		::System::Void _LoginInternal_b__7(::NPA::InfaceSDK::NXPInsignLinkTicketResponse* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::NXPInsignLinkTicketResponse*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS17_3__LOGININTERNAL_B__7_OFFSET))(arg, nullptr);
		}

	};

