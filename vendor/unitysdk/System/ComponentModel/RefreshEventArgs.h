#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B47320)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B473B0)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_COMPONENTCHANGED_OFFSET UNITYSDK_OFFSET(0x9B47410)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_TYPECHANGED_OFFSET UNITYSDK_OFFSET(0x9B47420)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshEventArgs_TypeDefinitionIndex = 29452;

	class RefreshEventArgs : public Il2CppObject
	{
	public:
		::System::Object* _ComponentChanged_k__BackingField; // 0x10
		::System::Type* _TypeChanged_k__BackingField; // 0x18

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_ComponentChanged()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_COMPONENTCHANGED_OFFSET))(nullptr);
		}

		::System::Type* get_TypeChanged()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_TYPECHANGED_OFFSET))(nullptr);
		}

	};
}

