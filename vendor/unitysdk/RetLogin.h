#pragma once
#include "unitysdk.h"

namespace NPA { class NPLoginType; }

#define RETLOGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D960)

	inline static constexpr unsigned int RetLogin_TypeDefinitionIndex = 3874;

	class RetLogin : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18
		::NPA::NPLoginType* LOGIN_METHOD; // 0x20
		::System::String* UID; // 0x28
		::System::String* BIRTH; // 0x30
		::System::String* COUNTRY; // 0x38
		::System::String* EMAIL; // 0x40
		::System::Int64 NPSN; // 0x48
		::System::String* NPTOKEN; // 0x50
		::System::String* NGSMTOKEN; // 0x58
		::System::Int32 LOGIN_RESULT_TYPE; // 0x60
		::System::String* ADVERTISEMENT_ID; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETLOGIN_.CTOR_OFFSET))(nullptr);
		}

	};

