#pragma once
#include "unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define <>C__DISPLAYCLASS23_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D6ADA0)
#define <>C__DISPLAYCLASS23_3__LOGIN_B__5_OFFSET UNITYSDK_OFFSET(0x9D6ADB0)
#define <>C__DISPLAYCLASS23_3__LOGIN_B__6_OFFSET UNITYSDK_OFFSET(0x9D6AE70)

	inline static constexpr unsigned int <>c__DisplayClass23_3_TypeDefinitionIndex = 26204;

	class <>c__DisplayClass23_3 : public Il2CppObject
	{
	public:
		::System::Int32 errorCode; // 0x10
		::System::String* errormessage; // 0x18
		::NPA::SimpleJSON::JSONNode* openPortResultResult; // 0x20
		<>c__DisplayClass23_2* CS$__8__locals3; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Login_b__5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_3__LOGIN_B__5_OFFSET))(nullptr);
		}

		::System::Void _Login_b__6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_3__LOGIN_B__6_OFFSET))(nullptr);
		}

	};

