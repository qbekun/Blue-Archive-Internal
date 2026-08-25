#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class ErrSet; }

#define NPA_EDITOR_AUTH_ACCOUNTLINKERROR_GET_DELINKREQUIRED_OFFSET UNITYSDK_OFFSET(0x9C6D0A0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int AccountLinkError_TypeDefinitionIndex = 26940;

	class AccountLinkError : public Il2CppObject
	{
	public:
		::NPA::Editor::ErrSet* get_DelinkRequired()
		{
			return (return (::NPA::Editor::ErrSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_ACCOUNTLINKERROR_GET_DELINKREQUIRED_OFFSET))(nullptr);
		}

	};
}

