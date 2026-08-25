#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x9B4A750)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_SET_CANCEL_OFFSET UNITYSDK_OFFSET(0x9B4A760)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A770)
#define SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A7C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CancelEventArgs_TypeDefinitionIndex = 29472;

	class CancelEventArgs : public Il2CppObject
	{
	public:
		::System::Boolean _Cancel_k__BackingField; // 0x10

		::System::Boolean get_Cancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_GET_CANCEL_OFFSET))(nullptr);
		}

		::System::Void set_Cancel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_SET_CANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CANCELEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

