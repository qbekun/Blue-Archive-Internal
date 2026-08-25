#pragma once
#include "../unitysdk.h"

#define NPA_INXPTOYAPPLICATIONQUITHANDLER_QUIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPToyApplicationQuitHandler_TypeDefinitionIndex = 25556;

	class INXPToyApplicationQuitHandler : public Il2CppObject
	{
	public:
		::System::Void Quit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYAPPLICATIONQUITHANDLER_QUIT_OFFSET))(arg, nullptr);
		}

	};
}

