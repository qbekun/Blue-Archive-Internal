#pragma once
#include "../unitysdk.h"

#define SYSTEM_IOSELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x9AD7F30)

namespace System
{
	inline static constexpr unsigned int IOSelector_TypeDefinitionIndex = 29196;

	class IOSelector : public Il2CppObject
	{
	public:
		::System::Void Add(::System::Int32 arg, ::System::IOSelectorJob* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::IOSelectorJob*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOSELECTOR_ADD_OFFSET))(arg, arg, nullptr);
		}

	};
}

