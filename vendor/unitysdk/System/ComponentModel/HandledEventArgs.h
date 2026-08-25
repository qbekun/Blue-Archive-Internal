#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32330)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32380)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x9B323D0)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x9B323E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int HandledEventArgs_TypeDefinitionIndex = 29394;

	class HandledEventArgs : public Il2CppObject
	{
	public:
		::System::Boolean _Handled_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Handled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_GET_HANDLED_OFFSET))(nullptr);
		}

		::System::Void set_Handled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_SET_HANDLED_OFFSET))(arg, nullptr);
		}

	};
}

