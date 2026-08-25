#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ICANCELADDNEW_CANCELNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICANCELADDNEW_ENDNEW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ICancelAddNew_TypeDefinitionIndex = 29398;

	class ICancelAddNew : public Il2CppObject
	{
	public:
		::System::Void CancelNew(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICANCELADDNEW_CANCELNEW_OFFSET))(arg, nullptr);
		}

		::System::Void EndNew(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICANCELADDNEW_ENDNEW_OFFSET))(arg, nullptr);
		}

	};
}

