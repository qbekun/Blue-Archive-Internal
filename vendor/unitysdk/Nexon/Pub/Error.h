#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_ERROR_GET_CODE_OFFSET UNITYSDK_OFFSET(0x954C310)
#define NEXON_PUB_ERROR_SET_CODE_OFFSET UNITYSDK_OFFSET(0x954C320)
#define NEXON_PUB_ERROR_GET_MSG_OFFSET UNITYSDK_OFFSET(0x954C330)
#define NEXON_PUB_ERROR_SET_MSG_OFFSET UNITYSDK_OFFSET(0x954C340)
#define NEXON_PUB_ERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x954B460)
#define NEXON_PUB_ERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C350)

namespace Nexon::Pub
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 37542;

	class Error : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18

		::System::Int32 get_Code()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ERROR_GET_CODE_OFFSET))(nullptr);
		}

		::System::Void set_Code(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ERROR_SET_CODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Msg()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ERROR_GET_MSG_OFFSET))(nullptr);
		}

		::System::Void set_Msg(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ERROR_SET_MSG_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ERROR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_ERROR_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

