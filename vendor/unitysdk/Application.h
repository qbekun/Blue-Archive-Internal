#pragma once
#include "unitysdk.h"

#define APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0x9BC3450)

	inline static constexpr unsigned int Application_TypeDefinitionIndex = 25571;

	class Application : public Il2CppObject
	{
	public:
		::System::Void Quit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + APPLICATION_QUIT_OFFSET))(arg, nullptr);
		}

	};

