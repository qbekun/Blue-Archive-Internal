#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_AUTH_INTERFACE_ACCOUNT_DELETE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Auth::Interface
{
	inline static constexpr unsigned int Account_TypeDefinitionIndex = 27205;

	class Account : public Il2CppObject
	{
	public:
		::System::Void Delete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INTERFACE_ACCOUNT_DELETE_OFFSET))(arg, nullptr);
		}

	};
}

