#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class Token; }

#define NPA_EDITOR_AUTH_TOKEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9C6CF30)
#define NPA_EDITOR_AUTH_TOKEN_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9C6CF40)
#define NPA_EDITOR_AUTH_TOKEN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9C6CF50)
#define NPA_EDITOR_AUTH_TOKEN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9C6CF60)
#define NPA_EDITOR_AUTH_TOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6CF70)
#define NPA_EDITOR_AUTH_TOKEN_TICKET_OFFSET UNITYSDK_OFFSET(0x9C6CF80)
#define NPA_EDITOR_AUTH_TOKEN_GAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C6D010)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 26939;

	class Token : public Il2CppObject
	{
	public:
		::System::String* _Type_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18

		::System::String* get_Type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_SET_TYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::Token* Ticket(::System::String* str)
		{
			return (return (::NPA::Editor::Auth::Token*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_TICKET_OFFSET))(str, nullptr);
		}

		::NPA::Editor::Auth::Token* GameToken(::System::String* str)
		{
			return (return (::NPA::Editor::Auth::Token*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_TOKEN_GAMETOKEN_OFFSET))(str, nullptr);
		}

	};
}

