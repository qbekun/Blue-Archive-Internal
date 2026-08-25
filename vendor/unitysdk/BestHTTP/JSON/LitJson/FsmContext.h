#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class Lexer; }

#define BESTHTTP_JSON_LITJSON_FSMCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B2F30)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int FsmContext_TypeDefinitionIndex = 23325;

	class FsmContext : public Il2CppObject
	{
	public:
		::System::Boolean Return; // 0x10
		::System::Int32 NextState; // 0x14
		::BestHTTP::JSON::LitJson::Lexer* L; // 0x18
		::System::Int32 StateStack; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_FSMCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

