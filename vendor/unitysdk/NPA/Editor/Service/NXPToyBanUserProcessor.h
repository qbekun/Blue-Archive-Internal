#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_SERVICE_NXPTOYBANUSERPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9BFDB80)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERPROCESSOR_SHOWCONFIRMPOPUP_OFFSET UNITYSDK_OFFSET(0x9BFDE70)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERPROCESSOR_STARTIDENTITYVERIFICATIONWINDOW_OFFSET UNITYSDK_OFFSET(0x9BFDFA0)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPToyBanUserProcessor_TypeDefinitionIndex = 26520;

	class NXPToyBanUserProcessor : public Il2CppObject
	{
	public:
		::System::Void Process(::System::Int32 arg, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERPROCESSOR_PROCESS_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void ShowConfirmPopup(::System::String* str, ::System::String* str, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERPROCESSOR_SHOWCONFIRMPOPUP_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void StartIdentityVerificationWindow(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERPROCESSOR_STARTIDENTITYVERIFICATIONWINDOW_OFFSET))(str, nullptr);
		}

	};
}

