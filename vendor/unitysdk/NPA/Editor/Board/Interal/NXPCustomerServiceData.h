#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_LOADJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C556D0)
#define NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_GETMETAINFO_OFFSET UNITYSDK_OFFSET(0x9C62E80)
#define NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_GETEMAILADDRESS_OFFSET UNITYSDK_OFFSET(0x9C635D0)
#define NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_GETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9C634A0)

namespace NPA::Editor::Board::Interal
{
	inline static constexpr unsigned int NXPCustomerServiceData_TypeDefinitionIndex = 26913;

	class NXPCustomerServiceData : public Il2CppObject
	{
	public:
		::System::String* LoadJavaScript(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_LOADJAVASCRIPT_OFFSET))(arg, nullptr);
		}

		::System::String* GetMetaInfo(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_GETMETAINFO_OFFSET))(arg, nullptr);
		}

		::System::String* GetEmailAddress()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_GETEMAILADDRESS_OFFSET))(nullptr);
		}

		::System::String* GetLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_INTERAL_NXPCUSTOMERSERVICEDATA_GETLANGUAGE_OFFSET))(nullptr);
		}

	};
}

