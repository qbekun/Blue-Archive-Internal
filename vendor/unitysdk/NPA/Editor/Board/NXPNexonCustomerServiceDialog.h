#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NPAccount; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NPCSInfo; }
namespace NPA { class NPRequestTypeTag; }

#define NPA_EDITOR_BOARD_NXPNEXONCUSTOMERSERVICEDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C555F0)
#define NPA_EDITOR_BOARD_NXPNEXONCUSTOMERSERVICEDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C558D0)
#define NPA_EDITOR_BOARD_NXPNEXONCUSTOMERSERVICEDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C558E0)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPNexonCustomerServiceDialog_TypeDefinitionIndex = 26894;

	class NXPNexonCustomerServiceDialog : public Il2CppObject
	{
	public:
		::NPA::NPAccount* account; // 0x98

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPNEXONCUSTOMERSERVICEDIALOG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPNEXONCUSTOMERSERVICEDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPNEXONCUSTOMERSERVICEDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

	};
}

