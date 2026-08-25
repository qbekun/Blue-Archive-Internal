#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class LinkSessionTicket; }

#define NPA_EDITOR_AUTH_LINKSESSIONTICKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6CEA0)
#define NPA_EDITOR_AUTH_LINKSESSIONTICKET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9C6CEB0)
#define NPA_EDITOR_AUTH_LINKSESSIONTICKET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9C6CED0)
#define NPA_EDITOR_AUTH_LINKSESSIONTICKET_CLEAR_OFFSET UNITYSDK_OFFSET(0x9C6CEE0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int LinkSessionTicket_TypeDefinitionIndex = 26938;

	class LinkSessionTicket : public Il2CppObject
	{
	public:
		::System::String* _ticket; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_LINKSESSIONTICKET_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean op_Implicit(::NPA::Editor::Auth::LinkSessionTicket* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Auth::LinkSessionTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_LINKSESSIONTICKET_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Implicit(::NPA::Editor::Auth::LinkSessionTicket* arg)
		{
			return (return (::System::String*(*)(::NPA::Editor::Auth::LinkSessionTicket*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_LINKSESSIONTICKET_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_LINKSESSIONTICKET_CLEAR_OFFSET))(nullptr);
		}

	};
}

